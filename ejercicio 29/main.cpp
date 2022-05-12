#include <iostream>
//Jose Luis Romero Vazquez
//311869
//20/02/20
using namespace std;

int main()
{
    int n1;
    cout << "Tabla de multiplicar" << endl;
    cout<<"Que tabla de multiplicar desea conocer"<<endl;
    cin>>n1;

    for(int i=1; i<=10; i++)
    {
        cout<<i<<"x"<<n1<<"="<<i*n1<<endl;
    }

    return 0;
}
