#include "Cafe.h"

Cafe::~Cafe()
{
  //dtor
}


/// moud le café s'il en reste assez dans le réservoir
bool Cafe::Moudre()
{
    bool succes = true;
    if (cafeDisponible < this->volumeParTasse)
    {
        std::cout << "Reservoir de cafe VIDE!"<<std::endl;
        succes = false;
    }
    else
    {
        std::cout << "10 g de cafes sont moulus"<<std::endl;
    }
  return succes;
}

void Cafe::drawCup()
{
    std::cout << "      )  (\n     (   ) )\n      ) ( (\n    _______)_\n .-'---------|\n( C|/\\/\\/\\/\\/|\n '-./\\/\\/\\/\\/|\n   '_________'\n    '-------'\n";
}
