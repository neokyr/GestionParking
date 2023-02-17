
/* Generated from GenMyModel */

#ifndef DEF_PARKING
#define DEF_PARKING


#include <vector>
#include "Borne.hpp"
#include "Caisse.hpp"
#include "MoyenEntree.hpp"
#include "Recu.hpp"
#include "CarteBancaire.hpp"
#include "Rapport.hpp"

class Parking {
private :
    int idParking_;
    int nbPlaces_;
    std::vector<BornePtr> bornes_;
    std::vector<CaissePtr> caisses_;

public:
    Parking(int id, int nbPlaces);
    Parking(Parking const& other) = delete;
    Parking& operator=(Parking const& other) = delete;


    void connectBorne(BornePtr borne);
    void connectCaisse(CaissePtr caisse);

    std::vector<MoyenEntreePtr> listeSorties(time_t date);
    std::vector<MoyenEntreePtr> getPlus72h();
    std::vector<RecuPtr> comptabiliteCaisses(time_t date);
    std::vector<CarteBancairePtr> listeCartesBornes(time_t date);
    Rapport& getRapportComptable(time_t date);

    int getIdParking() const;

    int getNbPlaces() const;

    const std::vector<BornePtr> &getBornes() const;

    const std::vector<CaissePtr> &getCaisses() const;


};


#endif
