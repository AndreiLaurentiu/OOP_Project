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
        std::cerr << "Eroare la deschiderea fisierului! ";
        exit(1);
    }
    inFile2.open("NivelActivitateFizica.in");
    if(inFile2.fail()){
        std::cerr << "Eroare la deschiderea fisierului!";
        exit(1);
    }
    //TODO: implementare animatii si functionalitati specifice pt fiecare subclasa exercitiu + testat in main
    Exercitiu a(15, 4, 10, "Forfecari");
    Exercitiu d(15, 5, 15, "Genoflexiuni");
    Exercitiu f(4, 4, 2, "Rotari de cap");
    Exercitiu b(20, 3, 15, "Abdomene");
    //std::cout << a; //testam operatorul <<
    Exercitiu h=a, c;
    //std::cout<<h; //testam cc-ul
    c = a;
    //std::cout << c; //testam operatorul=
    std::vector <Exercitiu> Exercitii={a, d, f};
    Nutritie x(300.0, 30.0,40.0 ,50.0, 2.0);
    //std::cout << x; //testam operatorul <<
    Utilizator e(20, 90.0, 185.0, "masculin", "Andrei", x, Exercitii);
    //e.adauga_exercitiu(b); //testez functia de add
    //std::cout << e;
    //e.scoate_exercitiu(b);
    //std::cout << e;
    //std::cout << e; //testam operatorul <<
    float activitate;
    inFile2>>activitate;
    e.AMR_afisare(activitate); //verificare metoda AMR_afisare
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