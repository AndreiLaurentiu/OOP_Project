#pragma once
#include <string>
#include "Exercitiu.h"

class Exercitiu_abdomen: public Exercitiu{
    private:
        std::string grupe_de_muschi_abdomen[4]{"rectus abdominis", "oblici", "intercostali", "serratus"};
    public:
        void play_animatie() const;
        std::shared_ptr <Exercitiu> clone() const override;
         Exercitiu_abdomen(int nr_repetari, int nr_serii, int durata, const std::string &nume_exercitiu);
         ~Exercitiu_abdomen();
         void afis(std::ostream &os) const override;
};

class Exercitiu_maini: public Exercitiu{
    private:
        std::string grupe_de_muschi_maini[3]{"biceps", "triceps", "antebrat"};
    public:
         void play_animatie() const;
         std::shared_ptr <Exercitiu> clone() const override;
         Exercitiu_maini(int nr_repetari, int nr_serii, int durata, const std::string &nume_exercitiu);
         ~Exercitiu_maini();
         void afis(std::ostream &os) const override;
};

class Exercitiu_picioare: public Exercitiu{
    private:
        std::string grupe_de_muschi_picioare[3] {"cvadriceps", "gambe", "femur"};
    public:
        void play_animatie() const;
        std::shared_ptr <Exercitiu> clone() const override;
        Exercitiu_picioare(int nr_repetari, int nr_serii, int durata, const std::string &nume_exercitiu);
         ~Exercitiu_picioare();
         void afis(std::ostream &os) const override;
};

class Exercitiu_Mixt_MainisiPicioare: public Exercitiu{
    private:

    public:
};

class Exercitiu_spate: public Exercitiu{
    private:
        std::string grupe_de_muschi_spate[2]{"lombarii", "rhomboizii"};
    public:
         void play_animatie() const;
         std::shared_ptr <Exercitiu> clone() const override;
         Exercitiu_spate(int nr_repetari, int nr_serii, int durata, const std::string &nume_exercitiu);
         ~Exercitiu_spate();
         void afis(std::ostream &os) const override;
};

class Exercitiu_umeri: public Exercitiu{
    private:
        std::string muschi_umeri = "deltoizi";
    public:
         void play_animatie() const;
         std::shared_ptr <Exercitiu> clone() const override;
         Exercitiu_umeri(int nr_repetari, int nr_serii, int durata, const std::string &nume_exercitiu);
         ~Exercitiu_umeri();
         void afis(std::ostream &os) const override;
};

class Exercitiu_piept: public Exercitiu{
    private:
        std::string grupe_de_muschi_piept[3]{"superiori", "mediani", "inferiori"};
    public:
         void play_animatie() const;
         std::shared_ptr <Exercitiu> clone() const override;
         Exercitiu_piept(int nr_repetari, int nr_serii, int durata, const std::string &nume_exercitiu);
         ~Exercitiu_piept();
         void afis(std::ostream &os) const override;
};