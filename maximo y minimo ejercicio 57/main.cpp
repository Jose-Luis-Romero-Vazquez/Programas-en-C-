#include <iostream>

using namespace std;
void maxMin(int n, int&mayor, int &menor);
int main()
{
    int n;
    int maximo, minimo, numero;
    cout << "Calcula el maximo y minimo de un conjunto de numeros"<< endl;
    cout<<"Cuantos numeros deseas considerar "<<endl;
    cin>>n;
    if(n>0)
    {
        maxMin(n, maximo, minimo);
        cout<<"El maximo es "<<maximo<<endl;
        cout<<"El minimo es "<<minimo<<endl;
    }
    else
        cout<<"La cantidad de numeros debe ser mayor a cero\n";



    return 0;
}
void maxMin (int n, int &mayor, int &menor)
{

    int numero;
    for (int i=1; i<=n; i++)
    {
        cout<<"Numero"<<i<<"=";
        cin>>numero;
        if(i==1)
            mayor=menor=numero;
        else
        {
            if(mayor<numero)
                mayor=numero;
            if(menor>numero)
                menor=numero;
        }
    }
}
