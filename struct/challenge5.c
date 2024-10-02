/*Challenge 5 : Structure et Fonction de Retour
Écrivez un programme C qui définit une structure pour représenter un livre avec les champs titre, auteur, et année.
Écrivez une fonction qui retourne une variable de cette structure initialisée avec des valeurs données.
Affichez les informations du livre dans le programme principal.*/

#include <stdio.h>

typedef struct
{
    char titre[100];
    char auteur[100];
    int annee[100];
} livres;
livres livre ;
int main()
{
int size_note;
    printf("saisir le titre de livre :");
    scanf("%s", &livre.titre);
    printf("saisir le auteur de livre :");
    scanf("%s", &livre.auteur);
    printf("Siser lannee de livre : ");
    scanf("%d", &livre.annee);
   printf("le titre de livre est : %s\n",livre.titre);
   printf("lauteur de livre est : %s\n",livre.auteur);
   printf("lannee de livre est : %s\n",livre.annee);

    return 0;
}