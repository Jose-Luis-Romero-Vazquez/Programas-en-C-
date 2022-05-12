#include <iostream>
//Jose Luis Romero Vazquez
//311869
using namespace std;
void numeroperfecto (int rangoBusqeda);
int main()
{
    int rangoBusqueda = 10000,resultado;
    cout << "Programa para buscar numeros perfectos " << endl;
    cout<<" Los primeros 4 numeros perfectos son: "<<endl;


    numeroperfecto(rangoBusqueda);



    return 0;
}


void numeroperfecto (int rangoBusqueda)
{
int auxEntero = 0,x,c;

{
for(int i = 1; i <= rangoBusqueda; i++)
            {
        if(i % 2 == 0)
            {
            for(int j = (i / 2); j >= 1 ; j--)
                {
                if( i % j == 0)
                {
                    auxEntero = auxEntero + j;
                    x=auxEntero;
                }
            }
            if(auxEntero == i)
            {

                cout<<"Numero Perfecto "<<auxEntero <<endl;
        }
            }
auxEntero = 0;
}
cout<<endl;
}
}
