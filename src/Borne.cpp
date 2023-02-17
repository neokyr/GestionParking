
/* Generated from GenMyModel */

#include "../include/Borne.hpp"


int Borne::getIdBorne() const {
    return idBorne_;
}

Status Borne::getStatus() const {
    return status_;
}

const std::vector<SurveillantPtr> &Borne::getSurveillant() const {
    return surveillant_;
}

const ParkingPtr &Borne::getParking() const {
    return parking_;
}

