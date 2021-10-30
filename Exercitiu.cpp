#include "Exercitiu.h"

Exercitiu::Exercitiu(){}

Exercitiu::Exercitiu(int nr_repetari, int nr_serii, int durata, const std::string &nume_exercitiu) : nr_repetari(nr_repetari) , nr_serii(nr_serii), durata(durata), nume_exercitiu(nume_exercitiu){
            // Suntem in constructorul de initializare
        }
Exercitiu::Exercitiu(const Exercitiu &copie){
            this->nr_repetari=copie.nr_repetari;
            this->nr_serii=copie.nr_serii;
            this->durata=copie.durata;
            this->nume_exercitiu=copie.nume_exercitiu;
            // Suntem in constructorul de copiere
        }
Exercitiu& Exercitiu::operator=(const Exercitiu& copie){
            nr_repetari=copie.nr_repetari;
            nr_serii=copie.nr_serii;
            durata=copie.durata;
            nume_exercitiu=copie.nume_exercitiu;
            return *this;
            // Suntem in operatorul=
        }
const std::string & Exercitiu::getNume() const {
            return nume_exercitiu;}

Exercitiu::~Exercitiu(){
           // std::cout<<"Doar printez mesajul asta ca sa verific ca merge destructor-ul";
        }

std::ostream &operator<<(std::ostream &os, const Exercitiu &Exercitiu) {
        os << "Nume exercitiu: " << Exercitiu.nume_exercitiu << std::endl << "Numar de repetari: " << Exercitiu.nr_repetari << std::endl << "Numar de serii: " << Exercitiu.nr_serii << std::endl << "Durata in minute: " << Exercitiu.durata << std::endl;
        // Suntem in operatorul <<
        return os;
        }

void Exercitiu::nr_total_calorii_arse(float greutate){
            int MET;
            std::cout<<"Alegerea MET: Exercitiu usor - sub 3" << std::endl << "Exercitiu mediu - intre 3 si 6" << std::endl << "Exercitiu intens - peste 6" <<std::endl;
            inFile1.in>>MET;
            std::cout<<"Valoarea introdusa: "<<MET;
            std:: cout << "Numarul de calorii arse cu acest exercitiu: " << durata * (MET*3.5*greutate)/200;
        }