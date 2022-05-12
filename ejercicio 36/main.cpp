#include <iostream>
//Jose Luis Romero Vázquez
//311869
//28/02/20
using namespace std;

int main()
{

    int n;
    cout << "dibujo de figura" << endl;
    cout<<"ingrese el numero"<<endl;
    cin>>n;

    for(int i=0; i<n; i++)
    {

    for(int j=0; j<n; j++)

    {
        if ((i==j)||(i+1==(n-j)))
            cout<<'*';
        else
            cout<<' ';

    }

        cout<<endl;
    }
    return 0;
}
