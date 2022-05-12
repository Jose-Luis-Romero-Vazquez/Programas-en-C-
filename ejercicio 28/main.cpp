#include <iostream>
//Jose Luis Romero Vazquez
//311869
//20/02/20
using namespace std;

int main()
{
int n1;
    cout << "Numeros impares del 1 al n" << endl;
    cout<<"Ingrese el numero de la cuenta"<<endl;
    cin>>n1;
    for(int i=1; i<=n1; i +=2)
        cout<<i <<",";
    cout<<endl;
    return 0;
}
