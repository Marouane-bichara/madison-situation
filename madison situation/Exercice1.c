#include <stdio.h>

int main()
{
    int base;
    int hauteur;

    printf("Entrez base: ");
    scanf("%d", &base);
    
    printf("Entrez hauteur: ");
    scanf("%d", &hauteur);

    int Rlair = (base * hauteur) / 2;
    int Rperimetre = 3 * base;

    printf("Air : %d\n" , Rlair);
    printf("Perinetre : %d\n" , Rperimetre);


    return 0;
}