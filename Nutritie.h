#pragma once
#include <iostream>

class Nutritie{
    private:
        float carbohidrati;
        float grasimi;
        float fibre;
        float proteine;
        float apa;
    public:
        Nutritie();
        Nutritie(float carbohidrati, float grasimi, float fibre, float proteine, float apa);
        friend std::ostream &operator<<(std::ostream &os, const Nutritie &Nutritie);
        void Macro_calculator(int);
};