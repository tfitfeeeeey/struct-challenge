/*Challenge 1 : Définition et Utilisation de Structure
Écrivez un programme C qui définit une structure pour représenter une personne avec les champs nom, prenom, et age.
Créez une variable de cette structure, assignez des valeurs aux champs, et affichez ces valeurs.*/

#include <stdio.h>
#include <stdlib.h>
struct personne{
   char nom[50];
   char prenom[50];
   int age;

};
int main()
{
   struct personne p1 = {"anas","tfitfi",23};
   struct personne p2 = {"you","code",24};

   printf("%s --- %s --- %d \n",p1.nom,p1.prenom,p1.age);
   printf("%s --- %s --- %d \n",p1.nom,p2.prenom,p1.age);

   return 0;
}
