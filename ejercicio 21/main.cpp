#include <iostream>
//José Luis Romero Vázquez
//311869
//07/02/19
using namespace std;

int main()
{

    char c;

    cout << "Determine si un caracter es una letra minuscula,letra mayuscula o un digito numerico" << endl;
    cout<<"Escribe el caracter"<<endl;
    cin>>c;

    if((c>='a')&&(c<='z'))
        cout<<"El caracter es una letra minuscula"<<endl;
    else
        if((c>='A')&&(c<='Z'))
        cout<<"El caracter es una letra mayuscula"<<endl;
    else
        if((c>='0')&&(c<='9'))
        cout<<"El caracter es un numero"<<endl;



    return 0;
}
