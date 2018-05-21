#ifndef CONSOMMABLES_H
#define CONSOMMABLES_H
#include <iostream>

class Consommables
{
  public:
    Consommables() : nbGobelets(100), nbTouilleurs(1000)
    {

    }

    bool PlacerGobelet()
    {
      if (nbGobelets>0)
      {
        std::cout << "Un gobelet est place"<< std::endl;
        nbGobelets--;
        return true;
      }
      else return false;
    }

    bool PlacerTouileur()
    {
      if (nbTouilleurs>0)
      {
        std::cout << "Un touilleur est place"<< std::endl;
        nbTouilleurs--;
        return true;
      }
      else
        return false;
    }

    virtual ~Consommables();
  protected:
  private:
    int nbGobelets;
    int nbTouilleurs;
};

#endif // CONSOMMABLES_H
