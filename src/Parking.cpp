
/* Generated from GenMyModel */

#include "../include/Parking.hpp"

int Parking::getIdParking() const {
    return idParking_;
}

int Parking::getNbPlaces() const {
    return nbPlaces_;
}

const std::vector <BornePtr> &Parking::getBornes() const {
    return bornes_;
}

const std::vector <CaissePtr> &Parking::getCaisses() const {
    return caisses_;
}
