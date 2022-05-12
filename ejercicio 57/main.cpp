#include <iostream>
//Jose Luis Romero Vazquez
//311869
using namespace std;
void estadistica(int n1, float&media, float&varianza);

int main()
{
    int n1;
    float medias, varianzas,varianza, media;
    cout<<"Varianza y media de una lista de numeros"<<endl;
    cout<<"Escribe la extension de la varianza y la media "<<endl;
    cin>>n1;


    estadistica(n1,medias, varianzas);
    cout<<"La varianza es... "<<varianzas<<endl;
    cout<<"La media es... "<<medias<<endl;




    return 0;
}

void estadistica(int n1,float&media, float&varianza)
{
    float cuadrado, prom;
    int x;
    cuadrado=prom=0;

for (int i=1; i<=n1; i++)
    {
        cout<<"numero"<<i<<" ";
        cin>>x;

        prom=x+prom;
        cuadrado=cuadrado+x*x;
    }
    varianza=(cuadrado/n1)-((prom/n1)*(prom/n1));
    media=prom/n1;
}

