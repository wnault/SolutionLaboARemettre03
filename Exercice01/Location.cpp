// But : Écrire un programme pour la location d'une voiture.
// et que le programme affiche si c est compris entre a et b ou si c est compris entre b et a
// Auteur : William Nault
// Date : 2021-09-010

#include <iostream>

void main()
{
   // Pour afficher correctement les accents
   setlocale(LC_ALL, "");

   // Déclaration des constantes pour mémoriser des valeurs numérique qui peuvent changer dans le temps,
   // mais pas lors de l'exécution du programme : à l'intérieur du programme elles ont toujours la même valeur
   const double LOCATION = 45;
   const int NB_KM_GRATUIT = 250;
   const double CONSO = 7.6;
   const double COUT_KM_SUPPL = 0.05;
   const double COUT_lITRE_ESSENCE = 1.35;
   


   // Déclaration des variables

   int nbkm;
   int nbjour;
   double coutlocation;
   int freekm;
   double kmenplus;
   double ess;
   double total;

   std::cout << " Veuillez insérer le nombre de kilomètre : ";
   std::cin >> nbkm;

   std::cout << " Veuillez insérer le nombre de jours : ";
   std::cin >> nbjour;

   if (nbjour > 0 && nbkm > 0)
   {


      // On va calculer le cout de la location de la voiture

      coutlocation = LOCATION * nbjour;

      // Calculer le kilomètre supplémentaire  

      freekm = NB_KM_GRATUIT * nbjour;

      // Si le nombre de kilometre parcouru est plus grand que le nombre de kilometre gratuit
      // on doit calculer le montant des km en plus.

      if (nbkm > freekm)
      {
         kmenplus = (nbkm - freekm) * COUT_KM_SUPPL;
      }
      else
      {
         kmenplus = 0;
      }
      // Calculez le cout de l'essence

      ess = COUT_lITRE_ESSENCE * nbkm / 100 * CONSO;

      total = ess + kmenplus + coutlocation;

      std::cout << " Le cout total est de : \n" << total;
   }
   else
   {
      std::cout << " ERREUR : Veuillez entrer des nombres positifs ! \n";
   }
   system("pause");

}


// Plan de test
//   nb de km   |   nb de jours   |   total
//          0                 0           0
//        500                 3         3 * 45 + 500/100 * 7.6 * 1.35 = 1436.4
//       1000                 3         3 * 45 + 1000/100 * 7.6 * 1.35 + 250 * 0.05 = 250.1
//         -1                -1         