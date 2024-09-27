#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number : ");
    scanf("%d" , &number);

    if (number % 2 == 0)
    {
        printf("Ce nest pas un nombre premier.");
    }else
    {
        printf("Cest un nombre premier.");
    }
    
    return 0;
}