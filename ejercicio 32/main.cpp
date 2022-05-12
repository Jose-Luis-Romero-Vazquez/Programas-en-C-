#include <iostream>
//Jose Luis Romero Vázquez
//311869
//25/02/20
using namespace std;

int main()
{
    double n1=1;
    float x;
    cout << "Factorial de un numero" << endl;
    cout<<" Escribe el numero del factorial"<<endl;
    cin>>x;

if(x>0)
{
    for (int i=1; i<=x; i++)

        n1=n1*i;

        cout<<"el factorial es..."<<n1<<endl;


}
else
    cout<<"ingrese valores positivos"<<endl;
    return 0;
}
