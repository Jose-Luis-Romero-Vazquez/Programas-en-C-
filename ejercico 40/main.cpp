#include <iostream>
#include<cctype>
//José Luis Romero Vázquez
//311869
//31/02/20
using namespace std;

int main()
{
    int a=0;
    char n;
    cout<<"Conteo de letras a"<<endl;
    cout << "inserte la palabra... " << endl;

    do{
        cin>>n;
        n=toupper(n);
        if(n=='A')
            a++;
    }
    while(n!='.');
    cout<<"La cantidad de letras A es... "<<a<<endl;

    return 0;
}
