#include <iostream>
//José Luis Romero Vázquez
//311869
//28/01/19
using namespace std;

int main()
{
    cout << "Conversion de dolares a pesos" << endl;

   float pesos, dolares;
   cout << "Escriba la cantidad de dolares..."<<endl;
   cin>>dolares;

   pesos=dolares*19.02;

   cout <<"\nLa cantidad de pesos es..."<< " $ " <<pesos<<"\n";


    return 0;
}
