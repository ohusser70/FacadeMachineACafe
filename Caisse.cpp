#include "Caisse.h"


long Caisse::viderCaisse(int code)
{
  int chiffreAffaire = 0;

  if (1234 == code)
  {
    chiffreAffaire =caisse;
  }
  caisse -= chiffreAffaire;

  return chiffreAffaire;
}

Caisse::~Caisse()
{
  //dtor
}
