#include <iostream>
#include<cmath>
//José Luis Romero Vázquez
//311869
//09/02/19
using namespace std;

int main()
{

    float n1,n2,n3,x1,x2,x,det;
    cout << "Solucion a la ecuacion de segundo grado" << endl;
    cout << "Escribe el valor a" << endl;
    cin>>n1;
     cout << "Escribe el valor b" << endl;
    cin>>n2;
     cout << "Escribe el valor c" << endl;
    cin>>n3;
det=(n2*n2)-(4*n1*n3);
    if(n1==0)
{
    x=-n3/n2;
cout<<"\nEl valor de x es..."<<x<<endl;
}
else


     if(det>=0)

{

        x1=(-n2+sqrt(det)/(2*n1));
        x2=(-n2-sqrt(det)/(2*n1));
        cout<<"\nEl valor de x1 es... "<<x1;
        cout<<"\nEl valor de x2 es... "<<x2<<endl;
}

else
    cout<<"\nEl valor esta fuera del rango de los reales"<<endl;





    return 0;
}
