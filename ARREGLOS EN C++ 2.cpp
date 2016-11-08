#include<cstdlib>
#include<iostream>
using namespace std;
main()
{
    int numeros[3];
    int i,suma=0;
    float promedio;
    for(i=0;i<3;i++)
    {
        cout<<"\n INGRESE EL VALOR DEL ARREGLO:\t";
        cin>>numeros[i];
        suma=suma+numeros[i];
    }
    promedio=(float)suma/3;
    cout<<"\n LA SUMA ES:\t"<<suma<<"\n";
    cout<<"\n Y SU PROMEDIO ES:\t"<<promedio<<"\n";
    system("pause");
    return 0;
}
