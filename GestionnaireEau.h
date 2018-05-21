#ifndef GESTIONNAIREEAU_H
#define GESTIONNAIREEAU_H


class GestionnaireEau
{
  public:
    GestionnaireEau(double vReservoir) : capcite(vReservoir);
    virtual ~GestionnaireEau();
  protected:
  private:
    const double capacite;

};

#endif // GESTIONNAIREEAU_H
