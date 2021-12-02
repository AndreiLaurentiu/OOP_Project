#pragma once
#include <stdexcept>

class eroare_exercitiu : public std::runtime_error{
    public:
    eroare_exercitiu(const std::string &arg);
};

class exercitiu_prea_scurt : public eroare_exercitiu {
public:
    exercitiu_prea_scurt();
};

class eroare_nr_repetari : public eroare_exercitiu {
public:
    eroare_nr_repetari();
};

class eroare_nr_serii : public eroare_exercitiu {
public:
    eroare_nr_serii();
};