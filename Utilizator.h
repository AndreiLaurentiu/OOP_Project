#pragma once
#include "Exercitiu.h"
#include "Nutritie.h"
#include "Tipuri_Exercitii.h"
#include <memory>
#include <vector>

class Utilizator{
    private:
    int varsta;
    float greutate;
    float inaltime;
    std::string sex;
    std::string nume;
    Nutritie nutritie;
    std::vector <std::shared_ptr <Exercitiu>> exercitii;
    public:
    Utilizator(int varsta, float greutate, float inaltime, const std::string &sex, const std::string &nume);
    Utilizator(int varsta, float greutate, float inaltime, const std::string &sex, const std::string &nume, const Nutritie &nutritie, const std::vector< std::shared_ptr <Exercitiu>> &exercitii);
    Utilizator(const Utilizator& Utilizator);
    Utilizator &operator=(Utilizator copie);
    void swap(Utilizator &, Utilizator &);
    friend std::ostream &operator<<(std::ostream &os, const Utilizator &Utilizator);
    void adauga_exercitiu(const Exercitiu &exercitiu);
    void scoate_exercitiu(Exercitiu exercitiul);
    float getGreutate();
    int AMR_valoare(float activitate);
    void AMR_afisare(float activitate);
    void IMC();
    void start_exercitii();
};