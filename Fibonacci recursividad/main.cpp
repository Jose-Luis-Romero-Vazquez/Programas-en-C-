#include <iostream>

using namespace std;
int fibonacci(int n);
int main()
{
    cout << "Los 15 primeros numeros en la serie de Fibonacci son" << endl;
    for(int i=0; i<15; i++)
        cout<<fibonacci(i)<<'\t';
    cout<<endl;
    return 0;
}
int fibonacci(int n)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    else return (fibonacci(n-1)+fibonacci(n-2));
}
