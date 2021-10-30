#pragma once
#include "Exercitiu.h"
#include "Nutritie.h"
#include <vector>
std::ifstream inFile2;
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
    Utilizator(int varsta, float greutate, float inaltime, const std::string &sex, const std::string &nume);
    Utilizator(int varsta, float greutate, float inaltime, const std::string &sex, const std::string &nume, const Nutritie &nutritie, const std::vector<Exercitiu> exercitii);
    friend std::ostream &operator<<(std::ostream &os, const Utilizator &Utilizator);
    void adauga_exercitiu(const Exercitiu exercitiu);
    void scoate_exercitiu(Exercitiu exercitiul);
    float getGreutate();
    int AMR_valoare();
    void AMR_afisare();
    void IMC();
};