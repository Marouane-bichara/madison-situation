#include <stdio.h>

int main()
{
    int size;
    printf("Entrez nombre iteams : ");
    scanf("%d", &size);

    float Arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Entrez %d number : ", i+1);
        scanf("%f" , &Arr[i]);
    }

    float numMax = Arr[0];

    for (int j = 0; j < size; j++)
    {
        if (Arr[j] > numMax)
        {
            numMax = Arr[j];
        }
    }

    float numMin = Arr[0];
    for (int n = 0; n < size; n++)
    {
        if (Arr[n] < numMin)
        {
            numMin = Arr[n];
        }
        
    }

    printf("Le plus haute Temerature : %.2f\n" , numMax);
    printf("Le plus basse Temperature : %.2f\n" , numMin);
    
    
    return 0;

}