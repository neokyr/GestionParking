/* Generated from GenMyModel */

#ifndef DEF_ABONEMENT
#define DEF_ABONEMENT

#include <ctime>


class Abonement {
private :
    time_t dateDebutValidite_;
    time_t dateFinValidite_;

public:
    Abonement();
    ~Abonement();
    Abonement(const Abonement& cA);


    time_t getDateDebutValidite() const;
    void setDateDebutValidite(time_t dateDebutValidite);
    time_t getDateFinValidite() const;
    void setDateFinValidite(time_t dateFinValidite);


};


#endif
