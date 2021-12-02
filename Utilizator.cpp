#include "Utilizator.h"
#include <cmath>
#include <vector>

Utilizator::Utilizator(int varsta, float greutate, float inaltime, const std::string &sex, const std::string &nume) : varsta(varsta), greutate(greutate), inaltime(inaltime), sex(sex), nume(nume) {}
Utilizator::Utilizator(int varsta, float greutate, float inaltime, const std::string &sex, const std::string &nume, const Nutritie &nutritie, const std::vector <std::shared_ptr <Exercitiu>>  &exercitii) : varsta(varsta), greutate(greutate), inaltime(inaltime), sex(sex), nume(nume), nutritie(nutritie),  exercitii(exercitii){
        // Suntem in constructorul de initializare
    }
Utilizator::Utilizator(const Utilizator& copie) : varsta(copie.varsta), greutate(copie.greutate), inaltime(copie.inaltime), sex(copie.sex), nume(copie.nume), nutritie(copie.nutritie){
    for(const auto exercitiu : copie.exercitii)
        exercitii.push_back(exercitiu->clone());
}
Utilizator &Utilizator::operator=(Utilizator copie){
    swap(*this, copie);
    return *this;
}
void Utilizator::swap(Utilizator &a1, Utilizator &a2) {
    using std::swap;
    swap(a1.exercitii, a2.exercitii);
    swap(a1.varsta, a2.varsta);
    swap(a1.greutate, a2.greutate);
    swap(a1.inaltime, a2.inaltime);
    swap(a1.sex, a2.sex);
    swap(a1.nume, a2.nume);
    swap(a1.nutritie, a2.nutritie);
}
std::ostream &operator<<(std::ostream &os, const Utilizator &Utilizator) {
        os << "Nume utilizator: " << Utilizator.nume <<std::endl;
        os << "Sex: " << Utilizator.sex << std::endl;
        os << "Varsta: " << Utilizator.varsta << std::endl;
        os << "Greutate: " << Utilizator.greutate << std::endl;
        os << "Inaltime: " << Utilizator.inaltime << std::endl;
        os << "Valori nutritionale individuale pentru o zi: " << std::endl << Utilizator.nutritie;
        os << "Exercitii fizice selectate pentru azi: "<< std::endl;
        for(const auto & Exercitiu : Utilizator.exercitii)
            os << *Exercitiu;
        return os;
         // Suntem in operatorul <<
        }
void Utilizator::adauga_exercitiu(const Exercitiu &exercitiu_){
        exercitii.push_back(exercitiu_.clone());
    }
void Utilizator::scoate_exercitiu(){
        exercitii.pop_back();
    }
float Utilizator::getGreutate() {
        return greutate;
    }
int Utilizator::AMR_valoare(float activitate){
        std::cout<<"Introduceti nivelul de activitate fizica zilnica dupa cum urmeaza: Sedentar(1.2), Putin activ(1.375), Moderat activ(1.55), Activ(1.725), Foarte activ(1.9)"<<std::endl;
        std::cout<<"Valoarea introdusa: "<<activitate<<std::endl;
        if(sex == "masculin")
            return (10*greutate + 6.25*inaltime - 5*varsta + 5)*activitate;
        else
            return (10*greutate + 4.7*inaltime - 5*varsta -161)*activitate;
    }
void Utilizator::AMR_afisare(float activitate){
        std::cout<<"Introduceti nivelul de activitate fizica zilnica dupa cum urmeaza: Sedentar(1.2), Putin activ(1.375), Moderat activ(1.55), Activ(1.725), Foarte activ(1.9)"<<std::endl;
        std::cout<<"Valoarea introdusa: "<<activitate<<std::endl;
        std::cout<<"Numarul zilnic de calorii necesare pentru mentinerea greutatii actuale: ";
        if(sex == "masculin")
            std::cout<<round((10*greutate + 6.25*inaltime - 5*varsta + 5)*activitate)<<std::endl;
        else
            std::cout<<round((10*greutate + 4.7*inaltime - 5*varsta -161)*activitate)<<std::endl;
    }
void Utilizator::IMC(){
        float IMC_result = greutate*std::pow(10, 4)/std::pow(inaltime, 2);
        std::cout<< "Indicele de masa corporala: " << round(IMC_result) << std::endl;
            if(IMC_result < 16.0){
                std::cout<<"Subnutrit";
            return; 
            }
            if(IMC_result < 18.5){
                std::cout<<"Subponderal"<<std::endl;
                    return;
            }
                if(IMC_result < 25){
                    std::cout<<"Normal"<<std::endl;
                    return;
                }
                if(IMC_result < 30){
                    std::cout<<"Supraponderal"<<std::endl;
                    return;
                }
                if(IMC_result < 35){
                    std::cout<<"Obezitate clasa I"<<std::endl;
                    return;
                }
                if(IMC_result < 40){
                    std::cout<<"Obezitate clasa II"<<std::endl;
                    return;
                }
                if(IMC_result > 40){
                    std::cout<<"Obezitate clasa III"<<std::endl;
                    return;
                }

                    
        }
void Utilizator::start_exercitii(){
    for(const auto& Exercitiu : exercitii){
        std::cout << "Exercitiune in desfasurare: " << Exercitiu->getNume() << std::endl;
        Exercitiu->play_animatie();
    }

}