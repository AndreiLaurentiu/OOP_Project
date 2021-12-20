#pragma once
#include "Nutritie.h"
#include <memory>
#include <vector>
#include "Antrenament.h"

class Utilizator{
    private:
    int varsta;
    float greutate;
    float inaltime;
    std::string sex;
    std::string nume;
    Nutritie nutritie;
    std::vector<std::shared_ptr<Antrenament>> antrenamente;
    public:
    Utilizator(int varsta, float greutate, float inaltime, const std::string &sex, const std::string &nume);
    Utilizator(int varsta, float greutate, float inaltime, const std::string &sex, const std::string &nume, const Nutritie &nutritie, const std::vector<std::shared_ptr<Antrenament>> &antrenamente);
    Utilizator(const Utilizator& Utilizator);
    Utilizator &operator=(Utilizator copie);
    void swap(Utilizator &, Utilizator &);
    friend std::ostream &operator<<(std::ostream &os, const Utilizator &Utilizator);
    void adauga_antrenament(const Antrenament &antrenament);
    void scoate_antrenament();
    float getGreutate();
    int AMR_valoare(float activitate);
    void AMR_afisare(float activitate);
    void IMC();
    void start_exercitii();
};