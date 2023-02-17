
/* Generated from GenMyModel */

#ifndef DEF_RECUESPECE
#define DEF_RECUESPECE

#include "Recu.hpp"

class RecuEspece : public Recu {
private :
    double montantDu;
    double montantPercu;
public:
    RecuEspece(double montantDu, double montantPercu);
    ~RecuEspece() override = default;
    RecuEspece(RecuEspece const& other) = default;
    RecuEspece& operator=(RecuEspece const& other) = default;

    double getMontantAttendu() override;

    double getMontantPercu() override;


};


#endif
