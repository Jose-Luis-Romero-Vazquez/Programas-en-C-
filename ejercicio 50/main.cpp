#include <iostream>
//José Luis Romero Vázquez
//311869
//
using namespace std;
int cuenta(int n);
int main()
{
    int resultado,n;
    cout << "Contar digitos" << endl;
    cout<<"Ingrese los digitos que desea contar"<<endl;
    cin>>n;

    resultado=cuenta(n);
    cout<<"El numero de digitos es..."<<resultado<<endl;

    return 0;
}
int cuenta(int n)
{
    int c=0;
    {
    while(n!=0)
    {
        n=n/10;c++;
    }
    return c;
}
}
