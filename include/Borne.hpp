
/* Generated from GenMyModel */

#ifndef DEF_BORNES
#define DEF_BORNES


#include <memory>

typedef enum struct e_status : bool { H_S, EN_LIGNE} status;


class Borne {
private :
    int idBorne;
    status status;


};


typedef std::shared_ptr<Borne> BornePtr;

#endif
