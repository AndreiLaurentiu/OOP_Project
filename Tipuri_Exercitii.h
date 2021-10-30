#pragma once
#include <string>
#include "Exercitiu.h"

class Exercitiu_Abdomen: public Exercitiu{
    private:
        std::string grupe_de_muschi_abdomen[4]{"rectus abdominis", "oblici", "intercostali", "serratus"};
    public:

};

class Exercitiu_Maini: public Exercitiu{
    private:
        std::string grupe_de_muschi_maini[3]{"biceps", "triceps", "antebrat"};
    public:

};

class Exercitiu_picioare: public Exercitiu{
    private:
        std::string grupe_de_muschi_picioare[3] {"cvadriceps", "gambe", "femur"};
    public:
};

class Exercitiu_Mixt_MainisiPicioare: public Exercitiu{
    private:

    public:
};

class Exercitiu_spate: public Exercitiu{
    private:
        std::string grupe_de_muschi_spate[2]{"lombarii", "rhomboizii"};
    public:

};

class Exercitiu_umeri: public Exercitiu{
    private:
        std::string muschi_umeri = "deltoizi";
    public:

};

class Exercitiu_piept: public Exercitiu{
    private:
        std::string grupe_de_muschi_piept[3]{"superiori", "mediani", "inferiori"};
    public:

};