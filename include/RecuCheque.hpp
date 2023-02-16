
/* Generated from GenMyModel */

#ifndef DEF_RECUCHEQUE
#define DEF_RECUCHEQUE

#include "Recu.hpp"

class RecuCheque : public Recu {
private :
    double montant_;
    int numeroCheque_;
    time_t dateEncaissement = 0;

public:
    RecuCheque(int numeroCheque, double montant);
    ~RecuCheque() override = default;
    RecuCheque(RecuCheque const & other) = default;
    RecuCheque& operator=(RecuCheque const& other) = default;

    int getNumeroCheque() const;

    time_t getDateEncaissement() const;
    double getMontantAttendu() override;
    double getMontantPercu() override;
    void encaisserCheque();


};


#endif
