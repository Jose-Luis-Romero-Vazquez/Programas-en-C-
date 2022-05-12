#include <iostream>
#define size 3
//José Luis Romero Vázquez
//311869
using namespace std;
void lectura(int A[][size], int row);
void imprime (int A[][size], int row);
void original(int A[][size], int row);
void imprime2(int A[][size], int row);
int main()
{
    int matriz[size][size];
    lectura(matriz,size);
    cout<<endl;

    cout<<"La transpuesta es "<<endl;
    imprime2(matriz,size);
    cout<<endl;
    cout << "Los elementos de la matriz original son" << endl;
    cout<<endl;
    original(matriz,size);
    return 0;
}

void lectura(int A[][size], int row)
{
    for(int i=0; i<row; i++)
        for(int j=0; j<row; j++)
    {
        cout<<"A["<<i<<"]";
        cin>>A[i][j];
    }
}

void original(int A[][size], int row)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0;j<row;j++)

                cout<<"A["<<i<<"]"<<"["<<j<<"]="<<A[i][j];
            cout<<endl;
        }

    }


void imprime2(int A[][size], int row)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0;j<row;j++)
            cout<<"A["<<i<<"]"
            <<"["<<j<<"]="
            <<A[j][i];
        cout<<endl;
    }
}
