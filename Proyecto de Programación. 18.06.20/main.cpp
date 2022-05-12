#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <stdio.h>
#define MAX 100 /** VALOR MAXIMO DE LA MATRIZ**/
FILE*documento;

/** EQUIPO 4:   PROYECTO 2: OPERACIONES MATRICIALES

 INTEGRANTES:                            CLAVE:
 SÁNCHEZ RODRÍGUEZ ULISES ANTONIO        0308016
 ROMERO VÁZQUEZ JOSE LUIS                0311869
 HERNÁNDEZ GONZÁLEZ ALDO JOVANY          0306922   **/
//suma, resta, multiplicacion,traza,determinante  menu
using namespace std;
void lectura(int A[][MAX], int row, int col);                               /** PROTOTIPOS DE LAS FUNCIONES**/
void aleatorio(int A[][MAX],int B[][MAX],int row1, int col1,int row2,int col2, int mini, int maxi);
void imprime1 (int A[][MAX], int row, int col);
void imprime (int A[][MAX], int row, int col);
void suma(int A[][MAX], int B[][MAX], int R[][MAX], int row, int col);
void resta(int A[][MAX], int B[][MAX], int R[][MAX], int row, int col);
void multiplicacion(int A[][MAX], int B[][MAX], int R[][MAX],int T[][MAX], int row1, int col1);
float traza(int A[][MAX], int row, int col);
int determinante(int A[][MAX],int orden);
int cofactor(int A[][MAX],int orden, int row, int col);
void check_format();
int main()
{
    documento=fopen("/C:/Users/HPBlue/Desktop","w");
   string texto;
    int op,n1,maxi,mini;       /**VARIABLES DE EL MENU**/

    int row1,row2,col1,col2,orden;   /** DECLARACION DE LAS VARIABLES DE LOS TAMAÑOS DE LAS MATRICES**/
    int A[MAX][MAX],B[MAX][MAX],R[MAX][MAX],T[MAX][MAX];    /** DECLARACION DE MATRICES NECESARIAS**/


    system("color 3F");   /** Cambia el color del ejecutable**/


    cout<<"Proyecto 2: Operaciones matriciales"<<endl;
    cout<<"Programa para matrices"<<endl<<endl;

    do /** CICLO 1: Hace todo el programa mientras se cumpla la condicion 1,
        y se repite si no cumple con la misma condicion 1 **/

    {


    cout<< "Ingrese el numero de renglones de la matriz A  :"<<endl;
    cin>>row1;
    cout<< "ingrese el numero de columnas de la matriz A  : "<<endl;
    cin>>col1;
    cout<< "Ingrese el numero de renglones de la matriz B  :"<<endl;
    cin>>row2;
    cout<< "ingrese el numero de columnas de la matriz B  : "<<endl;
    cin>>col2;
    cout<<endl;
    check_format();    /** CHECA QUE EL TEXTO ESTE CORRECTAMENTE**/
    orden=row1;
    if((row1>0)&&(row1<=MAX)&&(col1>0)&&(col1<=MAX) && (row2>0)&&(row2<=MAX)&&(col2>0)&&(col2<=MAX)) /** CONDICION 1: Si se cumple esta condicion
                                                                                                        el programa prosigue preguntando datos**/

    {
        do{   /**CICLO 2  nos sirve para volver a preguntar los datos en caso de que el usuario ingrese datos erroneos**/
    cout<<endl;
    cout<<"Escriba como desea rellenar la matriz"<<endl;
    cout<<"Para rellenar con valores aleatorios, escriba 1"<<endl;
    cout<<"Para rellenar con valores propios, escriba 2"<<endl;
    cin>>n1;
    cout<<endl;
    check_format(); /** Llama a la funcion**/

         if(n1==2)
         {

    cout<<"Porfavor escribe los elementos de la matriz A"<<endl;     /** PASO DE PARAMETROS DE UNA MATRIZ A UNA FUNCION**/
    lectura(A,row1,col1); /**Llama a la funcion**/                    /** FUNCION(MATRIZ,FILAS,COLUMNAS);**/
    cout<<"Porfavor escribe los elementos de la matriz B"<<endl;
    lectura(B,row2,col2);  /**Llama a la funcion**/
         }
           else if  (n1==1)
    {
          do{           /**CICLO 3  nos sirve para volver a preguntar los datos en caso de que el usuario ingrese datos erroneos**/
        cout<<"Porfavor ingrese el valor minimo de la matriz"<<endl;
        cin>>mini;
        cout<<"Porfavor ingrese el valor maximo de la matriz"<<endl;
        cin>>maxi;
        cout<<endl;
       check_format();
     if(maxi>=mini)
       {
           aleatorio(A,B,row1,col1,row2,col2,mini,maxi);
            cout<<"Su matriz A es : "<<endl;
            imprime1(A,row1,col1);
            cout<<endl;
           cout<<"Su matriz B es : "<<endl;

            imprime1(B,row2,col2);
            cout<<endl;
       }
       else
        cout<< "ERROR ingrese valores validos "<<endl;
        }while(maxi<mini);

    }
    else
        cout<< "ERROR Ingrese valores validos "<<endl;
        }while(n1!=1 && n1!=2);


    cout<<endl;
    do{  /**CICLO 3  nos sirve para volver a preguntar al usuario la operacion deseada una y otra ves
            hasta que el mismo desea salir**/


        cout<<"Este programa hace la operacion de su eleccion"<<endl;   /**menu del programa**/
        cout<<"1.-Suma \n";
        cout<<"2.-Resta \n";
        cout<<"3.-Multiplicacion de A X B \n";
        cout<<"4.-Multiplicacion de B X A \n";
        cout<<"5.-Traza \n";
        cout<<"6.-Determinantes \n";
        cout<<"7.-Ingresar nuevos valores \n";
        cout<<"8.-Salida \n";

        cout<<endl;




        cout<<" Opcion "; cin>>op;
        check_format();


        system("cls");
        if(op>8 || op<1)
        {
            cout<<" ERROR  Su opcion no esta dentro del programa"<<endl<<endl;
        }

        switch(op)     /**determina la operacion a ejecutar especificada por el usuario**/
        {
        case 1:
    cout<<"El resultado de la suma es: \n";
    if (row1==row2 && col1==col2) /**si las filas de la primera son iguales a la de la segunda y las columnas de la primera iguales a la segunda
                                         se ejecuta**/
    {
     suma(A,B,R,row1,col1);
     imprime1(R,row1,col1);
     cout<<endl;
    }
    else
        cout<< "ERROR  Para poder ejecutar la suma las matrices deben\n\tcontar con las mismas dimenciones "<<endl;

     break;

        case 2:
            if(row1==row2 && col1==col2) /**si las filas de la primera son iguales a la de la segunda y las columnas de la primera iguales a la segunda
                                         se ejecuta**/
            {
              cout<<"El resultado de la resta es: \n";
       resta(A,B,R,row1,col1);
       imprime1(R,row1,col1);
    cout<<endl;
            }
            else
                cout<< "ERROR  Para poder ejecutar la resta las matrices \n\t deben contar con las mismas dimenciones"<<endl;

    break;

        case 3:

            if(col1==row2) /**si las filas de la primera son iguales a las columnas de la segunda se ejecuta**/

            {

                cout<<"El resultado de la multiplicacion de A X B es: \n";

    multiplicacion(A,B,R,T,row1,col1);

    imprime1(R,row1,col2);

            }

            else

cout<< "ERROR   Para poder ejecutar la multiplicacion de A X B, el numero de columnas \n\t "
<<"de la  matriz A debe ser igual a el numero de\n\t renglones de la matriz B"<<endl<<endl;


    cout<<endl;
    break;
            case 4:

            if(col2==row1)  /** si las columnas de la segunda es igual a las filas de la primera se ejecuta**/

            {

                cout<<"El resultado de la multiplicacion  de B X A es: \n";

    multiplicacion(B,A,R,T,row2,col2);

    imprime1(R,row2,col1);

            }

            else

cout<< "ERROR   Para poder ejecutar la multiplicacion de B X A, el numero de columnas \n\t "
<<"de la matriz B debe ser igual a el numero de\n\t renglones de la matriz A"<<endl<<endl;


    cout<<endl;
            break;





        case 5:
               cout<< " El resultado de la traza es : "<<endl;
            if (row1==col1) /** si la matriz es cuadrada**/

            {
            cout<< " A = "<<traza(A,row1,col1)<<endl;
            }

            else

                cout<< " A = ERROR  Para poder obtener la traza la matriz debe de ser cuadrada "<<endl;
            if(row2==col2)
                    cout<< " B = "<<traza(B,row2,col2)<<endl;
            else

            cout<< " B = ERROR  Para poder obtener la traza la matriz debe de ser cuadrada "<<endl;




            break;

        case 6:
            cout<< " El resultado del determinante es :"<<endl;

            if(row1==col1 ) /** si la matriz es cuadrada**/

            {

           cout<< " A = "<<determinante(A,orden)<<endl;
           }
            else

                cout<< "A = ERROR  Para poder obtener el determinante la matriz debe de ser cuadrada "<<endl;
            if(row2==col2)
            {

                cout<< " B = "<<determinante(B,orden)<<endl;
            }
         else

                cout<< "B = ERROR  Para poder obtener el determinante la matriz debe de ser cuadrada "<<endl;

           break;
        }

        cout<< "MATRIZ A : "<<endl;

        imprime1(A,row1,col1);
        cout<<endl;

        cout<< "MATRIZ B : "<<endl;

        imprime1(B,row2,col2);cout<<endl;
    }while (op!=7 && op!=8);  /** condiciones para que el usuario salga del programa o si desea ingresar nuevos datos**/



    }

    else

        cout <<" ERROR  Ingrese datos entre 0 y "<<MAX<<endl;
        if(op==7)
        {
            system("cls");

    cout<<"Proyecto 2: Operaciones matriciales"<<endl;
    cout<<"Programa para matrices"<<endl<<endl;
        }


    }while(row1<=0 || col1<=0 || row1>MAX || col1>MAX || row2<=0 || col2<=0 || row2>MAX || col2>MAX || op==7);  /**condiciones
    para que se vuelva ejecutar el programa**/


    system("cls");   /**Limpia la pantalla de operaciones ya realizadas para que no se amontone todo en la misma**/
    cout<< "PROGRAMA REALIZADO POR :"<<endl<<endl;
    cout<< "SANCHEZ RODRIGUEZ ULISES ANTONIO "<<endl;
    cout<< "ROMERO VAZQUEZ JOSE LUIS "<<endl;
    cout<< "HERNANDEZ GONZALEZ ALDO JOVANY "<<endl<<endl;
    cout<< "TODOS LOS DERECHOS RESERVADOS ... "<<endl<<endl;
    system("pause");  /**Pausa el ejecutable para que no se cierre totalmente al terminar el programa**/
    return 0;
}

void aleatorio(int A[][MAX],int B[][MAX],int row1, int col1,int row2,int col2, int mini, int maxi)
{
    srand(time(NULL)); /** se inicializa la semilla**/
    for(int i=0;i<row1;i++)
        {
        for(int j=0;j<col1;j++)
        {
            A[i][j]=mini+rand()%(maxi-mini+1); /** Se va rellenando la matriz**/
        }
    }

    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            B[i][j]=mini+rand()%(maxi-mini+1); /** Se va rellenando la matriz **/
        }
    }
}

void lectura(int A[][MAX], int row, int col)
{
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
    {
        cout<<"A["<<i<<"]"<<"["<<j<<"]=";
        cin>>A[i][j];       /**Va guardando los elementos ingresados por el usuario en la matriz**/
        check_format();
    }

}

void imprime (int A[][MAX], int row, int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0;j<col;j++)
            cout<<" RESULTADO["<<i<<"]"
            <<"["<<j<<"]="
            <<A[i][j];
        cout<<endl;
    }
}

void suma(int A[][MAX], int B[][MAX],int R[][MAX], int row, int col)
{
    for (int i=0; i<row;i++)  /**filas**/
        for(int j=0;j<col;j++) /**columnas**/
        R[i][j]=A[i][j]+B[i][j];
}

void resta(int A[][MAX], int B[][MAX], int R[][MAX], int row, int col)
{
    for (int i=0; i<row;i++)  /**filas**/
       for(int j=0;j<col;j++) /**columnas**/
        R[i][j]=A[i][j]-B[i][j];
}

/**A con rowl filas, columnas coll
B con coll filas y MAX columnas
R es la matriz producto de AB
R presenta rowl filas y MAX columnas**/
void multiplicacion(int A[][MAX], int B[][MAX], int R[][MAX],int T[][MAX], int row1, int col1)
{
for(int i=0;i<row1; i++) /**Este primer for lee las filas**/
{

    for(int j=0; j<MAX;j++)   /**Con este se recorre las columnas**/
    {
        R[i][j]=0;  /**Se inicializa a "0" la matriz R en donde se va a guardar la multiplicación de A y B,
         ya que no se pueden sumar valores de la nada, es decir no se puede realizar incrementos en la matriz si no tiene elementos,
          por ello se la inicializa en "0".
        Se aprovechan los ciclos for anterior para hacer esta tarea, ya que recorreran filas y columnas de la matriz R **/

        for(int k=0; k<col1;k++) /**Con este ultimo se va calculadno el producto de los elementos de A y B y se van guardando en la matriz R **/

        {
                                         /**Se va llenando la matriz R en sus filas "i" y columnas "j" para ello se van acumulando los
                                             productos de los elementos de la matriz A y B **/
            R[i][j]=R[i][j]+A[i][k]*B[k][j];  /**La "k" es igual para A y B, pues sus renglones tienen que ser igual a sus columnas
                                                    Esta operacion realiza los siguinte;
                                                 R[i][j]=A[i][0]*B[0][j]+A[i][1]*B[i][j]+A[i][2]*B[2][j]+... **/

        }

        }


}
}

float traza(int A[][MAX], int row, int col)

{

    float suma=0;    /**Inicializamos una variable a cero para ir acumulando la suma**/
    for (int i=0; i<row; i++)
   {
        for(int j=0; j<col; j++)
        {
            if (i==j)    /** es una diagonal**/
        suma=suma+A[i][j];  /** se va acumulando en suma**/
        }
    }

    return suma;    /**Regresamos el valor de suma**/

}

int cofactor(int A[][MAX],int orden, int row, int col)   /**Con el orden calculado lineas arriba en el programa se sabe que es
                                                            cuadrada y se conocen los renglones y columnas de la misma
                                                             Para calcular el determinante se necesita saber cual es el cofactor de un
                                                             determinado elemento, para ello se nesecita
                                                             el renglon y columna de dicho elemento (para saber que fila
                                                            y columna se tiene que tachar)**/
{
   int submatriz[MAX][MAX]; /**se declara una nueva matriz mas pequeña**/
   int n = orden - 1;  /** el orden de esta nueva matriz es el orden de la matriz mas grande restandole 1
                            Se va a recorrer la matriz grande y solamente guardar en la submatriz los elementos
                             que no pertenezcan a la fila y columna tachadas de la funcion determinante**/

   int x = 0;
   int y = 0;    /**Las variables que van a manejar la fila y la columna de la submatriz generada**/

   for (int i = 0; i < orden; i++)
        {
      for (int j = 0; j < orden; j++) /**Con estos dos ciclos for se recorren los elementos de la matriz más grande**/
       {
         if (i != row && j != col)     /**Se descartan los elementos que se encuentran en la fila y columna tachados en la funcion determinante
                                        Si esto sucede se va a guardar dicho elemento en la submatriz
                                        Las variables que van a manejar la fila y la columna de esta matriz son "x" y "y" respectivamente**/

          {
            submatriz[x][y] = A[i][j]; /**una vez que se ha guardado este elemento se procede a seguir con la siguiente columna de la submatriz**/
            y++; /**la variable "y" se va acumulando**/
            if (y >= n) /**Si"y" es mayor o igual que el orden de la submatriz hay que pasar a la
                siguiente fila, con esto "x" aumenta de valor y "y" se reinica a "0"**/
            {
               x++;
               y = 0; /**Con estos pasos se llena totalmente la submatriz!**/
            }
         }
      }
   }
   /**Se generó una submatriz con los elementos que no pertenecen a la fila y columna que la función determinante está tachando**/

   return pow(-1.0, row + col) * determinante(submatriz, n); /**Se retorna el producto de -1 elevado a la suma de la fila y la columna
                                                                   que estamos tachando,
                                                                 multiplicado por el determinante de la submatriz que se ha generado**/
}

int determinante(int A[][MAX], int orden)
{
   int det = 0;   /**En esta variable se va a almacenar el determinante de la matriz**/

   if (orden == 1)
        {
      det = A[0][0];    /** Si el orden de la matriz es 0, el determinante es igual al unico elemento que conforma dicho vector**/
   }
   else
    {
      for (int j = 0; j < orden; j++)
        {
         det = det + A[0][j] * cofactor(A, orden, 0, j); /**El determinante se calcula como la suma del producto de
         todos los elementos de una fila por su respectivo cofactor
         Entonces se elige una fila(la 0 para iniciar), se usa un ciclo
         for para recorrer toda las columnas de esa fila
         Se van a acumular los productos de cada columna de la fila "0"
         por su respectivo cofactor (para ello se hace uso de la funcion anterior)
         Los elementos que se le van a pasar a la funcion cofactor son la matriz A,
         el orden, la fila "0" y cada columna que se va a tachar en la matriz que se está pasando como argumento**/

      }
   }

   return det;/**Se regresa el valor calculado en esta variable**/
}



void imprime1 (int A[][MAX], int row, int col)

{


    for(int i=0; i<row; i++)    /**lee las filas**/
    {
        for(int j=0;j<col;j++)   /**lee las columnas**/
    cout<< " "
            <<A[i][j]<<"\t";      /**muestra el valor en pantalla **/
        cout<<endl;

}

}

void check_format()      /** Checa que el usuario ingrese valores numericos y no caracteres que pueden trabar al programa**/
{
    string texto;
     if (!cin.good()) /** si el usuario ingreso un dato mal, lo vuelve a pedir**/
     {
          cin.clear();
          cin>>texto;
     }
}

