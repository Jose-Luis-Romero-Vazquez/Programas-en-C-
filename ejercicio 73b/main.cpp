#include <iostream>
#include <cstring>
#include <cstdlib>
//José Luis Romero Vázquez
//311869

using namespace std;
void invertidor (char cadena[]);
int main()
{
    char cadena[200];

    cout<<"Escriba una cadena: "<<endl;
    cin.getline(cadena,200);

    cout<<"La cadena alreves es: "<<endl;
    invertidor(cadena);
    cout<<endl;
    return 0;
}
void invertidor (char cadena[])
{
    for (int i=strlen(cadena); i>=0; i--)
        {
        cout<<cadena[i];
        if(cadena[i]=cadena[0])
        {
            cout<<cadena[0];
    }
        }
    cout<<endl;
}
