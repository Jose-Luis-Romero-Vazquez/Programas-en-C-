#include <iostream>
//Jose Luis Romero Vazquez
//311869
using namespace std;

int mcd(int m,int n);
int mcm(int m,int n);

int main()
{
int n,m,c,d,y;
cout<<"Este programa calcula el maximo comun divisor de dos numeros enteros\ny el minimo comun multiplo\n"<<endl;
cout<<"Introduce el primer numero"<<endl;
cin>>n;
cout<<"Introduce el segundo numero"<<endl;
cin>>m;
c= mcd(m,n);
if(c<0)
    c*=-1;
cout<<"El maximo comun divisor de "<<m <<" y "<<n<<" es "<<c<<endl;
d=mcm(m,n);
if(d<0)
d*=-1;
cout<<"El minimo comun multiplo de "<<m<<" y "<<n<<" es "<<d<<endl;
return 0;
}

int mcd(int m,int n)
{
return (n == 0)? m : mcd(n, m % n);
}

int mcm(int m,int n)
{
return ((m*n)/(mcd(m,n)));
}
