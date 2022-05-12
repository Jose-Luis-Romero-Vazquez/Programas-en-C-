#include <iostream>
//José Luis Romero Vázquez
//311869
//07/02/19
using namespace std;

int main()
{
    float funcion,x1,funcion2,funcion3;
    cout << "Valor de x" << endl;
    cout<<"Proporcione el punto x que desea evaluar"<<endl;
    cin>>x1;

     funcion=x1/5;
      funcion2=(x1)*(x1);
      funcion3=6*(x1);

    if(x1>5)

        cout<<"\nEl valor de x es... "<<funcion<<endl;

        else
            if ((x1>0)&&(x1<=5))

            cout<<"\nEl valor de x es... "<<funcion2<<endl;

            else
                if (x1<=0)

                cout<<"\nEl valor de x es... "<<funcion3<<endl;

                else
                    cout<<"\nProporcione valores validos "<<endl;



    return 0;
}
