#include <iostream>
//Jose Luis Romero Vazquez
//311869
using namespace std;
int cuentaCaracteres(char c);
int main()
{
    char c;
    int x;
    cout << "Conteo de caracateres" << endl;
    cout<<"Ingrese el caracter que desea contar "<<endl;
    cin>>c;
     cout<<"Ingrese su texto "<<endl;

    x=cuentaCaracteres(c);
    cout<<"\nEl numero de caracteres es..."<<x<<endl;

    return 0;
}
int cuentaCaracteres(char c)
{
    int a=0;
    char d;
    {

    do{

        cin>>d;
        if(d==c)
            a++;

    }
    while(d!='.');

    return a;
}
}
