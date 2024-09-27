#include <stdio.h>

int main()
{
    int temperature;

    printf("Entrez la temperature : ");
    scanf("%d" , &temperature);

    if (temperature >= 38)
    {
        printf("Vous avez de la fievre.");
    }else if(temperature < 38)
    {
        printf("Votre temperature est normale.");
    }
    
    return 0;
}