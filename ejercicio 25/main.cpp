#include <iostream>
//Jose Luis Romero Vazquez
//311869
//11/02/20
using namespace std;

int main()
{
    float salario,salario2,salario3,salario4,base;
    int nivel;
    cout << "Salario de trabajadores" << endl;
    cout<<"Escriba el nivel del trabajador"<<endl;
    cin>>nivel;
    cout<<"Escriba la base del trabajador"<<endl;
    cin>>base;

    switch(nivel)

    {
        salario=(base*1.035);
        case 1: cout<<"El salario del trabajador es... "<<base*1.035<<endl;
        break;

        salario=(base*1.041);

         case 2: cout<<"El salario del trabajador es... "<<base*1.041<<endl;
        break;

        salario=(base*1.048);
         case 3: cout<<"El salario del trabajador es... "<<base*1.048<<endl;
        break;

        salario=(base*1.053);
         case 4: cout<<"El salario del trabajador es... "<<base*1.053<<endl;
        break;

        default : cout<<"Ingrese valores validos";

    }
    return 0;
}
