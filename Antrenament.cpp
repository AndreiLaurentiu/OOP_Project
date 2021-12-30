#include "Antrenament.h"
#include <chrono>
#include <ctime>  
Antrenament::Antrenament(std::string nume_antrenament, std::vector<std::shared_ptr<Exercitiu>> &exercitii): nume_antrenament(nume_antrenament), exercitii(exercitii){}

Antrenament &Antrenament::operator=(Antrenament copie){
    swap(*this, copie);
    return *this;
}
void Antrenament::swap(Antrenament &a1, Antrenament &a2) {
    using std::swap;
    swap(a1.exercitii, a2.exercitii);
    swap(a1.nume_antrenament, a2.nume_antrenament);
}

Antrenament::Antrenament(const Antrenament& copie) : nume_antrenament(copie.nume_antrenament){
    for(const auto exercitiu : copie.exercitii)
        exercitii.push_back(exercitiu->clone());
}

void Antrenament::adauga_exercitiu(const Exercitiu &exercitiu_){
        exercitii.push_back(exercitiu_.clone());
    }
void Antrenament::scoate_exercitiu(){
        exercitii.pop_back();
    }

void Antrenament::start_exercitii(){
    for(const auto& Exercitiu : exercitii){
        std::cout << "Exercitiu in desfasurare: " << Exercitiu->getNume() << std::endl;
        Exercitiu->play_animatie();
    }

}

std::ostream &operator<<(std::ostream &os, const Antrenament &Antrenament) {
        os << "Nume Antrenament: " << Antrenament.nume_antrenament <<std::endl;
        os << "Exercitii fizice in antrenament: "<< std::endl;
        for(const auto & Exercitiu : Antrenament.exercitii)
            os << *Exercitiu;
        return os;
         // Suntem in operatorul <<
        }

std::shared_ptr <Antrenament> Antrenament::clone() const {
    return std::make_shared <Antrenament>(*this);
}
/*
void Antrenament::start_exercitii(const Antrenament& Antrenament){
    for(auto& Exercitiu: Antrenament.exercitii){
        auto start = std::chrono::system_clock::now();
        std::chrono::duration<float> elapsed_seconds;
        while(Exercitiu->getDurata() <= elapsed_seconds){
            auto end = std::chrono::system_clock::now();
            elapsed_seconds = end-start;
        }

    }
}
*/