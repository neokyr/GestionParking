
/* Generated from GenMyModel */

#include "../include/Recu.hpp"

Recu::Recu() {
    static int idMax = 0;

    idRecu_ = idMax++;
    date_ = time(nullptr);

}

int Recu::getIdRecu() const {
    return idRecu_;
}

time_t Recu::getDate() const {
    return date_;
}
