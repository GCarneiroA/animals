
#ifndef CACHORRO_H
#define CACHORRO_H

#include "animal.h"

class Cachorro : public Animal
{
public:
    std::string fala() const override;
    bool sabeSentar() const override;
};

#endif
