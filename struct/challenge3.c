/*Challenge 3 : Passage de Structure en Argument
Écrivez un programme C qui définit une structure pour représenter un rectangle avec les champs longueur et largeur.
Écrivez une fonction qui prend une variable de cette structure en argument et calcule l'aire du rectangle.
Affichez l'aire dans le programme principal.*/

#include <stdio.h>
#include <stdlib.h>

struct dimension{
      int longueur;
      int largeur;

};
int AIR(struct dimension rec){
        int longueur;
        int largeur;
        int rec1;

        rec1=longueur*largeur;
        return rec1;
}
int main()
{



    struct dimension rec1={23,46};
    AIR(rec1);
    printf("laire du rectangle est : %d ",rec1);
    return 0;
}
