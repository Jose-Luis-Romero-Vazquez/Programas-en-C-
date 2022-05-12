#include <iostream>

using namespace std;
//José Luis Romero Vázquez
//311869
//28/01/19
int main()
{
      cout << "Horas, minutos y segundos" << endl;
      cout<<"\n";

   int horas, segundos1, minutos, segundos2;
   cout << "Escriba el numero de segundos : ";
   cin>>segundos1;

   horas=segundos1/3600;
   minutos=(segundos1%3600)/(60);
   segundos2=((segundos1%3600)%(60))%60;

   cout <<" Horas... " <<horas<<endl;
   cout<<" Minutos... " <<minutos<<endl;
   cout<<" Segundos... " <<segundos2<<endl;


    return 0;
}
