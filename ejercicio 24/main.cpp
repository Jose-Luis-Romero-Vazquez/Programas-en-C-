#include <iostream>
//Jose Luis Romero Vazquez
//11/feb/20
//311869
using namespace std;

int main()
{
    int n1;
    cout << "Mes y dias del mes" << endl;
    cout<<"Escriba el numero del mes que desea conocer"<<endl;
    cin>>n1;
    switch(n1)
    {
        case 1 :cout<<"\nEl mes es enero y tiene 31 dias"<<endl;
        break;

        case 2 :cout<<"\nEl mes es febrero y tiene 28 dias"<<endl;
        break;

        case 3 :cout<<"\nEl mes es marzo y tiene 31 dias"<<endl;
        break;

        case 4 :cout<<"\nEl mes es abril y tiene 30 dias"<<endl;
        break;

        case 5 :cout<<"\nEl mes es mayo y tiene 31 dias"<<endl;
        break;

        case 6 :cout<<"\nEl mes es junio y tiene 30 dias"<<endl;
        break;

        case 7 :cout<<"\nEl mes es julio y tiene 31 dias"<<endl;
        break;

        case 8 :cout<<"\nEl mes es agosto y tiene 30 dias"<<endl;
        break;

        case 9 :cout<<"\nEl mes es septiembre y tiene 31 dias"<<endl;
        break;

        case 10 :cout<<"\nEl mes es octubre y tiene 30 dias"<<endl;
        break;

        case 11 :cout<<"\nEl mes es noviembre y tiene 30 dias"<<endl;
        break;

        case 12 :cout<<"\nEl mes es diciembre y tiene 28 dias"<<endl;
        break;

        default : cout<<"\nEscribe un numero entre el 1 y el 12"<<endl;
    }
    return 0;
}
