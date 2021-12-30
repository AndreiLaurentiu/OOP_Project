#pragma once
#include <string>
#include <memory>
#include <vector>
#include "Tipuri_Exercitii.h"

class Antrenament{
    private:
    std::string nume_antrenament;
    std::vector<std::shared_ptr<Exercitiu>> exercitii;
    public:
    Antrenament(std::string nume_antrenament, std::vector<std::shared_ptr<Exercitiu>> &exercitii);
    void start_exercitii();
    void adauga_exercitiu(const Exercitiu &exercitiu);
    void scoate_exercitiu();
    friend std::ostream &operator<<(std::ostream &os, const Antrenament &Antrenament);
    void swap(Antrenament &, Antrenament &);
    virtual std::shared_ptr <Antrenament> clone() const;
    Antrenament &operator=(Antrenament copie);
    Antrenament(const Antrenament& Antrenament);
    void start_exercitii(const Antrenament& Antrenament);
};