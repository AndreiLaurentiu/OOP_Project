#pragma once
#include <string>
#include "Exercitiu.h"

class Exercitiu_abdomen: public Exercitiu{
    protected:
        void afis(std::ostream &os) const override;
    public:
        void play_animatie() const override;
        std::shared_ptr <Exercitiu> clone() const override;
         Exercitiu_abdomen(int nr_repetari, int nr_serii, float durata, const std::string &nume_exercitiu, float pauza_intre_serii, std::string echipament_necesar, const std::string grupa_de_muschi_principala_antrenata, const std::string grupa_de_muschi_secundara_antrenata);
         ~Exercitiu_abdomen();
         Exercitiu_abdomen();
};

class Exercitiu_maini: public Exercitiu{
    protected:
        void afis(std::ostream &os) const override;
    public:
         void play_animatie() const override;
         std::shared_ptr <Exercitiu> clone() const override;
         Exercitiu_maini(int nr_repetari, int nr_serii, float durata, const std::string &nume_exercitiu, float pauza_intre_serii, std::string echipament_necesar, const std::string grupa_de_muschi_principala_antrenata, const std::string grupa_de_muschi_secundara_antrenata);
         ~Exercitiu_maini();
         Exercitiu_maini();
};

class Exercitiu_picioare: public Exercitiu{
    protected:
        void afis(std::ostream &os) const override;
    public:
        void play_animatie() const override;
        std::shared_ptr <Exercitiu> clone() const override;
        Exercitiu_picioare(int nr_repetari, int nr_serii, float durata, const std::string &nume_exercitiu, float pauza_intre_serii, std::string echipament_necesar, const std::string grupa_de_muschi_principala_antrenata, const std::string grupa_de_muschi_secundara_antrenata);
         ~Exercitiu_picioare();
         Exercitiu_picioare();
};

class Exercitiu_spate: public Exercitiu{
     protected:
        void afis(std::ostream &os) const override;
    public:
         void play_animatie() const override;
         std::shared_ptr <Exercitiu> clone() const override;
         Exercitiu_spate(int nr_repetari, int nr_serii, float durata, const std::string &nume_exercitiu, float pauza_intre_serii, std::string echipament_necesar, const std::string grupa_de_muschi_principala_antrenata, const std::string grupa_de_muschi_secundara_antrenata);
         ~Exercitiu_spate();
         Exercitiu_spate();
};

class Exercitiu_umeri: public Exercitiu{
     protected:
        void afis(std::ostream &os) const override;
    public:
         void play_animatie() const override;
         std::shared_ptr <Exercitiu> clone() const override;
         Exercitiu_umeri(int nr_repetari, int nr_serii, float durata, const std::string &nume_exercitiu, float pauza_intre_serii, std::string echipament_necesar, const std::string grupa_de_muschi_principala_antrenata, const std::string grupa_de_muschi_secundara_antrenata);
         ~Exercitiu_umeri();
         Exercitiu_umeri();
};

class Exercitiu_piept: public Exercitiu{
    protected:
        void afis(std::ostream &os) const override;
    public:
         void play_animatie() const override;
         std::shared_ptr <Exercitiu> clone() const override;
         Exercitiu_piept(int nr_repetari, int nr_serii, float durata, const std::string &nume_exercitiu, float pauza_intre_serii, std::string echipament_necesar, const std::string grupa_de_muschi_principala_antrenata, const std::string grupa_de_muschi_secundara_antrenata);
         ~Exercitiu_piept();
         Exercitiu_piept();
};