#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num, pares=0;
    printf("\n\t\t CUENTA PARES\n");
    printf("\n\n INGRESE NUMERO (FIN CON CERO):\t");
    scanf("%i",&num);
    while(num!=0)
    {
        if (num%2 ==0)
        {
            pares++;
        }
        printf("\n INGRESE OTRO NUMERO (FIN CON CERO)\t");
        scanf("%i",&num);
    }
    printf("\n\t SE INGRESARON %i PARES\n",pares);
    system ("pause");
    return 0;
}
