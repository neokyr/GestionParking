
/* Generated from GenMyModel */

#ifndef DEF_RECUCB
#define DEF_RECUCB

#include "Recu.hpp"

class RecuCB : public Recu {
private :
    double montant_;
    int numCB_;
public:
    RecuCB(double montant, int numCB);
    ~RecuCB() override = default;
    RecuCB(RecuCB const& other) = default;
    RecuCB& operator=(RecuCB const& other) = default;

    double getMontantAttendu() override;
    double getMontantPercu() override;

    int getNumCb() const;

};


#endif
