
/* Generated from GenMyModel */

#include "Client.hpp"
Client::Client(std::string name, std::string surname, int id, std::string refC) {

}

Client::Client(const Client &cC) {

}

const std::string &Client::getRefClient() const {
    return refClient_;
}

void Client::setRefClient(const std::string &refC) {
    refClient_ = refC;
}


