#include <iostream>
#include <cmath>
using namespace std;
bool primo (int number);
int main()
{
    int numero=2;
    cout << "Los numeros primos son :" << endl;
    do {
        if(primo(numero))
        {
            cout<<numero<<",";
        }
        numero++;
    }while(numero<50);

    return 0;
}
bool primo (int number)
{
    for(int i=2; i<sqrt(number); i++)
        if(number % i ==0)
        return false;
    return true;
}
