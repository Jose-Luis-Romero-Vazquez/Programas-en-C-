#include <iostream>
//José Luis Romero Vázquez
//311869
//31/01/19
using namespace std;

int main()
{
     cout << "Triangulo equilatero, isoceles o escaleno\n" << endl;
    float lado1, lado2, lado3;
cout<<" Proporciona la medida del lado 1 "<<endl;
cin>>lado1;
cout<<" Proporciona la medida del lado 2 "<<endl;
cin>>lado2;
cout<<" Proporciona la medida del lado 3"<<endl;
cin>>lado3;

cout<<"\n";

if((lado1==lado2)&&(lado2==lado3)&&(lado1==lado3))

cout<<"El triangulo es equilatero\n"<<endl;

else

if((lado1==lado2)||(lado2==lado3)||(lado3==lado1))
cout<<"El triangulo es isoceles\n";

else
cout<<"El triangulo es escaleno\n"<<endl;
    return 0;
}
