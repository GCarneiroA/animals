
#ifndef GATO_H
#define GATO_H

#include "animal.h"

class Gato : public Animal
{
public:
    std::string fala() const override;
    bool sabeSentar() const override;
};

#endif
