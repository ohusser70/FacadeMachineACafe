#ifndef CAISSE_H
#define CAISSE_H


class Caisse
{
  public:
    Caisse() : balance(-80), prix(80), caisse(0){}

    int ConsulterPrixDuCafe(){return prix;}
    int ConsulterBalance(){return balance;}
    void Inserer(int montant){balance +=montant;}

    // pour le prochain cafe
    void Encaisser()
    {
      caisse += prix+balance;
      balance=-prix;     // l'appareil ne rend pas la monnaie (peut-être dans la version 2...)
    }

    long viderCaisse(int code);
    virtual ~Caisse();
  protected:
  private:
    int balance;
    int prix;
    int caisse;
};

#endif // CAISSE_H
