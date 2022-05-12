#include <iostream>
//José Luis Romero Vázquez
//311869
//23/01/19
using namespace std;

int main()
{
    float x,y, m, x1,x2,y1,y2,b;

    cout << "Ecuacion de la recta que pasa por dos puntos" << endl;
    cout <<"Escribe el valor de x1..." << endl;
    cin>>x1;
    cout<<"Escribe el valor de x2..." <<endl;
    cin>>x2;
    cout << "Escribe el valor de y1..." <<endl;
    cin>>y1;
    cout << "Escribe el valor de y2..." <<endl;
    cin>>y2;

    m=(y2-y1)/(x2-x1);
    b=y1-m*x1;
    y=m*x1+b;

    cout <<"y= " <<m<<"x+"<<b<<endl;

    return 0;
}
