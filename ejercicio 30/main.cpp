#include <iostream>
//Jose Luis Romero Vazquez
//311869
//20/02/20
using namespace std;

int main()
{
    int n, numero, mayor, menor;
    cout << "Maximo y minimo de una lista de numeros" << endl;
    cout<<"Cuantos numeros desea ingresar"<<endl;
    cin>>n;

    if(n>0)
    {
    cout<<" numero 1 ";
    cin>>mayor;
    menor=mayor;
    for(int i=2; i<=n; i++)
    {
        cout<<" numero "<<i<<" ";
        cin>>numero;
         if(mayor<numero)
            mayor=numero;

            else
            {

                if(menor>numero)
                    menor=numero;

            }
            }
cout<<" El numero mayor es... "<<mayor<<" El numero menor es... "<<menor<<endl;


    }
    else
        cout<<" Ingrese numeros validos "<<endl;
    return 0;
}
