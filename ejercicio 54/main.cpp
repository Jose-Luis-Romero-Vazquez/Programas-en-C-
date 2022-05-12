#include <iostream>
//Jose Luis Romero Vazquez
//311869
using namespace std;
void equis (int lado, char figura);
void cuadradoVacio (int lado,char figura);

int main()
{
    int lado;
    char figura;
    cout << "Figura con asteriscos " << endl;
    cout<<"Proporcione el numero de renglones (menor a 20 renglones)... ";
    cin>>lado;
    cout<<"Escribe la figura que estara dentro de la figura ";
    cin>>figura;
    equis(lado, figura);cout<<endl;
    cuadradoVacio(lado, figura);cout<<endl;
    cout<<endl;
    return 0;
}
void equis(int lado, char figura)
{
    for(int i=0; i<lado; i++)
    {
        for(int j=0; j<lado; j++)
        {
            if ((i==j)||(i+1==(lado-j)))
            cout<<figura;
        else
            cout<<' ';
        }
    cout<<endl;
    }
}

void cuadradoVacio(int lado, char figura)
{
    for(int i=0; i<lado; i++)
    {
        for(int j=0; j<lado; j++)
        {
            if ((i==j))
            cout<<figura;
        else
            cout<<' ';
        }
    cout<<endl;
    }

    }
