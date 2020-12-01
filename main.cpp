
#include <iostream>

#include "gato.h"
#include "cachorro.h"

int main()
{
    Animal *m_animal = new Gato();
    {
        std::cout << m_animal->fala() << std::endl;
    }
    delete m_animal;
    
    
    m_animal = new Cachorro();
    {
        std::cout << m_animal->fala() << std::endl;
    }
    delete m_animal;

    return 0;
}
