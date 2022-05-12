#include <iostream>
#include <cmath>
//José Luis Romero Vázquez
//311869
//04/03/20
using namespace std;

int main()

{
int numero, exp, digito;
double binario;
cout<<"Introduce el numero "<<endl;
cin>>numero;
exp=0;
binario=0;
while(numero/2!=0)
{
    digito=numero%2;
    binario=binario+digito*pow(10.0,exp);
    exp++;
    numero=numero/2;
}
binario=binario+numero*pow(10.0,exp);
cout<<"binario: "<<binario<<endl;

return 0;
}

