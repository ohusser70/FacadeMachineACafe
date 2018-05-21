#ifndef CAFE_H
#define CAFE_H

#include <iostream>

class Cafe
{
  public:
    Cafe(int capa=2000) : volume(capa), volumeParTasse(10)
    {
        drawCup();
        cafeDisponible = capa;
    }
    bool Moudre();
    void AjouterSucre()
    {
      std::cout << "Avec sucre" << std::endl;
    }
    void Remplir()
    {
      std::cout << "remplissage du cafe en cours (ne pas retirer le gobelet)" << std::endl;
    }

    // on v�rifie par un code (cl�) que c'est bien un technicien qui acc�de � cette m�thode
    void RechargerReservoir()
    {
        cafeDisponible = volume;
    }

    virtual ~Cafe();
  protected:
  private:
    const int volume;   // le volume du r�servoir de caf�  en ml
    double volumeParTasse; // en ml
    double cafeDisponible;  // en ml
    void drawCup();

};

#endif // CAFE_H
