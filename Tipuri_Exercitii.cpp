#include "Tipuri_Exercitii.h"

void Exercitiu_abdomen::play_animatie() const{
    std::cout << "play ex_abdomen" << std::endl;
}

void Exercitiu_maini::play_animatie() const{
    std::cout << "play ex_maini" << std::endl;
}

void Exercitiu_picioare::play_animatie() const{
    std::cout << "play ex_picioare" << std::endl;
}

void Exercitiu_spate::play_animatie() const{
    std::cout << "play ex_spate" << std::endl;
}

void Exercitiu_umeri::play_animatie() const{
    std::cout << "play ex_umeri" << std::endl;
}

void Exercitiu_piept::play_animatie() const{
    std::cout << "play ex_piept" << std::endl;
}

std::shared_ptr <Exercitiu> Exercitiu_abdomen::clone() const {
    return std::make_shared <Exercitiu_abdomen>(*this);
}

std::shared_ptr <Exercitiu> Exercitiu_maini::clone() const {
    return std::make_shared <Exercitiu_maini>(*this);
}

std::shared_ptr <Exercitiu> Exercitiu_picioare::clone() const {
    return std::make_shared <Exercitiu_picioare>(*this);
}

std::shared_ptr <Exercitiu> Exercitiu_spate::clone() const {
    return std::make_shared <Exercitiu_spate>(*this);
}

std::shared_ptr <Exercitiu> Exercitiu_umeri::clone() const {
    return std::make_shared <Exercitiu_umeri>(*this);
}

std::shared_ptr <Exercitiu> Exercitiu_piept::clone() const {
    return std::make_shared <Exercitiu_piept>(*this);
}

Exercitiu_maini::Exercitiu_maini(int nr_repetari, int nr_serii, float durata, const std::string &nume_exercitiu, float pauza_intre_serii, std::string echipament_necesar, const std::string grupa_de_muschi_principala_antrenata, const std::string grupa_de_muschi_secundara_antrenata) : Exercitiu(nr_repetari, nr_serii, durata, nume_exercitiu, pauza_intre_serii, echipament_necesar, grupa_de_muschi_principala_antrenata, grupa_de_muschi_secundara_antrenata) {
    //std::cout << "Constructor subclasa" << std::endl;
} 
Exercitiu_maini::~Exercitiu_maini() {
    //std::cout << "Destructor subclasa" << std::endl;
} 

Exercitiu_abdomen::Exercitiu_abdomen(int nr_repetari, int nr_serii, float durata, const std::string &nume_exercitiu, float pauza_intre_serii, std::string echipament_necesar,const std::string grupa_de_muschi_principala_antrenata, const std::string grupa_de_muschi_secundara_antrenata) : Exercitiu(nr_repetari, nr_serii, durata, nume_exercitiu, pauza_intre_serii, echipament_necesar, grupa_de_muschi_principala_antrenata, grupa_de_muschi_secundara_antrenata) {}
Exercitiu_abdomen::~Exercitiu_abdomen() {}

Exercitiu_picioare::Exercitiu_picioare(int nr_repetari, int nr_serii, float durata, const std::string &nume_exercitiu, float pauza_intre_serii, std::string echipament_necesar,const std::string grupa_de_muschi_principala_antrenata, const std::string grupa_de_muschi_secundara_antrenata) : Exercitiu(nr_repetari, nr_serii, durata, nume_exercitiu, pauza_intre_serii, echipament_necesar, grupa_de_muschi_principala_antrenata, grupa_de_muschi_secundara_antrenata) {}
Exercitiu_picioare::~Exercitiu_picioare() {}

Exercitiu_spate::Exercitiu_spate(int nr_repetari, int nr_serii, float durata, const std::string &nume_exercitiu, float pauza_intre_serii, const std::string echipament_necesar,const std::string grupa_de_muschi_principala_antrenata, const std::string grupa_de_muschi_secundara_antrenata) : Exercitiu(nr_repetari, nr_serii, durata, nume_exercitiu, pauza_intre_serii, echipament_necesar, grupa_de_muschi_principala_antrenata, grupa_de_muschi_secundara_antrenata) {}
Exercitiu_spate::~Exercitiu_spate() {}

Exercitiu_umeri::Exercitiu_umeri(int nr_repetari, int nr_serii, float durata, const std::string &nume_exercitiu, float pauza_intre_serii, const std::string echipament_necesar, const std::string grupa_de_muschi_principala_antrenata, const std::string grupa_de_muschi_secundara_antrenata) : Exercitiu(nr_repetari, nr_serii, durata, nume_exercitiu, pauza_intre_serii, echipament_necesar, grupa_de_muschi_principala_antrenata, grupa_de_muschi_secundara_antrenata) {}
Exercitiu_umeri::~Exercitiu_umeri() {}

Exercitiu_piept::Exercitiu_piept(int nr_repetari, int nr_serii, float durata, const std::string &nume_exercitiu, float pauza_intre_serii, const std::string echipament_necesar,const std::string grupa_de_muschi_principala_antrenata, const std::string grupa_de_muschi_secundara_antrenata) : Exercitiu(nr_repetari, nr_serii, durata, nume_exercitiu, pauza_intre_serii, echipament_necesar, grupa_de_muschi_principala_antrenata, grupa_de_muschi_secundara_antrenata) {}
Exercitiu_piept::~Exercitiu_piept() {}

void Exercitiu_maini::afis(std::ostream &os) const {
    //os << "nr: " << nr << ", ";
    Exercitiu::afis(os);
}

void Exercitiu_abdomen::afis(std::ostream &os) const {
    //os << "nr: " << nr << ", ";
    Exercitiu::afis(os);
}

void Exercitiu_picioare::afis(std::ostream &os) const {
    //os << "nr: " << nr << ", ";
    Exercitiu::afis(os);
}

void Exercitiu_spate::afis(std::ostream &os) const {
    //os << "nr: " << nr << ", ";
    Exercitiu::afis(os);
}

void Exercitiu_umeri::afis(std::ostream &os) const {
    //os << "nr: " << nr << ", ";
    Exercitiu::afis(os);
}

void Exercitiu_piept::afis(std::ostream &os) const {
    //os << "nr: " << nr << ", ";
    Exercitiu::afis(os);
}

Exercitiu_maini::Exercitiu_maini() : Exercitiu(){}
Exercitiu_picioare::Exercitiu_picioare() : Exercitiu(){}
Exercitiu_spate::Exercitiu_spate() : Exercitiu(){}
Exercitiu_umeri::Exercitiu_umeri() : Exercitiu(){}
Exercitiu_abdomen::Exercitiu_abdomen() : Exercitiu(){}