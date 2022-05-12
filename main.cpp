#include <iostream>
//Jose Luis Romero Vzquez
//311869
//04/03/20

using namespace std;

int main()
{
    cout << " Maximo, minimo y promedio " << endl;
    int opc,n,numero,maximo=0,minimo=0,mayor,prom=0,menor;
    do{
        cout << "1. maximo"<< endl;
        cout <<"2. minimo"<< endl;
        cout << "3. promedio"<< endl;
        cout << "4. salir"<< endl;
        cout << "opcion"<< endl;
        cin >> opc;
        switch (opc){
        case 1:
    cout<< "Escriba cuantos numeros desea ingresar" << endl;
    cin >> n;
     for(int i=1;i<=n; i++)
     {
    cout<<" ingresa tu numero "<<i<<" ";
        cin>>numero;

         if(numero>maximo)

            maximo=numero;
    else if(numero<minimo)
        minimo=numero;
         }
      cout << "El numero mayor es..."<<maximo<< endl;

       break;
       case 2:

    cout<< "Cuantos numeros desea ingresa " << endl;
    cin>>n;
    cout<<"ingresa el numero 1"<<endl;
    cin >> mayor;
    menor=mayor;
for (int i=2; i<=n; i++)
{
    cout<<"Ingresa el numero"<<i<<" ";
    cin>>numero;
    if(numero>mayor)
        mayor=numero;
        else
            if(numero<menor)
            menor=numero;
}
    cout << " El numero menor es..." <<menor<<  endl;
       break;
       case 3:

       cout << "Proporciona cuantos numeros deseas ingresar"<< endl;
       cin>> n;
       for(int i=1; i<=n; i++ )
       {
           cout << "Ingresa tu numero"<< i<<endl;
           cin>>numero;
           prom+=numero;
       }
       cout<<"El promedio es... "<<prom/n<<endl;

       break;
       }
    }
    while (opc!=4);
    return 0;
}
