#pragma once
#include <iostream>

class Exercitiu{
    private:
        int nr_repetari;
        int nr_serii;
        int durata;
        std::string nume_exercitiu;
    public:
        Exercitiu();
        Exercitiu(int nr_repetari, int nr_serii, int durata, const std::string &nume_exercitiu);
        Exercitiu(const Exercitiu &copie);
        Exercitiu& operator=(const Exercitiu& copie);
        const std::string &getNume() const;
        ~Exercitiu();
        friend std::ostream &operator<<(std::ostream &os, const Exercitiu &Exercitiu);
        void nr_total_calorii_arse(float greutate, int MET);
};

