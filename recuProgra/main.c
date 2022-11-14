#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
int id;
char nombre[20];
int infectados;
int recuperados;
int muertos;
}ePais;

void actualizarRecuperados(ePais* pais, int tam);
int invertirCadena(char cadena[]);
int ordenarCaracteres (char cadena[]);

int main()
{
    char cadena[20];
    strcpy(cadena, "hola");
    printf("%s", cadena);
    printf("\n");

    invertirCadena(cadena);
    //ordenarCaracteres(cadena);
    //printf("%s", cadena);

    return 0;
}


void actualizarRecuperados(ePais* pais, int tam)
{
    int recuDelDia = 0;

    for(int i = 0; i < tam; i++)
    {
        if(pais[i].recuperados > 0)
        {
            recuDelDia++;
        }
    }
    printf("los recuperados son: %d", recuDelDia);
}


int invertirCadena(char cadena[])
{
    int ret = 0;
    int longitud =  strlen(cadena);
    char nuevaCadena[20];
    if(cadena != NULL)
    {
        for(int i = 0; i < longitud; i++)
        {
            for(int j = i+1; j < longitud; j++)
            {
               nuevaCadena[i] = cadena[longitud - j];
            }
        }
        ret = 1;
    }
    printf("%s", nuevaCadena);
    return ret;
}


int ordenarCaracteres (char cadena[])
{
    int ret = 0;
    int aux[20];
    int longitud =  strlen(cadena);

    if(cadena != NULL)
    {
        for(int i = 0; i < longitud - 1; i++)
        {
            for(int j = i+1; j < longitud; j++)
            {
                if(cadena[i] > cadena[j])
                {
                    aux[i] = cadena[i];
                    cadena[i] = cadena[j];
                    cadena[j] = aux[i];
                }
            }
        }
        ret = 1;
    }
    return ret;
}


