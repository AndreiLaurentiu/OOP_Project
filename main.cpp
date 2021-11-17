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
    Exercitiu d(15, 5, 15, "Genoflexiuni");
    Exercitiu f(4, 4, 2, "Rotari de cap");
    Exercitiu b(20, 3, 15, "Abdomene");
    //std::cout << a; //testam operatorul <<
    Exercitiu h=d, c;
    //std::cout << Exercitiu::getId_max();
    //std::cout<<h; //testam cc-ul
    c = d;
    //std::cout << c; //testam operatorul=
    std::vector< std::shared_ptr <Exercitiu>> exercitii;
    Nutritie x(300.0, 30.0,40.0 ,50.0, 2.0);
    //std::cout << x; //testam operatorul <<
    Utilizator u1(20, 90.0, 185.0, "masculin", "Andrei", x, exercitii);
    //u1.adauga_exercitiu(b); //testez functia de add
    //std::cout<< u1
    //u1.scoate_exercitiu(b);
    //std::cout << u1; //testam operatorul <<
    //Utilizator u2 = u1;
    //u1.scoate_exercitiu(b);
    //std::cout<< u1 << u2; //testam cc-ul, operatorul << si functia scoate_exercitiu
    //Exercitiu_maini e1(15, 4, 10, "Forfecari");
    //u1.adauga_exercitiu(e1);
    ///std::cout<< u1;
    //u1.scoate_exercitiu(e1);
    //std::cout<< u1;
    //float activitate;
    //inFile2>>activitate;
    //e.AMR_afisare(activitate); //verificare metoda AMR_afisare
    //x.Macro_calculator(e.AMR_valoare(activitate));
    //e.IMC(); //verificare metoda IMC
    /*int MET;
    inFile1>>MET;
    a.nr_total_calorii_arse(e.getGreutate(), MET); // verificare metoda nr_calorii_arse 
    */
    inFile1.close();
    inFile2.close();
    return 0;
}