#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
void mayusculas(char frase[]);
int main()
{
    char pregunta[10][50]={" Le pones limon a todo ", " Tu desayuno omcluye algo con salsa "," Haz tomado tequila "," Amas los elotes preparados "," tienes resistencia sobrehumana al picante "," Has visto mas de una telenovela "," Conoces 10 tipos de tacos "," Has llorado con juan gabriel "," Sabes quien es chabelo "," Tienes frijoles en el refrigerador "};
    char respuesta[10];
    char caracteristicas[500]="";
    int porcentaje=0;
    cout << "Vamos a ver que tan mexicano eres, responde las siguientes preguntas con si o no\n";
    for(int i=0;i<10;i++)
    {
        cout<<pregunta[i]<<endl;
        cin>>respuesta;
        mayusculas(respuesta);

        if((strcmp(respuesta,"SI")==0)||(strcmp(respuesta,"YES")== 0))
        {
            porcentaje+=10;
            strcat(caracteristicas,pregunta[i]);
        }
    }
        cout<<"Eres "<<porcentaje<<"% mexicano \n";
        cout<<" Porque "<<caracteristicas<<endl;


    return 0;
}
void mayusculas(char frase[])
{
for(int i=0;i<strlen(frase);i++)
{
    frase[i]=toupper(frase[i]);
}
}
