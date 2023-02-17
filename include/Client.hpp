
/* Generated from GenMyModel */

#ifndef DEF_CLIENT
#define DEF_CLIENT

#include <iostream>
#include "Personne.hpp"

class Client : public Personne
{

private :
    std::string refClient_;

public:
    Client (std::string name, std::string surname, int id, std::string refC)
            : Personne(name, surname, id), refClient_(refC){}
    Client(const Client& cC);
    ~Client();



    const std::string &getRefClient() const;
    void setRefClient(const std::string &refC);


};


#endif
