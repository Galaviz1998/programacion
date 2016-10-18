#include <stdio.h>
#include <stdlib.h>
main ()
{
    float temperatura;
    printf("\n\t\t PROGRAMA DE TEMPERATURA \n");
    printf("\n Ingrese la temperatura:\t");
    scanf("%f",&temperatura);
    if(temperatura>= -15&&temperatura<=12)
    {
        printf("\n El clima es frio\n");
    }
    else
    {
        if(temperatura>12&&temperatura<=24)
        {
            printf("\n El clima es templado\n");
        }
        else
        {
            if(temperatura>24&&temperatura<=45)
            {
                printf("\n El clima es calido");
            }
            else
            {
                printf("\n Temperatura no valida");
            }
        }
    }
    getch();
    return 0;
}
