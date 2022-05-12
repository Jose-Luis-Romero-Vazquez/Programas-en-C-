#include <iostream>
//Jose Luis Romero Vazquez
//11/feb/20
//311869
using namespace std;

int main()
{
    char n1;
    cout << "Dia de la semana" << endl;
    cout<<"\nIngrese el numero del dia"<<endl;
    cin>>n1;
    switch(n1)
    {
        case '1':cout<<"\nEl dia  de la semana es lunes"<<endl;
        break;
        case '2': cout<<"\nEl dia de la semana es martes"<<endl;
        break;
        case '3': cout<<"\nEl dia de la semana es miercoles"<<endl;
        break;
        case '4': cout<<"\nEl dia de la semana es jueves"<<endl;
        break;
        case '5': cout<<"\nEl dia de la semana es viernes"<<endl;
        break;
        case '6': cout<<"\nEl dia de la semana es sabado"<<endl;
        break;
        case '7': cout<<"\nEl dia de la semana es domingo"<<endl;

        default: cout<<"\nIngrese numeros del 1 al 7"<<endl;


    }
    return 0;
}
