#include <iostream>
//Jose Luis Romero V�zquez
//311869
//28/02/20
using namespace std;

int main()
{
int n;
    cout << "Figuras" << endl;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << '*';
        cout << endl;
    }


    for (int i = n - 1; i > 0; i--)
    {
       for (int j = i; j > 0; j--)
            cout << '*';
        cout << "\n";
    }
}
