#pragma once
#include <iostream>

template <typename T> class Nutritie{
    private:
        T carbohidrati;
        T grasimi;
        T fibre;
        T proteine;
        T apa;
    public:
        Nutritie();
        Nutritie(T carbohidrati, T grasimi, T fibre, T proteine, T apa);
        friend std::ostream &operator<< (std::ostream &os,  const Nutritie<T> &Nutritie){
            os << "Valorile sunt redate in grame." << std::endl << "Carbohidrati: " << Nutritie.carbohidrati << std::endl << "Grasimi: " << Nutritie.grasimi << std::endl << "Fibre: " << Nutritie.fibre << std::endl << "Proteine: " << Nutritie.proteine << std::endl; 
        return os;
        }
        void Macro_calculator(int);
};