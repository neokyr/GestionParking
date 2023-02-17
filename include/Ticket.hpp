
/* Generated from GenMyModel */

#ifndef DEF_TICKET
#define DEF_TICKET

#include <vector>
#include "MoyenEntree.hpp"
#include "Validation.hpp"

class Ticket : public MoyenEntree {
private:
    std::vector<ValidationPtr> validations_;
public:
    bool estValide() override;

    void validateTicket(time_t until);
};


#endif
