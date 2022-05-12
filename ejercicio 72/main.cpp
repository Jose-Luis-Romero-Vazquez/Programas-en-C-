
#include <cstring>
#include <iostream>
#include <cctype>
//José Luis Romero Vázquez
//311869

using namespace std;
void cuentaVocales( char frase[]);
int main()
{
    char frase[200];
    cout<<"Proporciona una frase"<<endl;

    cuentaVocales(frase);

    return 0;
}

void cuentaVocales( char frase[] )
{
    int a=0, e=0, is=0, o=0, u=0, h=0;

     cin.getline(frase,200);
     for(int i=1;i<strlen(frase); i++)
     {
    frase[i]=toupper(frase[i]);

        if(frase[i]=='A')
            a++;
        if(frase[i]=='E')
            e++;
            if(frase[i]=='I')
            is++;
            if(frase[i]=='O')
            o++;
            if(frase[i]=='U')
            u++;

                h=a+e+is+o+u;
}
    cout<<"Numero de letras A="<<a<<endl;
     cout<<"Numero de letras E="<<e<<endl;
      cout<<"Numero de letras I="<<is<<endl;
       cout<<"Numero de letras O="<<o<<endl;
        cout<<"Numero de letras U="<<u<<endl;
         cout<<"El numero de vocales es "<<h<<endl;

}
