/* Generated from GenMyModel */
#ifndef DEF_LISTECARTEVOLEE
#define DEF_LISTECARTEVOLEE


#include <vector>

class ListeCarteVolee {
private :
    std::vector<int> numCB_;
public:
    ListeCarteVolee() = default;

    ~ListeCarteVolee() = default;

    void getListFromBank();

    bool isInList(int numCB);

};


#endif
