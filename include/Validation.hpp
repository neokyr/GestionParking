
/* Generated from GenMyModel */

#ifndef DEF_VALIDATION
#define DEF_VALIDATION

#include <ctime>
#include <memory>

class Validation {
private :
    time_t validUntil_;
public:
    Validation(time_t validUntil);
    ~Validation();
    Validation(Validation const& other) = default;
    Validation& operator=(Validation const& other) = default;
};

typedef std::shared_ptr<Validation> ValidationPtr;


#endif
