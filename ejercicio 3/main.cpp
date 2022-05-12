#include <iostream>

using namespace std;
//José Luis Romero Vázquez
//311869
//21/01/19
int main()
{
    float base,altura, area, perimetro;

    cout << "Perimetro y area de un rectangulo" << endl;
    cout <<"Escribe cuanto mide la base..." << endl;
    cin>>base;
    cout <<"Escribe cuanto mide la altura..." << endl;
    cin>>altura;

perimetro=2*base+2*altura;
area=base*altura;


    cout <<"El perimetro del rectangulo es... " <<perimetro<<endl;
    cout <<"El area del rectangulo es... " <<area<<endl;


    return 0;
}
