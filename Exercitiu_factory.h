#include "Tipuri_Exercitii.h"

class Exercitiu_maini_factory{
    public:
    static Exercitiu_maini ex_maini_scurt() {return Exercitiu_maini(5, 2, 2.0, "Ex_scurt_maini", 10, "-", "maini", "-");}
    static Exercitiu_maini ex_maini_lung() {return Exercitiu_maini(20, 5, 15.0, "Ex_lung_maini", 60, "-", "maini", "-");}

};

class Exercitiu_abdomen_factory{
    public:
    static Exercitiu_abdomen ex_abdomen_scurt() {return Exercitiu_abdomen(5, 2, 2.0, "Ex_scurt_abdomen", 10, "-", "abdomen", "-");}
    static Exercitiu_abdomen ex_abdomen_lung() {return Exercitiu_abdomen(20, 5, 15.0, "Ex_lung_abdomen", 60, "-", "abdomen", "-");}
};

class Exercitiu_picioare_factory{
    public:
    static Exercitiu_picioare ex_picioare_scurt() {return Exercitiu_picioare(5, 2, 2.0, "Ex_scurt_picioare", 10, "-", "picioare", "-");}
    static Exercitiu_picioare ex_picioare_lung() {return Exercitiu_picioare(20, 5, 15.0, "Ex_lung_picioare", 60, "-", "picioare", "-");}
};

class Exercitiu_spate_factory{
    public:
    static Exercitiu_spate ex_spate_scurt() {return Exercitiu_spate(5, 2, 2.0, "Ex_scurt_maini", 10, "-", "spate", "-");}
    static Exercitiu_spate ex_spate_lung() {return Exercitiu_spate(20, 5, 15.0, "Ex_lung_spate", 60, "-", "spate", "-");}
};

class Exercitiu_umeri_factory{
    public:
    static Exercitiu_umeri ex_umeri_scurt() {return Exercitiu_umeri(5, 2, 2.0, "Ex_scurt_umeri", 10, "-", "umeri", "-");}
    static Exercitiu_umeri ex_umeri_lung() {return Exercitiu_umeri(20, 5, 15.0, "Ex_lung_umeri", 60, "-", "umeri", "-");}
};

class Exercitiu_piept_factory{
    public:
    static Exercitiu_piept ex_piept_scurt() {return Exercitiu_piept(5, 2, 2.0, "Ex_scurt_piept", 10, "-", "piept", "-");}
    static Exercitiu_piept ex_piept_lung() {return Exercitiu_piept(20, 5, 15.0, "Ex_lung_piept", 60, "-", "piept", "-");}
};
