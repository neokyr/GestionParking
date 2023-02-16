
/* Generated from GenMyModel */

#include "../include/Rapport.hpp"

Rapport::Rapport(long long int dateDebut, long long int dateFin, double ca, double charges) :
        dateDebut(dateDebut),
        dateFin(dateFin),
        CA(ca),
        Charges(charges) {
    static int maxId = 0;

    id = maxId++;
}
