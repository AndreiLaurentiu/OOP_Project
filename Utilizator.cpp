#include "Utilizator.h"
#include <cmath>
#include <vector>

Utilizator* Utilizator::ut = nullptr;

std::ostream &operator<<(std::ostream &os, const Utilizator &Utilizator) {
        os << "Nume utilizator: " << Utilizator.nume <<std::endl;
        os << "Sex: " << Utilizator.sex << std::endl;
        os << "Varsta: " << Utilizator.varsta << std::endl;
        os << "Greutate: " << Utilizator.greutate << std::endl;
        os << "Inaltime: " << Utilizator.inaltime << std::endl;
        os << "Valori nutritionale individuale pentru o zi: " << std::endl << Utilizator.nutritie;
        os << "Antrenamentele tale: "<< std::endl;
        for(const auto & Antrenament : Utilizator.antrenamente)
            os << *Antrenament;
        return os;
         // Suntem in operatorul <<
        }
void Utilizator::adauga_antrenament(const Antrenament &antrenament_){
        antrenamente.push_back(antrenament_.clone());
    }
void Utilizator::scoate_antrenament(){
        antrenamente.pop_back();
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
void Utilizator::setVarsta(int v){
    varsta = v;
}
void Utilizator::setGreutate(float g){
     greutate = g;
}
void Utilizator::setInaltime(float i){
     inaltime = i;
}
void Utilizator::setSex(std::string s){
     sex = s;
}
void Utilizator::setNume(std::string n){
     nume = nume;
}
void Utilizator::setNutritie(Nutritie<float> N){
    nutritie = N;
}