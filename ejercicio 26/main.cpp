#include <iostream>
//Jose Luis Romero Vazquez
//311869
//11/02/20
using namespace std;

int main()
{
int d1,t1,e1;
    cout << "Costo de tratamiento" << endl;
    cout<<"Escriba la edad del paciente"<<endl;
    cin>>e1;
    cout<<"Escriba los dias de tratamiento"<<endl;
    cin>>d1;
    cout<<"Escriba el tipo de tratamiento"<<endl;
    cin>>t1;
if(e1>=60)
{

    switch(t1)

    {
       case 1: cout<<"\nEl costo de tratamiento es..."<<((2800*d1)*(1.025));
       break;

       case 2: cout<<"\nEl costo de tratamiento es..."<<(1950*d1)*(1.025);
       break;

       case 3: cout<<"\nEl costo de tratamiento es..."<<((2500*d1)*(1.025));
       break;

       case 4: cout<<"\nEl costo de tratamiento es..."<<((1150*d1)*(1.025));
       break;

       default :"Escriba valores validos";

    }
}
if (e1<=25)
{
    switch(t1)
    {
      case 1: cout<<"\nEl costo de tratamiento es..."<<((2800*d1)*(1.015));
       break;

       case 2: cout<<"\nEl costo de tratamiento es..."<<(1950*d1)*(1.015);
       break;

       case 3: cout<<"\nEl costo de tratamiento es..."<<((2500*d1)*(1.015));
       break;

       case 4: cout<<"\nEl costo de tratamiento es..."<<((1150*d1)*(1.015));
       break;

       default :"Escriba valores validos";


    }

}

if((e1>25)&&(e1<60))
{

switch(t1)
    {
      case 1: cout<<"\nEl costo de tratamiento es..."<<(2800*d1);
       break;

       case 2: cout<<"\nEl costo de tratamiento es..."<<(1950*d1);
       break;

       case 3: cout<<"\nEl costo de tratamiento es..."<<((2500*d1));
       break;

       case 4: cout<<"\nEl costo de tratamiento es..."<<((1150*d1));
       break;

       default :"Escriba valores validos";


    }

}

    return 0;
}
