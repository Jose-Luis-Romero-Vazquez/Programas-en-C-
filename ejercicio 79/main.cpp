#include <iostream>
#define size 3
//José Luis Romero Vázquez
//311869
using namespace std;

void matrix(int A[][size], int row, int fila, int columna);
int main()
{
    int fila,columna;
    int matriz[size][size];

    cout<<"Ingrese la cantidad de filas"<<endl;
    cin>>fila;
    cout<<"Ingrese la cantidad de columnas"<<endl;
    cin>>columna;
cout<<endl;
    cout<<"La matriz es..."<<endl;
    matrix(matriz,size,fila,columna);
    cout<<endl;

    return 0;
}

void matrix(int A[][size], int row, int fila, int columna)
{
    int  i, j, x;
    int inicio = 0;

    int limitecolumna, limitefila, tope;
    inicio = 0;
    limitecolumna = columna ;
    limitefila = fila;
    tope = fila * columna ;
    x = 1;
    i = 0 ;

    while (x <= tope)
    {
        for(j = inicio; j < limitecolumna  ; j++ )
        {
        A[i][j] = x++;

        }
        for(i =inicio + 1 ; i < limitefila  ; i++)
        {
        A[i][j-1]= x++;

        }
        for (j = limitecolumna - 1 ; j > inicio ; j--)
        {
        A[i-1][j-1]= x++;

        }
        for (i = limitefila - 1; i >inicio+1 ; i--)
        {
        A[i-1][j]= x++;

        }
        inicio++;
        limitecolumna --;
        limitefila--;
    }
    for (i =0 ; i < fila ; i++)
    {
   cout<<endl;
    for (j = 0; j < columna ; j++)
    cout<<"A["<<i<<"]"<<"["<<j<<"]="<<A[i][j];
    }
    }
