#include <iostream>
//José Luis Romero Vázquez
//311869
//28/01/19
using namespace std;

int main()
{
    cout << "Angulos de un triangulo" << endl;
    int n1,n2,n3,x;
cout<<" Proporciona tres angulos... "<<endl;
cin>>n1>>n2>>n3;

x=n1+n2+n3;

    if (x==180)
    cout<< " \nEl triangulo es valido"<<endl;

    else
        cout<< " \nEl triangulo no tiene angulos reales, ingrese valores validos "<<endl;

    return 0;
}
