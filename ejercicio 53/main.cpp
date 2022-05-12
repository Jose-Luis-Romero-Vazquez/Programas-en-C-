#include <iostream>
//Jose Luis Romero Vazquez
//311869
using namespace std;
void equis (int lado);
void cuadradoVacio (int lado);
int main()
{
    int lado;
    cout << "Figura con asteriscos " << endl;
    cout<<"Proporcione el numero de renglones... ";
    cin>>lado; cout<<endl;
    equis(lado);cout<<endl;
    cuadradoVacio(lado);cout<<endl;
    cout<<endl;
    return 0;
}
void equis(int lado)
{
    for(int i=0; i<lado; i++)
    {
        for(int j=0; j<lado; j++)
        {
            if ((i==j)||(i+1==(lado-j)))
            cout<<'*';
        else
            cout<<' ';
        }
    cout<<endl;
    }
}

void cuadradoVacio(int lado)
{
    for(int i=0; i<lado; i++)
    {
        for(int j=0; j<lado; j++)
        {
            if ((i==j))
            cout<<'*';
        else
            cout<<' ';
        }
    cout<<endl;
    }

    }

