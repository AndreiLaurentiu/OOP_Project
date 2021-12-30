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
    Nutritie<float> nutritie;
    std::vector<std::shared_ptr<Antrenament>> antrenamente;
    Utilizator() = default;
    static Utilizator* ut;
    public:
    Utilizator(const Utilizator& Utilizator) = delete;
    Utilizator &operator=(Utilizator copie) = delete;
    friend std::ostream &operator<<(std::ostream &os, const Utilizator &Utilizator);
    void adauga_antrenament(const Antrenament &antrenament);
    void scoate_antrenament();
    void setVarsta(int);
    void setGreutate(float);
    void setInaltime(float);
    void setSex(std::string);
    void setNume(std::string);
    void setNutritie(Nutritie<float>);
    float getGreutate();
    int AMR_valoare(float activitate);
    void AMR_afisare(float activitate);
    void IMC();
    static Utilizator* get_ut() {
        if(ut == nullptr) { ut = new Utilizator; }
        return ut;
    }
};