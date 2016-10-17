#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int repetir;
    char estado_componente;
    do
    {
        system("cls");
        printf("\n\t\t PROGRAMA LINEA DE PRODUCCION\n");
        printf("\n\t INGRESE CODIGO DE COMPONENTES");
        printf("\n\t E PARA ESPACIAL\n\t M PARA MILITAR");
        printf("\n\t C PARA COMERCIAL \n\t J PARA JUGUETE\n\t");
        scanf("%c",&estado_componente);
        switch(estado_componente)
        {
        case('e'): case('E'):
            printf("\n\t HA INGRESADO UN COMPONENTE GRADO ESPACIAL AL STOCK");
            break;
        case('m'):case('M'):
            printf("\n\t HA INGRESADO UN COMPOMENTE GRADO MILITAR AL STOCK");
            break;
        case('c'):case('C'):
            printf("\n\t HA INGRESADO UN COMPONENTE GRADO COMERCIAL AL STOCK");
            break;
        case('j'):case('J'):
            printf("\n\t HA INGRESADO UN COMPONENTE GRADO DE JUGUETE AL STOCK");
            break;
        default:
            printf("\n\t CODIGO NO ADMITIDO");
        }
        printf("\n\t DESEA REGISTRAR OTRO ELEMENTO? 1 PARA SI:\t");
        scanf("%i",&repetir);
        fflush(stdin);
    }
    while(repetir==1);
    getch();
    return 0;
}
