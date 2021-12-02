#include "Erori_exercitiu.h"

eroare_exercitiu::eroare_exercitiu(const std::string &arg) : runtime_error("Eroare exercitiu: " + arg) {}

exercitiu_prea_scurt::exercitiu_prea_scurt() : eroare_exercitiu("Exercitiu prea scurt, minim 1 minut") {}

eroare_nr_repetari::eroare_nr_repetari() : eroare_exercitiu("Prea putine repetari, minim 10") {
}

eroare_nr_serii::eroare_nr_serii() : eroare_exercitiu("Prea putine serii, minim 2") {
}