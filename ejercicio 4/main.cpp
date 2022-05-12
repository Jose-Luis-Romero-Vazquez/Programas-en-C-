#include <iostream>

using namespace std;
//José Luis Romero Vázquez
//311869
//21/01/19
int main()
{
     float centigrados,fahrenheit,kelvin;

    cout << "Grados centigrados a grados fahrenheit y kelvin" << endl;
    cout <<"Escribe la temperatura en grados centigrados..." << endl;
    cin>>centigrados;

fahrenheit=centigrados*1.8+32;
kelvin=centigrados+273.15;


    cout <<"La temperatura en grados farenheit es... " <<fahrenheit<< " F " <<endl;
    cout <<"La temperatura en grados kelvin es... " <<kelvin<< " K " <<endl;

    return 0;

}
