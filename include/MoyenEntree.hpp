
/* Generated from GenMyModel */

#ifndef DEF_MOYENENTREE
#define DEF_MOYENENTREE

#include <ctime>
#include <memory>

class MoyenEntree {
private:
    int idMoyen_;
    time_t dateEntree_;
    time_t dateSortie_;

public:
    MoyenEntree(int id) : idMoyen_(id), dateEntree_(time(nullptr)), dateSortie_(0) {};
    virtual ~MoyenEntree() = default;
    MoyenEntree(MoyenEntree const& oth) = delete;
    MoyenEntree& operator=(MoyenEntree const& oth) { return const_cast<MoyenEntree &>(oth);}

    virtual bool estValide() = 0;

    int getIdMoyen() const {
        return idMoyen_;
    }

    time_t getDateEntree() const {
        return dateEntree_;
    }

    time_t getDateSortie() const {
        return dateSortie_;
    }

    void setDateSortie(time_t dateSortie) {
        dateSortie_ = dateSortie;
    }

};

typedef std::shared_ptr<MoyenEntree> MoyenEntreePtr;

#endif
