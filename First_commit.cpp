#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>

std::ifstream inFile1;
std::ifstream inFile2;

class Exercitiu{
    private:
        int nr_repetari;
        int nr_serii;
        int durata;
        std::string nume_exercitiu;
    public:
        Exercitiu(){

        }
        Exercitiu(int nr_repetari, int nr_serii, int durata, const std::string &nume_exercitiu) : nr_repetari(nr_repetari) , nr_serii(nr_serii), durata(durata), nume_exercitiu(nume_exercitiu){
            // Suntem in constructorul de initializare
        }

        Exercitiu(const Exercitiu &copie){
            this->nr_repetari=copie.nr_repetari;
            this->nr_serii=copie.nr_serii;
            this->durata=copie.durata;
            this->nume_exercitiu=copie.nume_exercitiu;
            // Suntem in constructorul de cc
        }

        Exercitiu& operator=(const Exercitiu& copie){
            this->nr_repetari=copie.nr_repetari;
            this->nr_serii=copie.nr_serii;
            this->durata=copie.durata;
            this->nume_exercitiu=copie.nume_exercitiu;
            return *this;
            // Suntem in operatorul=
        }

        const std::string &getNume() const {
            return nume_exercitiu;}

        ~Exercitiu(){
           // std::cout<<"Doar printez mesajul asta ca sa verific ca merge destructor-ul";
        }

        friend std::ostream &operator<<(std::ostream &os, const Exercitiu &Exercitiu) {
        os << "Nume exercitiu: " << Exercitiu.nume_exercitiu << std::endl << "Numar de repetari: " << Exercitiu.nr_repetari << std::endl << "Numar de serii: " << Exercitiu.nr_serii << std::endl << "Durata in minute: " << Exercitiu.durata << std::endl;
        // Suntem in operatorul <<
        return os;
        }

        void nr_total_calorii_arse(float greutate){
            int MET;
            std::cout<<"Alegerea MET: Exercitiu usor - sub 3" << std::endl << "Exercitiu mediu - intre 3 si 6" << std::endl << "Exercitiu intens - peste 6" <<std::endl;
            inFile1>>MET;
            std::cout<<"Valoarea introdusa: "<<MET;
            std:: cout << "Numarul de calorii arse cu acest exercitiu: " << durata * (MET*3.5*greutate)/200;
        }
};

class Exercitiu_Maini: public Exercitiu{
    private:

    public:

};

class Exercitiu_Picioare: public Exercitiu{
    private:

    public:

};

class Exercitiu_Abdomen: public Exercitiu{
    private:

    public:

};

class Nutritie{
    private:
        float carbohidrati;
        float grasimi;
        float fibre;
        float proteine;
        float apa;
    public:
        Nutritie(){}
        Nutritie(float carbohidrati, float grasimi, float fibre, float proteine, float apa) : carbohidrati(carbohidrati), grasimi(grasimi),  fibre(fibre), proteine(proteine), apa(apa){
            // Suntem in constructorul de initializare
        }
        friend std::ostream &operator<<(std::ostream &os, const Nutritie &Nutritie) {
            os << "Valorile sunt redate in grame." << std::endl << "Carbohidrati: " << Nutritie.carbohidrati << std::endl << "Grasimi: " << Nutritie.grasimi << std::endl << "Fibre: " << Nutritie.fibre << std::endl << "Proteine: " << Nutritie.proteine << std::endl; 
            return os;
            // Suntem in operatorul <<
        }
};


class Utilizator{
    private:
    int varsta;
    float greutate;
    float inaltime;
    std::string sex;
    std::string nume;
    Nutritie nutritie;
    std::vector <Exercitiu> exercitii;
    public:
    Utilizator(int varsta, float greutate, float inaltime, const std::string &sex, const std::string &nume) : varsta(varsta), greutate(greutate), inaltime(inaltime), sex(sex), nume(nume){

    }
    Utilizator(int varsta, float greutate, float inaltime, const std::string &sex, const std::string &nume, const Nutritie &nutritie, const std::vector<Exercitiu> exercitii) : varsta(varsta), greutate(greutate), inaltime(inaltime), sex(sex), nume(nume), nutritie(nutritie),  exercitii( exercitii){
        // Suntem in constructorul de initializare
    }
    friend std::ostream &operator<<(std::ostream &os, const Utilizator &Utilizator) {
        os << "Nume utilizator: " << Utilizator.nume <<std::endl;
        os << "Sex: " << Utilizator.sex << std::endl;
        os << "Varsta: " << Utilizator.varsta << std::endl;
        os << "Greutate: " << Utilizator.greutate << std::endl;
        os << "Inaltime: " << Utilizator.inaltime << std::endl;
        os << "Valori nutritionale individuale pentru o zi: " << std::endl << Utilizator.nutritie;
        os << "Exercitii fizice selectate pentru azi: "<< std::endl;
        for(int i=0; i<Utilizator.exercitii.size(); i++)
            os << Utilizator.exercitii[i];
        return os;
         // Suntem in operatorul <<
        }
    void adauga_exercitiu(Exercitiu exercitiu){
        exercitii.push_back(exercitiu);
    }
    void scoate_exercitiu(){
        exercitii.pop_back();
    }
    float getGreutate() {
        return greutate;
    }
    int AMR(){
        float activitate;
        std::cout<<"Introduceti nivelul de activitate fizica zilnica dupa cum urmeaza: Sedentar(1.2), Putin activ(1.375), Moderat activ(1.55), Activ(1.725), Foarte activ(1.9)"<<std::endl;
        inFile2 >>activitate;
        std::cout<<"Valoarea introdusa: "<<activitate;
        std::cout<<"Numarul zilnic de calorii necesare pentru mentinerea greutatii actuale: ";
        if(sex == "masculin")
            return (10*greutate + 6.25*inaltime - 5*varsta + 5)*activitate;
        else
            return (10*greutate + 4.7*inaltime - 5*varsta -161)*activitate;
    }
    void IMC(){
        float IMC_result = greutate*std::pow(10, 4)/std::pow(inaltime, 2);
        std::cout<<"Indicele de masa corporala: " << IMC_result<<std::endl;
        switch (1){
            case 1: 
                if(IMC_result < 16.0){
                    std::cout<<"Subnutrit";
                    break;
                }
            case 2:
                if(IMC_result < 18.5){
                    std::cout<<"Subponderal"<<std::endl;
                    break;
                }
            case 3:
                if(IMC_result < 25){
                    std::cout<<"Normal"<<std::endl;
                    break;
                }
            case 4:
                if(IMC_result < 30){
                    std::cout<<"Supraponderal"<<std::endl;
                    break;
                }
            case 5:
                if(IMC_result < 35){
                    std::cout<<"Obezitate clasa I"<<std::endl;
                    break;
                }
            case 6:
                if(IMC_result < 40){
                    std::cout<<"Obezitate clasa II"<<std::endl;
                    break;
                }
            case 7:
                if(IMC_result > 40){
                    std::cout<<"Obezitate clasa III"<<std::endl;
                    break;
                }

                    
        }
    }
};

int main(){
    inFile1.open("MET.in");
    if(inFile1.fail()){
        std::cerr << "Eroare la deschiderea fisierului!";
        exit(1);
    }
    inFile2.open("NivelActivitateFizica.in");
    if(inFile2.fail()){
        std::cerr << "Eroare la deschiderea fisierului!";
        exit(1);
    }
    Exercitiu a(15, 4, 10, "Forfecari");
    Exercitiu d(15, 5, 15, "Genoflexiuni");
    Exercitiu f(4, 4, 2, "Rotari de cap");
    Exercitiu b(20, 3, 15, "Abdomene");
    //std::cout << a; // testam operatorul <<
    Exercitiu h=a, c;
    //std::cout<<h; // testam cc-ul
    c = a;
    //std::cout << c; // testam operatorul=
    std::vector <Exercitiu> Exercitii={a, d, f};
    Nutritie x(300.0, 30.0,40.0 ,50.0, 2.0);
    // std::cout << x; // testam operatorul <<
    Utilizator e(20, 90.0, 185.0, "masculin", "Andrei", x, Exercitii);
    //e.adauga_exercitiu(b); // testez functia de add
    //std::cout << e;
    // e.scoate_exercitiu();
    // std::cout << e;
    // std::cout << e; // testam operatorul <<
    // std::cout << e.AMR()<<std::endl; //verificare metoda AMR
    // e.IMC(); //verificare metoda IMC
    // a.nr_total_calorii_arse(e.getGreutate());
    inFile1 .close();
    inFile2 .close();
    return 0;
}