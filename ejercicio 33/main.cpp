#include <iostream>
//Jose Luis Romero Vázquez
//311869
//25/02/20
using namespace std;

int main()
{
    int n1,codigo, p1=0,p2=0,p3=0,p4=0,p5=0,total=0,mayor,menor;
    cout << "Conteo de votos" << endl;
    cout<<"cuantos votos existen"<<endl,
    cin>>n1;

    for(int i=1; i<=n1; i++)
    {
        cout<<"Que planilla eliges"<<endl;
        cout<<"Las planillas son las siguientes:";
        cout<<" 1,2,3,4\n ";
        cin>>codigo;

        switch(codigo)
        {

            case 1:  p1++;
            break;

             case 2: p2++;
            break;

             case 3: p3++;
            break;

             case 4: p4++;
                break;

    default: p5++;
        }


    }
cout<<"la planilla 1 tuvo...: "<<p1<<"votos"<<endl;
cout<<"la planilla 2 tuvo...: "<<p2<<"votos"<<endl;
cout<<"la planilla 3 tuvo...: "<<p3<<"votos"<<endl;
cout<<"la planilla 4 tuvo...: "<<p4<<"votos"<<endl;
cout<<"los votos nulos son...: "<<p5<<"votos"<<endl;

p1=mayor;
menor=mayor;
for(int i=2; i<5; i++)
{
    if(codigo<mayor)
    {
    codigo=mayor;
    }
else{
    if(codigo>menor)
    codigo=menor;
    }
}
cout<<"la planilla ganadora es... "<<mayor<<endl;

    return 0;
}
