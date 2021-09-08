// But : �crire un programme qui demande a l'utilisateur de saisir 3 entiers 
// et que le programme affiche si c est compris entre a et b ou si c est compris entre b et a
// Auteur : William Nault
// Date : 2021-09-08

#include <iostream>

void main()
{
   // Pour afficher correctement les accents
   setlocale(LC_ALL, "");


   // D�claration des variables

   int nb1;
   int nb2;
   int nb3;


   // Demander un nombre a l'utilisateur

   std::cout << " Veuillez indiquer un chiffre :";

   std::cin >> nb1;

   std::cout << " Veuillez indiquer un deuxi�me chiffre :";

   std::cin >> nb2;

   std::cout << " Veuillez indiquer un troisi�me chiffre :";

   std::cin >> nb3;

   if (nb3 < nb1 && nb3 > nb2)
   {
      std::cout << " Le troisi�me chiffre est compris entre le premier et le deuxi�me chiffre rentr�. \n";
   }
   else
   {

   if (nb3 > nb1 && nb3 < nb2)
   {
      std::cout << " Le troisi�me chiffre est compris entre le premier et le deuxi�me chiffre rentr�. \n";
   }
   else
   {
      std::cout << " Le troisi�me chiffre n'est pas compris entre le premier chiffre et le deuxi�me. \n";
   }
   }

   system("pause");
}

// plan de test
//  Chiffre1   |   Chiffre2   |   Chiffre3  |  �cran
//      0      |      0       |       0     | Le troisi�me chiffre n'est pas compris entre le premier chiffre et le deuxi�me.
//      4      |      66      |      31     | Le troisi�me chiffre est compris entre le premier et le deuxi�me chiffre rentr�.
//     -3      |      42      |      -1     | Le troisi�me chiffre est compris entre le premier et le deuxi�me chiffre rentr�.
//      8      |      -6      |      -9     | Le troisi�me chiffre n'est pas compris entre le premier chiffre et le deuxi�me.
//    -87      |    -182      |    -114     | Le troisi�me chiffre est compris entre le premier et le deuxi�me chiffre rentr�.