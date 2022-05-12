#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <iostream>
using namespace std;
void check_format (char nombre[]);
int main()
{
    char nombre[10][20];

    cout<<"Orden alfabetico de una lista de nombres"<<endl;
    check_format(nombre[]);


  return 0;
}
void check_format (char nombre[])
{

    char aux[20];
    int i,j,k;
    int l=0;
    cout<<"Para terminar escriba * \n"<<endl;
    do
        {
            cout<<"Introduce un nombre: ";
            cin>>nombre[l];
            l++;
        }
    while (strcmp(nombre[l-1],"*")!=0);


    for(i=0; i<l-1; i++)
    {
        k=i;
        strcpy(aux, nombre[i]);
        for(j=i+1; j<l; j++)
        {
            if(strcmp(nombre[j], aux)<0)
            {
                k=j;
                strcpy(aux, nombre[j]);

            }
        }
        strcpy(nombre[k],nombre[i]);
        strcpy(nombre[i],aux);
    }

    for(i=0; i<l; i++)
    {
        cout<<nombre[i];
        cout<<endl;
    }


}

