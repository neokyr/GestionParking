
/* Generated from GenMyModel */

#ifndef DEF_RECU
#define DEF_RECU

#include <ctime>
#include <memory>

class Recu {
private :
    int idRecu_;
    time_t date_;

public:
    Recu();
    virtual ~Recu();
    Recu(Recu const& other) = default;
    Recu& operator=(Recu const& other) =default;

    int getIdRecu() const;
    time_t getDate() const;

    virtual double getMontantAttendu() = 0;
    virtual double getMontantPercu() = 0;

};

typedef std::shared_ptr<Recu> RecuPtr;

#endif
