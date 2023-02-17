
/* Generated from GenMyModel */

#ifndef DEF_BORNES
#define DEF_BORNES


#include <memory>
#include "Surveillant.hpp"
#include "Parking.hpp"

typedef enum struct e_status : bool { H_S, EN_LIGNE} status;


class Borne {
private :
    int idBorne;
    status status;
    std::vector<SurveillantPtr> surveillant_;
    ParkingPtr parking_;


public:
    Borne();
    virtual ~Borne();
    Borne(Borne const& other) = default;
    Borne& operator=(Borne const& other) = default;

    void notifierVolCB();

};


typedef std::shared_ptr<Borne> BornePtr;

#endif
