#include <iostream>
#include <cstdlib>
#define MAX 20
#include <iomanip>
//NOMBRE: ULISES ANTONIO SANCHEZ RODRIGUEZ
//CLAVE: 0308016
//EJERCICIO 80
using namespace std;
void  Guardar_Datos(char lista[][MAX],int,int);
void bubleshort_frase (char lista[][MAX],int,int);
void imprime (char lista[][MAX],int,int);
int main()
{
    system("color 3F");
    char lista[MAX][MAX];
    int n;
    do{
        cout << "cuantos elementos desea ingresar :" << endl;
    cin>>n;cin.ignore();
    if(n>=0 && n<=MAX)
       {
    Guardar_Datos(lista,n,MAX);
    bubleshort_frase(lista,n,MAX);
    imprime(lista,n,MAX);
       }
     else
        cout<< "ingrese valores entre 0 y"<<MAX<<endl;


    }while(n<0 || n>MAX);

    return 0;
}

void Guardar_Datos(char lista[][MAX],int n,int)
{
    for(int i=0; i<n; i++)
    {
        cout<< lista[i];
        cout<< "palabra "<<i<< " : ";
        cin.getline(lista[i],MAX);
    }
}

void bubleshort_frase (char lista[][MAX],int n,int )
   {

     int i,j,c;
     char temp[MAX];
       cout<< "el arreglo en orden ascedente es "<<endl;
       for ( i=0; i<n-1; i++)
       {
           c=i;
           strcpy(temp,lista[i]);
           for (j=i+1; j<n; j++)
        {
             if (strcmp(lista[j],temp)<0)
           {
               c=j;
               strcpy (temp,lista[j]);

}

        }strcpy(lista[c],lista[i]);
        strcpy(lista[i],temp);
        //cout << lista[i]<<endl;
       }
    }

    void imprime (char lista[][MAX],int n,int)
    {
        for(int i=0; i<n;i++)
        {
            cout<< lista[i]<<endl;
        }
    }

