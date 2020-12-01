
#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal
{
public:
    virtual std::string fala() const = 0;
    virtual bool sabeSentar() const = 0;
};

#endif
