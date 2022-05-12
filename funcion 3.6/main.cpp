#include <iostream>

using namespace std;
int divs(int a,int b);
int main()
{
    int n,d,s=0;
    cout<<"Proporciona el numero"<<endl;
    cin>>n;
    cout<<"Los divisores son = "<<endl;
    for(int i=1; i<=n; i++)
    {
        d=divs(n,i);
        if(d==0)
        {

            cout<<i<<endl;
            s++;
        }
    }
 cout<<"los divisores son "<<s;
}
int divs(int a, int b)
{
    int div;
    div=a%b;
    return div;
}
