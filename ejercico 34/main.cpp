#include <iostream>
//Jose Luis Romero Vázquez
//311869
//25/02/20
using namespace std;

int main()
{
    int x,n;
    float varianza, cuadrado, prom;
    cuadrado=0;
    prom=0;
    cuadrado=prom=0;
    cout << "Varianza de lista de numeros" << endl;
    cin>>n;
    if (n>0)
    {

    for (int i=1; i<=n; i++)
    {
        cout<<"numero"<<i<<" ";
        cin>>x;

        prom=x+prom;
        cuadrado=cuadrado+x*x;
    }
    varianza=(cuadrado/n)-((prom/n)*(prom/n));
        cout<<"La varianza es... "<<varianza;
    }
    else cout<<"ingrese valores positivos"<<endl;
    return 0;
}
