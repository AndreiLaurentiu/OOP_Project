#include <iostream>
#include <fstream>

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
           // std::cout<<"Doar printez mesajul asta ca sa verific ca merge desctructor-ul";
        }

        friend std::ostream &operator<<(std::ostream &os, const Exercitiu &Exercitiu) {
        os << "Nume exercitiu: " << Exercitiu.nume_exercitiu << std::endl << "Numar de repetari: " << Exercitiu.nr_repetari << std::endl << "Numar de serii: " << Exercitiu.nr_serii << std::endl << "Durata in minute: " << Exercitiu.durata << std::endl;
        // Suntem in operatorul <<
        return os;
    }
};

class Utilizator{
    private:
    int varsta;
    float greutate;
    float inaltime;
    std::string nume;
    public:
    Utilizator(int varsta, float greutate, float inaltime, const std::string &nume) : varsta(varsta), greutate(greutate), inaltime(inaltime), nume(nume){
        // Suntem in constructorul de initializare
    }
    friend std::ostream &operator<<(std::ostream &os, const Utilizator &Utilizator) {
        os << "Nume utilizator: " << Utilizator.nume <<std::endl;
        os << "Varsta: " << Utilizator.varsta << std::endl;
        os << "Greutate: " << Utilizator.greutate << std::endl;
        os << "Inaltime: " << Utilizator.inaltime << std::endl;
        return os;
         // Suntem in operatorul <<
        }
};

int main(){
    std::string nume="Forfecari";
    Exercitiu t(15, 4, 10, nume);
    //std::cout << t; // testam operatorul <<
    Exercitiu d=t, z;
    //std::cout<<d; // testam cc-ul
    z = t;
    //std::cout<<z; // testam operatorul de atribuire
    Utilizator g(25, 80.0, 1.85, "Andrei");
    //std::cout << g; // testam operatorul <<
    return 0;
}