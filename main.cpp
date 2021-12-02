#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <fstream>
#include "Utilizator.h"

int main(){
    std::ifstream inFile1, inFile2;
    inFile1.open("MET.in");
    if(inFile1.fail()){
        std::cerr << "Eroare la deschiderea fisierului!";
        exit(1);
    }
    inFile2.open("NivelActivitateFizica.in");
    if(inFile2.fail()){
        std::cerr << "Eroare la deschiderea fisierului!";
        exit(1);
    }
    //TODO: implementare animatii si functionalitati specifice pt fiecare subclasa exercitiu + testat in main
    //In bucata de cod comentata sunt doar verificarile pentru functionalitatile de baza si specifice TEMA 1.
    /*
    Exercitiu d(15, 5, 15, "Genoflexiuni");
    Exercitiu f(4, 4, 2, "Rotari de cap");
    Exercitiu b(20, 3, 15, "Abdomene");
    std::cout << a; //testam operatorul <<
    Exercitiu h=d, c;
    std::cout << Exercitiu::getId_max();
    std::cout<<h; //testam cc-ul
    c = d;
    std::cout << c; //testam operatorul=
    std::vector< std::shared_ptr <Exercitiu>> exercitii;
    Nutritie x(300.0, 30.0,40.0 ,50.0, 2.0);
    std::cout << x; //testam operatorul <<
    Utilizator u1(20, 90.0, 185.0, "masculin", "Andrei", x, exercitii);
    u1.adauga_exercitiu(b); //testez functia de add
    std::cout<< u1
    u1.scoate_exercitiu(b);
    std::cout << u1; //testam operatorul <<
    Utilizator u2 = u1;
    u1.scoate_exercitiu(b);
    std::cout<< u1 << u2; //testam cc-ul, operatorul << si functia scoate_exercitiu
    Exercitiu_maini e1(15, 4, 10, "Forfecari");
    u1.adauga_exercitiu(e1);
    std::cout<< u1;
    u1.scoate_exercitiu(e1);
    std::cout<< u1;
    float activitate;
    inFile2>>activitate;
    e.AMR_afisare(activitate); //verificare metoda AMR_afisare
    x.Macro_calculator(e.AMR_valoare(activitate));
    e.IMC(); //verificare metoda IMC
    int MET;
    inFile1>>MET;
    a.nr_total_calorii_arse(e.getGreutate(), MET); // verificare metoda nr_calorii_arse 
    */
    
    std::string grupe_de_muschi_abdomen[2]{"intreg abdomenul", "abdomenul inferior"};
    std::string grupe_de_muschi_maini[3]{"biceps", "triceps", "antebrat"};
    std::string grupe_de_muschi_picioare[3] {"cvadriceps", "gambe", "femur"};
    std::string muschi_umeri[3] = {"deltoizi anteriori", "deltoizi mediani", "deltoizi superiori"};
    std::string grupe_de_muschi_spate[2]{"lombarii", "rhomboizii"};
    std::string grupe_de_muschi_piept[3]{"superiori", "mediani", "inferiori"};

    std::vector <Exercitiu_maini> exercitii_maini;
    std::vector <Exercitiu_spate> exercitii_spate;
    std::vector <Exercitiu_picioare> exercitii_picioare;
    std::vector <Exercitiu_abdomen> exercitii_abdomen;
    std::vector <Exercitiu_umeri> exercitii_umeri;
    std::vector <Exercitiu_piept> exercitii_piept;

    //Aici am creat toate obiectele de tip exercitiu pe care le voi folosi si am verificat ca fiecare exercitiu sa fie creat corect.
    try{
        Exercitiu_maini e1 = Exercitiu_maini(10, 2, 4.5, "Flexii cu gantere", 60, "gantere", grupe_de_muschi_maini[0], "-");
        Exercitiu_maini e2 = Exercitiu_maini(5, 3, 3.5, "Flexii cu bara", 60, "haltera", grupe_de_muschi_maini[0], "-");
        Exercitiu_maini e3 = Exercitiu_maini(15, 2, 5, "Extensii triceps", 60, "cabluri", grupe_de_muschi_maini[1], "-");
        Exercitiu_maini e4 = Exercitiu_maini(12, 3, 5, "Ciocane", 30, "gantere", grupe_de_muschi_maini[0], grupe_de_muschi_maini[2]);
        Exercitiu_maini e5 = Exercitiu_maini(7, 3, 3, "Ridicari pe marginea bancii", 30, "-", grupe_de_muschi_maini[1], "-");
        Exercitiu_maini e6 = Exercitiu_maini(15, 5, 6, "Flexii ale incheieturilor prin supinatie", 30, "-", grupe_de_muschi_maini[2], "-");
        Exercitiu_maini e7 = Exercitiu_maini(15, 3, 6, "Flexii cu bara dreapta la cablu", 30, "cabluri", grupe_de_muschi_maini[2], "-");
        Exercitiu_maini e8 = Exercitiu_maini(5, 3, 4, "Impins cu priza ingusta", 1, "haltera", grupe_de_muschi_maini[1], "-");
        Exercitiu_maini e9 = Exercitiu_maini(10, 2, 3, "Extensii cu funia deasupra capului", 30, "cabluri", grupe_de_muschi_maini[1], "-");
        Exercitiu_maini e10 = Exercitiu_maini(15, 2, 5, "Flexii preacher", 60, "bara Z", grupe_de_muschi_maini[0], "-");
        Exercitiu_spate e11 = Exercitiu_spate(7, 3, 5, "Ramat cu bara din aplecat", 60, "haltera", grupe_de_muschi_spate[1], grupe_de_muschi_maini[0]);
        Exercitiu_spate e12 = Exercitiu_spate(12, 3, 6, "Tractiuni la helcomretu", 60, "helcometru", grupe_de_muschi_spate[1], grupe_de_muschi_maini[0]);
        Exercitiu_spate e13 = Exercitiu_spate(10, 3, 4.5, "Ramat din sezut", 60, "cabluri si maner de fier", grupe_de_muschi_spate[0], grupe_de_muschi_maini[0]);
        Exercitiu_spate e14 = Exercitiu_spate(7, 3, 4, "Ridicari din umeri", 30, "haltera", grupe_de_muschi_spate[1], "-");
        Exercitiu_spate e15 = Exercitiu_spate(12, 3, 4, "Hiperextensii", 30, "banca inclinata", grupe_de_muschi_spate[0], grupe_de_muschi_picioare[2]);
        Exercitiu_spate e16 = Exercitiu_spate(11, 2, 3, "Ramat din aplecat cu doua gantere", 60, "gantere", grupe_de_muschi_spate[1], grupe_de_muschi_maini[1]);
        Exercitiu_spate e17 = Exercitiu_spate(8, 3, 5, "Good mornings", 120, "haletera", grupe_de_muschi_spate[0], grupe_de_muschi_picioare[2]);
        Exercitiu_spate e18 = Exercitiu_spate(10, 3, 5, "Ridicat din umeri cu gantere", 30, "gantere", grupe_de_muschi_spate[0], muschi_umeri[2]);
        Exercitiu_spate e19 = Exercitiu_spate(12, 3, 5, "Rdicari din umeri cu haltera la spate", 30, "haltera", grupe_de_muschi_spate[0], grupe_de_muschi_maini[2]);
        Exercitiu_spate e20 = Exercitiu_spate(10, 3, 4, "Ramat pe un brat cu gantera", 60, "gantere", grupe_de_muschi_spate[1], grupe_de_muschi_maini[0]);
        Exercitiu_picioare e21 = Exercitiu_picioare(5, 4, 5, "Genuflexiuni cu haltera", 60, "haltera", grupe_de_muschi_picioare[0], grupe_de_muschi_picioare[2]);
        Exercitiu_picioare e22 = Exercitiu_picioare(12, 4, 4, "Fandari cu gantere", 30, "-", grupe_de_muschi_picioare[0], grupe_de_muschi_picioare[2]);
        Exercitiu_picioare e23 = Exercitiu_picioare(15, 3, 6, "Presa pentru picioare", 60, "presa la 45 de grade", grupe_de_muschi_picioare[0], grupe_de_muschi_picioare[1]);
        Exercitiu_picioare e24 = Exercitiu_picioare(12, 3, 4.5, "Flexia picioarelor din culcat", 30, "banca pentru flexia inversa a picioarelor", grupe_de_muschi_picioare[2], "-");
        Exercitiu_picioare e25 = Exercitiu_picioare(20, 3, 6, "Extensia picioarelor", 30, "scaun pentru extensia picioarelor", grupe_de_muschi_picioare[0], "-");
        Exercitiu_picioare e26 = Exercitiu_picioare(12, 4, 3.5, "Ridicari de varfuri din picioare", 30, "presa verticala pentru picioare", grupe_de_muschi_picioare[1], "-");
        Exercitiu_picioare e27 = Exercitiu_picioare(5, 4, 5, "Indreptari romanesti", 30, "haltera", grupe_de_muschi_picioare[2], grupe_de_muschi_spate[0]);
        Exercitiu_picioare e28 = Exercitiu_picioare(12, 4, 4, "Ridicari pe varfuri din sezut la aparat", 30, "aparat", grupe_de_muschi_picioare[1], "-");
        Exercitiu_picioare e29 = Exercitiu_picioare(15, 4, 5.5, "Urcari pe scarita cu gantere", 30, "gantere si scarita", grupe_de_muschi_picioare[0], grupe_de_muschi_picioare[2]);
        Exercitiu_picioare e30 = Exercitiu_picioare(10, 4, 5, "Genuflexiuni cu bara in fata", 60, "haltera", grupe_de_muschi_picioare[0], grupe_de_muschi_picioare[2]);
        Exercitiu_picioare e31 = Exercitiu_picioare(15, 3, 2.5,"Flexia picioarelor din sezut", 30, "aparat", grupe_de_muschi_picioare[2], grupe_de_muschi_picioare[1]);
        Exercitiu_abdomen e32 = Exercitiu_abdomen(20, 2, 1.5, "Bicicleta aeriana", 15, "-", grupe_de_muschi_abdomen[0], "-");
        Exercitiu_abdomen e33 = Exercitiu_abdomen(10, 3, 2.5, "Abdomene la sol", 30, "-", grupe_de_muschi_abdomen[0], "-");
        Exercitiu_abdomen e34 = Exercitiu_abdomen(10, 3, 2.5, "Abdomene inverse", 30, "banca", grupe_de_muschi_abdomen[0], "-");
        Exercitiu_abdomen e35 = Exercitiu_abdomen(10, 3, 2, "Ridicari de picioare din intins", 15, "-", grupe_de_muschi_abdomen[1], "-");
        Exercitiu_abdomen e36 = Exercitiu_abdomen(10, 3, 2, "Abdomene la banca declinata", 15, "banca", grupe_de_muschi_abdomen[0], "-");
        Exercitiu_abdomen e37 = Exercitiu_abdomen(10, 3, 2, "Foarfece", 15, "-", grupe_de_muschi_abdomen[0], "-");
        Exercitiu_abdomen e38 = Exercitiu_abdomen(10, 3, 2, "Abdomene la aparat", 15, "aparat", grupe_de_muschi_abdomen[0], "-");
        Exercitiu_abdomen e39 = Exercitiu_abdomen(10, 2, 2, "Abdomene la sol cu picioarele inclinate", 15, "-", grupe_de_muschi_abdomen[0], "-");
        Exercitiu_abdomen e40 = Exercitiu_abdomen(10, 2, 2, "Abdomene la sol prin rasucire", 15, "-", grupe_de_muschi_abdomen[0], "-");
        Exercitiu_abdomen e41 = Exercitiu_abdomen(10, 3, 2, "Laterale cu gantere", 15, "gantere", grupe_de_muschi_abdomen[1], "-");
        Exercitiu_umeri e42 = Exercitiu_umeri(5, 3, 2, "Impins cu haltera pentru umeri", 30, "presa Smith", muschi_umeri[2], muschi_umeri[1]);
        Exercitiu_umeri e43 = Exercitiu_umeri(10, 3, 2.5, "Ridicari laterale cu gantere", 30, "gantere", muschi_umeri[1], "-");
        Exercitiu_umeri e44 = Exercitiu_umeri(10, 3, 2.5, "Fluturari la spate", 30, "gantere", muschi_umeri[0], "-");
        Exercitiu_umeri e45 = Exercitiu_umeri(5, 3, 1, "Presa cu gantere pentru umeri", 15, "gantere", muschi_umeri[2], grupe_de_muschi_maini[1]);
        Exercitiu_umeri e46 = Exercitiu_umeri(7, 3, 2.5, "Presa militara", 30, "haltera", "deltoizii", grupe_de_muschi_maini[1]);
        Exercitiu_umeri e47 = Exercitiu_umeri(10, 3, 2.5, "Ridicari frontale cu discul", 30, "disc", "deltoizii", "-");
        Exercitiu_umeri e48 = Exercitiu_umeri(7, 3, 2.5, "Presa Arnold", 30, "gantere", "deltoizii", grupe_de_muschi_maini[1]);
        Exercitiu_piept e49 = Exercitiu_piept(5, 3, 2.5, "Impins cu haltera din inclinat", 30, "haltera si scaun inclinat", "piept", grupe_de_muschi_maini[1]);
        Exercitiu_piept e50 = Exercitiu_piept(8, 3, 2.5, "Impins cu gantere din inclinat", 30, "gantere si scaun inclinat", "piept", grupe_de_muschi_maini[1]);
        Exercitiu_piept e51 = Exercitiu_piept(10, 3, 3, "Fluturari cu ganter pentru piept din inclinat", 30, "gantere si scaun inclinat", "piept", "-");
        Exercitiu_piept e52 = Exercitiu_piept(10, 3, 2.5, "Flotari la paralele", 30, "aparat",grupe_de_muschi_piept[2], grupe_de_muschi_maini[1]);
        Exercitiu_piept e53 = Exercitiu_piept(5, 3, 2, "Impins cu haltera din orizontal", 30, "haltera si banca orizontala", "piept", grupe_de_muschi_maini[1]);
        Exercitiu_piept e54 = Exercitiu_piept(8, 3, 2, "Impins cu ganterele din culcat", 30, "gantere si banca orizontala", "piept", grupe_de_muschi_maini[1]); 
        Exercitiu_piept e55 = Exercitiu_piept(10, 3, 2.5, "Fluturari cu gantere pentru piept", 30, "gantere si banca orizontala", "piept", "-");
        Exercitiu::setId_max(-9);
        exercitii_maini.insert(exercitii_maini.begin(), {e1, e2, e3, e4, e5, e6, e7, e8, e9, e10});
        Exercitiu::setId_max(1);
        exercitii_spate.insert(exercitii_spate.end(), {e11, e12, e13, e14, e15, e16, e17, e18, e19, e20});
        Exercitiu::setId_max(10);
        exercitii_picioare.insert(exercitii_picioare.end(), {e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31});
        Exercitiu::setId_max(22);
        exercitii_abdomen.insert(exercitii_abdomen.end(), {e32, e33, e34, e35, e36, e37, e38, e39, e40, e41});
        Exercitiu::setId_max(35);
        exercitii_umeri.insert(exercitii_umeri.end(), {e42, e43, e44, e45, e46, e47, e48});
        Exercitiu::setId_max(42);
        exercitii_piept.insert(exercitii_piept.end(), {e49, e50, e51, e52, e53, e54, e55});
    }
    catch(eroare_exercitiu &eroare){
        std::cout << eroare.what() << std::endl;
    }

    //Testez operatorul<< si functia virtuala specifica + verific sa fie corect indexate exercitiile
    std::cout << exercitii_maini[0];
    std::cout << exercitii_spate[0];
    std::cout << exercitii_picioare[0];
    exercitii_maini[0].play_animatie();
    std::cout << exercitii_abdomen[0];
    std::cout << exercitii_umeri[0];
    std::cout << exercitii_piept[0];
    std::cout << Exercitiu::getId_max() - 1 << std::endl;
    Exercitiu_maini e_ex1 = exercitii_maini[0], e_ex2;
    std::cout << e_ex1; //testam cc-ul
    e_ex2 = exercitii_maini[0];
    std::cout << e_ex2; //testam operatorul=

    std::vector< std::shared_ptr <Exercitiu>> exercitii;
    Nutritie x(300.0, 30.0,40.0 ,50.0, 2.0);
    std::cout << x; //testam operatorul << pt clasa Nutritie

    Utilizator u1(20, 90.0, 185.0, "masculin", "Andrei", x, exercitii);
    u1.adauga_exercitiu(exercitii_maini[0]); //testez functia de add
    std::cout<< u1;
    u1.scoate_exercitiu();
    std::cout << u1; //testam operatorul <<
    Utilizator u2 = u1;
    float activitate;
    inFile2>>activitate;
    u1.AMR_afisare(activitate); //verificare metoda AMR_afisare
    x.Macro_calculator(u1.AMR_valoare(activitate));
    u1.IMC(); //verificare metoda IMC
    int MET;
    inFile1>>MET;
    exercitii_maini[0].nr_total_calorii_arse(u1.getGreutate(), MET); // verificare metoda nr_calorii_arse 
    u1.adauga_exercitiu(exercitii_picioare[0]);
    u1.start_exercitii();
    inFile1.close();
    inFile2.close();
    return 0;
}