#include "Nutritie.h"
#include <cmath>

Nutritie::Nutritie(){}
Nutritie::Nutritie(float carbohidrati, float grasimi, float fibre, float proteine, float apa) : carbohidrati(carbohidrati), grasimi(grasimi),  fibre(fibre), proteine(proteine), apa(apa){
            // Suntem in constructorul de initializare
        }
std::ostream &operator<<(std::ostream &os, const Nutritie &Nutritie) {
        os << "Valorile sunt redate in grame." << std::endl << "Carbohidrati: " << Nutritie.carbohidrati << std::endl << "Grasimi: " << Nutritie.grasimi << std::endl << "Fibre: " << Nutritie.fibre << std::endl << "Proteine: " << Nutritie.proteine << std::endl; 
        return os;
        // Suntem in operatorul <<
    }
void Nutritie::Macro_calculator(int amr){
    int nr_calorii = amr;
    float carbohidrati_=0.5*nr_calorii;
    float grasimi_=0.25*nr_calorii;
    float proteine_=0.25*nr_calorii;
    std::cout<<"Valorile sunt exprimate in grame si se refera la cantitatile maxime recomandate zilnic. "<<std::endl;
    std::cout<<"Macronutrienti recomandati zilnic: "<<std::endl;
    std::cout<<round(carbohidrati_/4)<<"g carbohidrati"<<std::endl;
    std::cout<<round(grasimi_/9)<<"g grasimi"<<std::endl;
    std::cout<<round(proteine_/4)<<"g proteine"<<std::endl;
}