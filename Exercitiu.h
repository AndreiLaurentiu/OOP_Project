#pragma once
#include <iostream>
#include <memory>

class Exercitiu{
    private:
        int nr_repetari;
        int nr_serii;
        int durata;
        std::string nume_exercitiu;
        static int Id_max;
        const int id;
    protected:
        virtual void afis(std::ostream &os);
    public:
        Exercitiu();
        Exercitiu(int nr_repetari, int nr_serii, int durata, const std::string &nume_exercitiu);
        Exercitiu(const Exercitiu &copie);
        Exercitiu& operator=(const Exercitiu& copie);
        const std::string &getNume() const;
        friend std::ostream &operator<<(std::ostream &os, const Exercitiu &Exercitiu);
        void nr_total_calorii_arse(float greutate, int MET);
        virtual void play_animatie() const;
        virtual std::shared_ptr <Exercitiu> clone() const;
        virtual ~Exercitiu();
        virtual void afis(std::ostream &os) const;
        static int getId_max();
};

