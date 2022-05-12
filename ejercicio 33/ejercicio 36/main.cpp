#include <iostream>

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
        if ((i==j)||(i==(n-j-1)))
            cout<<'1';
        else
            cout<<' ';

    }

        cout<<endl;
    }
    return 0;
}
