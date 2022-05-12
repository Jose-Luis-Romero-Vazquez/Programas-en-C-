#include <iostream>
//José Luis Romero Vázquez
//311869
//04/02/19

using namespace std;

int main()
{
    cout << "Mayor y menor de tres numeros\n" << endl;
    int n1, n2, n3;
cout<<" Proporciona el primer numero "<<endl;
cin>>n1;
cout<<" Proporciona el segundo numero "<<endl;
cin>>n2;
cout<<" Proporciona el tercer numero"<<endl;
cin>>n3;

cout<<"\n";

if((n1>=n2)&&(n1>=n3))

cout<<"El numero mayor es..."<<n1<<endl;

else

    if((n3>=n2)&&(n3>=n1))

cout<<"El numero mayor es..."<<n3<<endl;

else

if((n2>=n1)&&(n2>=n3))

cout<<"El numero mayor es..."<<n2<<endl;



if((n1<=n2)&&(n1<=n3))

cout<<"El numero menor es... "<<n1<<endl;

else

    if((n3<=n2)&&(n3<=n1))

cout<<"El numero menor es..."<<n3<<endl;

else

if((n2<=n1)&&(n2<=n3))

cout<<"El numero menor es..."<<n2<<endl;

else

    return 0;
}
