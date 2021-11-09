#include "Utilizator.h"
#include <cmath>
#include <vector>

Utilizator::Utilizator(int varsta, float greutate, float inaltime, const std::string &sex, const std::string &nume) : varsta(varsta), greutate(greutate), inaltime(inaltime), sex(sex), nume(nume) {}
Utilizator::Utilizator(int varsta, float greutate, float inaltime, const std::string &sex, const std::string &nume, const Nutritie &nutritie, const std::vector <Exercitiu> exercitii) : varsta(varsta), greutate(greutate), inaltime(inaltime), sex(sex), nume(nume), nutritie(nutritie),  exercitii(exercitii){
        // Suntem in constructorul de initializare
    }
std::ostream &operator<<(std::ostream &os, const Utilizator &Utilizator) {
        os << "Nume utilizator: " << Utilizator.nume <<std::endl;
        os << "Sex: " << Utilizator.sex << std::endl;
        os << "Varsta: " << Utilizator.varsta << std::endl;
        os << "Greutate: " << Utilizator.greutate << std::endl;
        os << "Inaltime: " << Utilizator.inaltime << std::endl;
        os << "Valori nutritionale individuale pentru o zi: " << std::endl << Utilizator.nutritie;
        os << "Exercitii fizice selectate pentru azi: "<< std::endl;
        for(int i=0; i<Utilizator.exercitii.size(); i++)
            os << Utilizator.exercitii[i];
        return os;
         // Suntem in operatorul <<
        }
void Utilizator::adauga_exercitiu(const Exercitiu exercitiu){
        exercitii.push_back(exercitiu);
    }
void Utilizator::scoate_exercitiu(Exercitiu exercitiul){
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
            std::cout<<(10*greutate + 6.25*inaltime - 5*varsta + 5)*activitate<<std::endl;
        else
            std::cout<<(10*greutate + 4.7*inaltime - 5*varsta -161)*activitate<<std::endl;
    }
void Utilizator::IMC(){
        float IMC_result = greutate*std::pow(10, 4)/std::pow(inaltime, 2);
        std::cout<<"Indicele de masa corporala: " << IMC_result<<std::endl;
        switch (1){
            case 1: 
                if(IMC_result < 16.0){
                    std::cout<<"Subnutrit";
                    break;
                }
            case 2:
                if(IMC_result < 18.5){
                    std::cout<<"Subponderal"<<std::endl;
                    break;
                }
            case 3:
                if(IMC_result < 25){
                    std::cout<<"Normal"<<std::endl;
                    break;
                }
            case 4:
                if(IMC_result < 30){
                    std::cout<<"Supraponderal"<<std::endl;
                    break;
                }
            case 5:
                if(IMC_result < 35){
                    std::cout<<"Obezitate clasa I"<<std::endl;
                    break;
                }
            case 6:
                if(IMC_result < 40){
                    std::cout<<"Obezitate clasa II"<<std::endl;
                    break;
                }
            case 7:
                if(IMC_result > 40){
                    std::cout<<"Obezitate clasa III"<<std::endl;
                    break;
                }

                    
        }
    }