#include <iostream>
#include<cctype>
//José Luis Romero Vázquez
//311869
//04/03/20
using namespace std;

int main()
{
    int a=0,e=0,i=0,o=0,u=0;
    char n;
    cout<<"Conteo de vocales"<<endl;
    cout << "inserte la palabra... " << endl;

    do{
        cin>>n;
        n=toupper(n);
        if(n=='A') //if (n == a || n ==e || n == i)
            a++;
        if(n=='E')
            e++;
            if(n=='I')
            i++;
            if(n=='O')
            o++;
            if(n=='U')
            u++;
    }
    while(n!='.');
    cout<<"Numero de letras A="<<a<<endl;
     cout<<"Numero de letras E="<<e<<endl;
      cout<<"Numero de letras I="<<i<<endl;
       cout<<"Numero de letras O="<<o<<endl;
        cout<<"Numero de letras U="<<u<<endl;


    return 0;
}
