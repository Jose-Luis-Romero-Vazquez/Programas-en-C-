#include <cstring>
#include <iostream>
#include <cctype>
//José Luis Romero Vázquez
//311869

using namespace std;
void palindromo (char pal[]);
main()
{
    char pal[40];


    cout<<"Escribe una frase "<<endl;
    cin.getline(pal,200);
    cout<<endl;
   palindromo(pal);

    return 0;
}

void palindromo (char pal[])
{
    char pal2[40];
    int n,x,a=0,p=0,e=0;
    char b=' ';

    for(int i=0; i<=strlen(pal);i++)
    {
        if(pal[i]==b)
            i++;
        pal2[e]=pal[i];
        e++;

    }
    for(int x=strlen(pal)-1;x>=0;x--)
        cout<<pal[x];
    x=0;

    for(int x=strlen(pal2)-1;x>=0;x--)
    {
        if(pal2[x]==pal2[a])
            p++;
            a++;
    }
    if(p==strlen(pal2))
        cout<<" La palabra es palindormo"<<endl;
    else
        cout<<" no es palindromo "<<endl;


}



