#include <iostream>
//José Luis Romero Vázquez
//311869
//31/02/20
using namespace std;

int main()
{
    int n1,n2=0,n3;

    cout << "Suma de digitos " << endl;
    cout<<"ingrese el numero"<<endl;
    cin>>n1;

    while (n1!=0)
    {
        n3=n1%10;
        n1/=10;

        n2+=n3;

    }
    cout<<"la suma de los digitos es..."<<n2<<endl;
    return 0;
}

