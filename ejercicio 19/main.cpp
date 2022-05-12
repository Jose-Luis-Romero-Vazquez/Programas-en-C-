#include <iostream>
//José Luis Romero Vázquez
//311869
//07/02/19
using namespace std;

int main()
{
  int n1,n2,n3;

    cout << "Validez del triangulo" << endl;
    cout <<"Escribe la longitud 1 del triangulo"<<endl;
    cin>>n1;
    cout <<"Escribe la longitud 2 del triangulo"<<endl;
    cin>>n2;
    cout <<"Escribe la longitud 3 del triangulo"<<endl;
    cin>>n3;

    if ((n1>=0)&&(n2>=0)&&(n3>=0))

{


        if(((n1+n2)>n3)&&(n1+n2>n2)&&(n2+n3>n1))
            cout<<" \nEl triangulo es valido "<<endl;
            else
            cout<<" \nEl triangulo no existe "<<endl;

}

    else
        cout<<" \nIngrese valores validos "<<endl;
    return 0;
}
