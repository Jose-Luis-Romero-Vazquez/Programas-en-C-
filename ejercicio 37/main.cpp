#include <iostream>
//José Luis Romero Vázquez
//311869
//28/02/20
using namespace std;

int main()
{
    int n1,counter=0;

    cout << "Conteo de digitos" << endl;
    cout<<"ingrese el numero"<<endl;
    cin>>n1;

    while (n1!=0)
    {
        n1=n1/10;counter++;

    }
    cout<<"los digitos son..."<<counter<<endl;
    return 0;
}
