#include <iostream>
//Jose Luis Romero Vazquez
//311869

using namespace std;
int maximo(int n);
int main()
{
   int n,mayor;

    {
        cout<<"Cuantos numeros desea ingresar"<<endl;
        cin>>n;
        cout<<endl;

        cout<<"Ingrese la lista de numeros"<<endl;

    if(n>0)
    mayor=maximo(n);
    cout<<"\nEl maximo es... "<<mayor;
    return 0;
    }

}
int maximo(int n)
{

    int max,x;

    {
        cin>>max;
        for(int i=2; i<=n; i++)
        {
             cin>>x;
             if(max<x)
                max=x;

        }
        return max;
    }
}
