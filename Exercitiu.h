#pragma once
#include <iostream>
#include <memory>
#include "Erori_exercitiu.h"
#include <cmath>

class Exercitiu{
    private:
        int nr_repetari;
        int nr_serii;
        float durata;
        std::string nume_exercitiu;
        float pauza_intre_serii;
        std::string echipament_necesar;
        std::string grupa_de_muschi_principala_antrenata;
        std::string grupa_de_muschi_secundara_antrenata;
        static int Id_max;
        const int id;
    protected:
        virtual void afis(std::ostream &os) const;
    public:
        Exercitiu();
        Exercitiu(int nr_repetari, int nr_serii, float durata, const std::string &nume_exercitiu, float pauza_intre_serii, const std::string &echipament_necesar, const std::string &grupa_de_muschi_principala_antrenata, const std::string &grupa_de_muschi_secundara_antrenata);
        Exercitiu(const Exercitiu &copie);
        Exercitiu& operator=(const Exercitiu& copie);
        const std::string &getNume() const;
        friend std::ostream &operator<<(std::ostream &os, const Exercitiu &Exercitiu);
        void nr_total_calorii_arse(float greutate, int MET);
        virtual void play_animatie() const = 0;
        virtual std::shared_ptr <Exercitiu> clone() const = 0;
        virtual ~Exercitiu();
        static int getId_max();
        static void setId_max(const int);
};

