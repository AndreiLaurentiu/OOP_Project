#include "Nutritie.h"
#include <cmath>

template <typename T> Nutritie<T>::Nutritie(){}
template <typename T> Nutritie <T>::Nutritie(T carbohidrati, T grasimi, T fibre, T proteine, T apa) : carbohidrati(carbohidrati), grasimi(grasimi),  fibre(fibre), proteine(proteine), apa(apa){
            // Suntem in constructorul de initializare
        }
 /*   
template <typename T> std::ostream &operator<<(std::ostream &os, const Nutritie<T> &Nutritie) {
        os << "Valorile sunt redate in grame." << std::endl << "Carbohidrati: " << Nutritie.carbohidrati << std::endl << "Grasimi: " << Nutritie.grasimi << std::endl << "Fibre: " << Nutritie.fibre << std::endl << "Proteine: " << Nutritie.proteine << std::endl; 
        return os;
        // Suntem in operatorul <<
    }*/
template <typename T> void Nutritie<T>::Macro_calculator(int amr){
    int nr_calorii = amr;
    T carbohidrati_=0.5*nr_calorii;
    T grasimi_=0.25*nr_calorii;
    T proteine_=0.25*nr_calorii;
    std::cout<<"Valorile sunt exprimate in grame si se refera la cantitatile maxime recomandate zilnic. "<<std::endl;
    std::cout<<"Macronutrienti recomandati zilnic: "<<std::endl;
    std::cout<<round(carbohidrati_/4)<<"g carbohidrati"<<std::endl;
    std::cout<<round(grasimi_/9)<<"g grasimi"<<std::endl;
    std::cout<<round(proteine_/4)<<"g proteine"<<std::endl;
}