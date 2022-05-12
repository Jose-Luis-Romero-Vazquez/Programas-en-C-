#include <iostream>
//José Luis Romero Vázquez
//311869
//04/03/20

using namespace std;

int main()
{
    int counter=1,total=0;
    int mayor,menor,numero;
    int number,n1,n2,n;
    cout << "Maximos, minimos y promedio de numeros " << endl;
    cout<<"Escriba la extension de numeros que desea calcular "<<endl;
    cin>>n1;

    do
    {

        cout<<"que calculo desea realizar "<<endl;
        cout<<"opcion 1: maximo de una lista de numeros"<<endl;
        cout<<"opcion 2: minimo de una lista de numeros"<<endl;
        cout<<"opcion 3: promedio de una lista de numeros"<<endl;
        cout<<"opcion\n"<<endl;
        cin>>n2;

        switch(n2)

        {
        case '1':

            cout<<" numero 1 ";
    cin>>mayor;
     for(int i=0; i<n; i++)
        {

             if(mayor<n2)
                mayor=x;

            else
            {

                if(numero<mayor)
                    menor=mayor;
                mayor=numero;
            }

cout<<" El numero mayor es... "<<mayor;
break;

        case '2':
             cout<<" numero 1 ";
    cin>>mayor;
    menor=mayor;
    counter++;
        cout<<" numero "<<counter<<" ";
        cin>>numero;
         if(mayor>n2)
            menor=numero;

            else
            {

                if(numero<mayor)
                    menor=mayor;
                mayor=numero;
            }

cout<<" El numero menor es... "<<menor<<endl;
break;

        case '3':
            cout<<"proporciona el valor de n";
            cin>>n;
            counter++;

            cout<<"numero"<<counter<<" ";
            cin>>number;
            total+=number;
            total/n;
            cout<<"\nEl promedio es"<<total<<endl;
            break;

    }
    }
        while (counter<=n2);
        cout<<endl;




    return 0;
}
