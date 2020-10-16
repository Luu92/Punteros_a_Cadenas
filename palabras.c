#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void contatenar(char *punteroA, char *punteroB,char cadena3[]){
    int i=0,j=0; 
    do
    {
        cadena3[i] = punteroA[i];
        i++;
    } while (punteroA[i] != '\0');
    cadena3[i++] = ' ';

    do
    {
       cadena3[i]=punteroB[j];
       i++;
       j++;
    } while (punteroB[j-1] != '\0');
}

int main(int argc, char const *argv[])
{
    char cadena1[5] = "Hola";
    char cadena2[6] = "Mundo";
    char cadena3[13];
    char *punteroA;
    char *punteroB;
    punteroA = &cadena1[0];
    punteroB = &cadena2[0];

    contatenar(punteroA,punteroB,cadena3);
    
    printf("La cadena nueva es: \n");
    for (int i = 0; i < 11; i++)
    {
        printf("%c",cadena3[i]);
    }

    char *cadena = (char*)malloc(sizeof(char));//Reservamos memoria.
    printf("\nEscriba un mensaje y enter: ");
    gets(cadena);
    printf("\nLa cadena introducida es: %s\n",cadena);

    free(cadena);
    return 0;
    
}

