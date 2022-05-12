#include <iostream>
//José Luis Romero Vázquez
//311869
//31/01/19
using namespace std;

int main()
{
    cout << "Promedio del curso" << endl;
    float tareas,examen1,examen2,promedio,x;
cout<<" Proporciona la calificacion de la tarea "<<endl;
cin>>tareas;
cout<<" Proporciona la calificacion del examen 1 "<<endl;
cin>>examen1;
cout<<" Proporciona la calificacion del examen 2 "<<endl;
cin>>examen2;



if((tareas>=0)&&(tareas<=10)&&(examen1>=0)&&(examen1<=10)&&(examen2>=0)&&(examen2<=10))
{
    x=0.4*tareas+0.3*examen1+0.3*examen2;

cout<<" \nEl promedio es... "<<x<<endl;
}
else
cout<<" \nEscriba una calificacion valida "<<endl;
    return 0;
}
