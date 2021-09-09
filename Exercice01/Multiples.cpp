// But : �crire un programme qui permet de lire un entier A et qui affichera un message selon sa valeur.
// Auteur : William Nault
// Date : 2021-09-08

#include <iostream>

void main()
{
   // Pour afficher correctement les accents
   setlocale(LC_ALL, "");


   // D�claration des variables

   int chiffre;
   int res1;
   int res2;

   // Demander un chiffre � l'utilisateur

   std::cout << " Veuillez ins�rer un chiffre :";
   std::cin >> chiffre;

   // Utilisation de modulo pour diff�rencier si la variable est divisable par 2 et 3...

   res1 = chiffre % 2;
   res2 = chiffre % 3;

   if (res1==0)
   {
      if (res2==0)
      {
         std::cout << chiffre << " est � la fois multiple de 2 et de 3 \n";
      }
      else
      {
         std::cout << chiffre << " est seulement un multiple de 2 \n";
      }
   }
   else
   {
      if (res2==0)
      {
         std::cout << chiffre << " est seulement un multiple de 3 \n";
      }
      else
      {
         std::cout << chiffre << " n'est ni un multiple de 3 ni un multiple 2 \n" ;
      }
   }
   system("pause");
}

// Plan de test
// chiffre   |   �cran
//    4      |  est seulement un multiple de 2
//   24      |  est � la fois un multiple de 2 et de 3
//    9      |  est seulement un multiple de 3
//   -2      |  est seulement un multiple de 2
//  -29      |  n'est ni un multiple de 3 ni un multiple 2           