#include <iostream>

using namespace std;
//José Luis Romero Vázquez
//311869
//23/01/19

int main()
{
    float num1,num2, num3, promedio,diferencia1, diferencia2, diferencia3;

    cout << "Promedios" << endl;
    cout <<"Escribe el primer numero..." << endl;
    cin>>num1;
    cout<<"Escribe el segundo numero..." <<endl;
    cin>>num2;
    cout << "Escribe el tercer numero..." <<endl;
    cin>>num3;

    promedio=(num1+num2+num3)/3;

    diferencia1=(promedio-num1);
    diferencia2=(promedio-num2);
    diferencia3=(promedio-num3);

    cout <<"El promedio de los tres numeros es... " <<promedio<<endl;

    cout <<diferencia1<< "\t\t"<<num1<<endl;
    cout <<diferencia2<< "\t\t"<<num2<<endl;
    cout <<diferencia3<< "\t\t"<<num3<<endl;
    return 0;
}
