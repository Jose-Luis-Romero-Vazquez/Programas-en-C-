#include <iostream>
#include <cstdlib>
#include <ctime>
//José Luis Romero Vázquez
//311869
//31/02/20
using namespace std;
int main()
{
    int adivina = 0;
    int a2 = 0;
    int contador = 0;
    srand(time(NULL));

    adivina = 1+rand()%20;

    cout << "Este programa genera un valor entre 1 y 20, tienes 5 oportunidades " << endl;
    cout<<adivina;


    do {
        contador += 1;
        cout << "Escribe un numero entre 1 y 20 " << endl;
        cin >> a2;

        if (a2 == adivina) {
            cout << "Ganaste!, el numero correcto es... "<< adivina<<endl;break;

        } else {
            cout << "Lo siento, el numero no es ese " << endl << endl;
        }
    }
    while (contador < 5);

    if ((contador == 5)&&(a2!=adivina))
        {
        cout << "Perdiste, mas suerte para la proxima, el numero era: " << adivina;
    }

    return 0;
}
