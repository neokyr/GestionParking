
/* Generated from GenMyModel */

#include "Personne.hpp"

Personne::Personne(std::string name, std::string surname, int id) {

}


Personne::Personne(const Personne &cP) {

}


int Personne::getIdPersonne() const {
    return idPersonne_;
}

void Personne::setIdPersonne(int idPersonne) {
    Personne::idPersonne_ = idPersonne;
}

const std::string &Personne::getNom() const {
    return nom_;
}

void Personne::setNom(const std::string &nom) {
    Personne::nom_ = nom;
}

const std::string &Personne::getPrenom() const {
    return prenom_;
}

void Personne::setPrenom(const std::string &prenom) {
    Personne::prenom_ = prenom;
}


