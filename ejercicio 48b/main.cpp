#include <iostream>
//Jose Luis Romero Vazquez
//311869
//
using namespace std;
int varianza(int n);

int main()
{
     int n;
    float v;

    cout << "Varianza de lista de numeros" << endl;
    cout<<"Escribe cuantos numeros se van a ingresar "<<endl;
    cin>>n;
     v=varianza(n);
     cout<<"La varianza es... "<<v<<endl;

    return 0;
}
int varianza(int n)
{
    int x;
    float varianza, cuadrado, prom;
    cuadrado=0;
    prom=0;

{

    for (int i=1; i<=n; i++)
    {
        cout<<"numero"<<i<<" ";
        cin>>x;

        prom=x+prom;
        cuadrado=cuadrado+x*x;
    }
    varianza=(cuadrado/n)-((prom/n)*(prom/n));
}
       return varianza;

}
