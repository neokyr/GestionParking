/* Generated from GenMyModel */

#ifndef DEF_ABONEMENT
#define DEF_ABONEMENT

#include <ctime>
#include "Client.hpp"

class Abonement {
private :
    time_t dateDebutValidite_;
    time_t dateFinValidite_;
    ClientPtr client_;

public:
    Abonement(time_t dateDebutVal,time_t dateFinVal, ClientPtr client);
    ~Abonement() = default;
    Abonement(const Abonement& cA) = delete;


    time_t getDateDebutValidite() const;
    void setDateDebutValidite(time_t dateDebutValidite);
    time_t getDateFinValidite() const;
    void setDateFinValidite(time_t dateFinValidite);
    const ClientPtr &getClient() const;



};



#endif
