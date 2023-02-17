
/* Generated from GenMyModel */

#ifndef DEF_PERSONNE
#define DEF_PERSONNE

#include <iostream>
#include <cstring>

class Personne
{
private :
		int idPersonne_;
		std::string nom_;
		std::string prenom_;

public:
    virtual ~Personne() = default;
    Personne(const Personne& cP) = delete;
    Personne(std::string name, std::string surname, int id);
    Personne& operator=(Personne const& oth) = default;

    int getIdPersonne() const;
    const std::string& getNom() const;
    void setNom(const std::string& nom);
    const std::string& getPrenom() const;
    void setPrenom(const std::string& prenom);
};


#endif
