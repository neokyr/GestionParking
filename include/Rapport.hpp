
/* Generated from GenMyModel */

#ifndef DEF_RAPPORT
#define DEF_RAPPORT

#include <ctime>

class Rapport {
private :
    int id;
    time_t dateDebut;
    time_t dateFin;
    double CA;
    double Charges;

public:
    Rapport(time_t dateDebut, time_t dateFin, double ca, double charges);
    ~Rapport() = default;
    Rapport(Rapport const& other) = default;
    Rapport& operator=(Rapport const& other) = default;

    double getRentabilite();
    int getTauxOccupation();
    time_t  getDureeStationnementMoyen();

};


#endif
