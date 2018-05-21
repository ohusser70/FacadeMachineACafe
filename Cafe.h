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

    // on vérifie par un code (clé) que c'est bien un technicien qui accède à cette méthode
    void RechargerReservoir()
    {
        cafeDisponible = volume;
    }

    virtual ~Cafe();
  protected:
  private:
    const int volume;   // le volume du réservoir de café  en ml
    double volumeParTasse; // en ml
    double cafeDisponible;  // en ml
    void drawCup();

};

#endif // CAFE_H
