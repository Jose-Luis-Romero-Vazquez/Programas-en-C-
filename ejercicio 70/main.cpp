#include <iostream>
#include <stdlib.h>
#include<math.h>
#include <ctime>
#include <cstdlib>
#define arr 100
//José Luis Romero Vázquez
//311869

using namespace std;
void lista(int A[],int n);
void bublesort(int A[], int n);
int main()
{
    int A[arr];
    int n;

    cout << "Funcion ascendente" << endl;
    cout<<"Cuantos datos desea considerar"<<endl;
    cin>>n;
    cout<<endl;
    if((n>0)&&(n<=arr))
    {
    lista(A,n);
    cout<<endl;
    bublesort(A,n);
    cout<<endl;
    }
    else
        cout<<"La cantidad de datos debe estar entre 0 y"<<arr<<endl;
    return 0;
}

void lista(int A[],int n)
{
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
         A[i]=0+rand()%(n-0+2);
        cout<<A[i]<<endl;
    }
}

void bublesort(int A[], int n)
{
int adi;
for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (A[j] > A[j + 1])
             {
                adi = A[j];
                A[j] = A[j + 1];
                A[j + 1] = adi;
            }
        }
    }
 cout << " Lista en forma ascendente ";
    for (int i = 0; i <= n-1; i++)
        {
        cout << "," << A[i];
}


 cout << "descendente: ";
    for (int i = n; i >= 1; i--)
        {
        cout << "," << A[i];
    }
}
