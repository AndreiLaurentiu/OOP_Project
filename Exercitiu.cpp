#include "Exercitiu.h"

int Exercitiu::Id_max = 1;

void Exercitiu::validare_obiect(float durata, int nr_repetari, int nr_serii){
    if(durata < 1)
        throw exercitiu_prea_scurt();
    if(nr_repetari < 5)
        throw eroare_nr_repetari();
    if(nr_serii < 2)
        throw eroare_nr_serii();
}

Exercitiu::Exercitiu() : id(Id_max) {Id_max++;
    validare_obiect();
}

Exercitiu::Exercitiu(int nr_repetari, int nr_serii, float durata, const std::string &nume_exercitiu, float pauza_intre_serii, const std::string &echipament_necesar, const std::string &grupa_de_muschi_principala_antrenata, const std::string &grupa_de_muschi_secundara_antrenata) : nr_repetari(nr_repetari) , nr_serii(nr_serii), durata(durata), nume_exercitiu(nume_exercitiu) , pauza_intre_serii(pauza_intre_serii), echipament_necesar(echipament_necesar),
grupa_de_muschi_principala_antrenata(grupa_de_muschi_principala_antrenata), grupa_de_muschi_secundara_antrenata(grupa_de_muschi_secundara_antrenata), id(Id_max){
            Id_max++;
            validare_obiect(durata, nr_repetari, nr_serii);
            // Suntem in constructorul de initializare
        }
Exercitiu::Exercitiu(const Exercitiu &copie) : id(Id_max){
            this->nr_repetari=copie.nr_repetari;
            this->nr_serii=copie.nr_serii;
            this->durata=copie.durata;
            this->nume_exercitiu=copie.nume_exercitiu;
            this->pauza_intre_serii=copie.pauza_intre_serii;
            this->echipament_necesar=copie.echipament_necesar;
            this->grupa_de_muschi_principala_antrenata=copie.grupa_de_muschi_principala_antrenata;
            this->grupa_de_muschi_secundara_antrenata=copie.grupa_de_muschi_secundara_antrenata;
            Id_max++;
            validare_obiect(durata, nr_repetari, nr_serii);
            // Suntem in constructorul de copiere
        }
Exercitiu &Exercitiu::operator=(const Exercitiu& copie){
        if(this != &copie){
            nr_repetari=copie.nr_repetari;
            nr_serii=copie.nr_serii;
            durata=copie.durata;
            nume_exercitiu=copie.nume_exercitiu;
            grupa_de_muschi_principala_antrenata=copie.grupa_de_muschi_principala_antrenata;
            grupa_de_muschi_secundara_antrenata=copie.grupa_de_muschi_secundara_antrenata;
            pauza_intre_serii=copie.pauza_intre_serii;
            echipament_necesar=copie.echipament_necesar;
        }
            return *this;
            // Suntem in operatorul=
        }
const std::string & Exercitiu::getNume() const {
            return nume_exercitiu;}

Exercitiu::~Exercitiu(){
           // std::cout<<"Doar printez mesajul asta ca sa verific ca merge destructor-ul";
        }

std::ostream &operator<<(std::ostream &os, const Exercitiu &Exercitiu) {
        Exercitiu.afis(os);
        // Suntem in operatorul <<
        return os;
        }

void Exercitiu::nr_total_calorii_arse(float greutate, int MET){
            std::cout<<"Alegerea MET: Exercitiu usor - sub 3" << std::endl << "Exercitiu mediu - intre 3 si 6" << std::endl << "Exercitiu intens - peste 6" <<std::endl;
            std::cout<<"Valoarea introdusa: "<<MET<<std::endl;
            std:: cout << "Numarul de calorii arse cu acest exercitiu: " << round(durata * (MET*3.5*greutate)/200) << std::endl;
        }

void Exercitiu::afis(std::ostream &os) const{
    const auto &Exercitiu = *this;
    os << "Numar exercitiu: " << id << std::endl << "Nume exercitiu: " << Exercitiu.nume_exercitiu << std::endl << "Numar de repetari: " << Exercitiu.nr_repetari << std::endl << "Numar de serii: " << Exercitiu.nr_serii << std::endl << "Durata in minute: " << Exercitiu.durata << std::endl << "Pauza intre serii: " << Exercitiu.pauza_intre_serii << std::endl <<"Echipament necesar: " << Exercitiu.echipament_necesar << std::endl << "Grupa de muschi principala antrenata: " << Exercitiu.grupa_de_muschi_principala_antrenata << std::endl <<
    "Grupa de muschi principala antrenata: " << Exercitiu.grupa_de_muschi_secundara_antrenata << std::endl;
}

int Exercitiu::getId_max(){
    return Id_max;
}

void Exercitiu::setId_max(const int x){
    Id_max = x;
}
float Exercitiu::getDurata(){
    return durata;
    
}