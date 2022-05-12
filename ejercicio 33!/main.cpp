#include <iostream>

using namespace std;

int main()
{
     int n;
    cout << "dibujo de figura" << endl;
    cout<<"ingrese el numero"<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        if ((i==j)||(i==(n-j-1)))
            cout<<'*';
        else
            cout<<' ';

        cout << "\n";
    }


    for (int i = n - 1; i > 0; i--)
    {
       for (int j = i; j > 0; j--)
            cout << i;
        cout << "\n";
    }
}

