#include <iostream>

using namespace std;
//José Luis Romero Vázquez
//311869
//28/01/19

int main()
{
    cout << "Resistencia equivalente" << endl;

   float r1,r2,rt;
   cout << "Escriba el valor de su resistencia 1..."<<endl;
   cin>>r1;

   cout << "Escriba el valor de su resistencia 2..."<<endl;
   cin>>r2;

   cout<<"\n";

   rt=(r1*r2)/(r1+r2);

   cout <<"La resistencia equivalente es..."<<rt<< " ohms " <<endl;


    return 0;
}
