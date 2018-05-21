/*
    Créer une FACADE pour une machine a café qui intègre
    - le moulin a café
    - la gestion des consommables et
    - le paiement de la boisson

    à travers une interface simple qui permette
    1.d'obtenir un café
    2.de faire la maintenance de la machine (remplissage du café et récupération de l'argent)

*/
#include "Caisse.h"
#include "Cafe.h"
#include "Consommables.h"

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int cash;
    char avecSucre;
    char choix;

    /// 1. VOTRE FACADE doit intégrer les différents composants de la machine
    Caisse monnayeur;
    Cafe laSemeuse;
    Consommables c;

    /// ET SIMPLIFIER le PROGRAMME PRINCIPAL ( appel de 2 fonctions seulement)
    /// Premiere partie
    // UTILISATEUR
    cout << "Voulez-vous un cafe? ";
    cin >> choix;
    while (choix == 'o' || choix =='O')
    {
      system("CLS");
      cout << "\nBonjour, je vais vous preparer un bon cafe.\nVeuillez patienter" << endl;

      while (monnayeur.ConsulterBalance()<0)
      {
        cout << "Veuillez completer le montant, il manque encore " << -monnayeur.ConsulterBalance() << "cts" << endl << "ct:";
        cin >> cash;
        monnayeur.Inserer(cash);
      }
      monnayeur.Encaisser();
      if (true == laSemeuse.Moudre())
      {
        c.PlacerGobelet();
        cout << "Voulez-vous du sucre (o/n) ?";
        cin >> avecSucre;
        if (avecSucre == 'o' || avecSucre == 'O')
            laSemeuse.AjouterSucre();
        laSemeuse.Remplir();
        if (avecSucre == 'o' || avecSucre == 'O')
            c.PlacerTouileur();
        cout << endl <<endl<<"Votre cafe est pret !"<<endl;
      }
    cout << "Voulez-vous encore un cafe? ";
    cin >> choix;
    }

    system("PAUSE");

    /// Seconde partie
    // TECHNICIEN
    int code;
    cout << "MAINTENANCE: Veuillez saisir votre code pour ouvrir l'automate: ";
    cin >> code;
    int benef = monnayeur.viderCaisse(code);
    laSemeuse.RechargerReservoir();
    cout << "Travail  effectue, vous avez recupere " << benef << " cts."<<endl;
    system("PAUSE");
    return 0;
}
