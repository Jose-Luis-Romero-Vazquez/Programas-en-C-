#include <iostream>
//Jose Luis Romero Vazquez
//311869
using namespace std;
void tiempo(int &h, int &m, int &s);
int main()
{
    int hs,ms,ss,h,m,s;
cout<<"Introduzca horas: "<<endl;
    cin>>hs;
    cout<<"Introduzca minutos: "<<endl;
    cin>>ms;
    cout<<"Introduzca segundos: "<<endl;
    cin>>ss;
        tiempo(hs,ms,ss);

         cout<<"Un segundo despues la hora es "<<hs<<" : "<<ms<<" : "<<ss<<endl;

    return 0;
}
void tiempo(int &h, int &m, int &s)

    {


     if ( h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59 )
    {
        s++;
        if ( s == 60 )
        {
            s = 0;
            m++;
            if ( m == 60 )
            {
                m = 0;
                h++;
                if ( h == 24 )

                    h = 0;
            }
        }

    }
}

