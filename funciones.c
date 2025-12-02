#include "funciones.h"
#include <stdio.h>
#include <string.h>
void validardatos(int x, void *y, char tipo)
{
    int c, positivo;
    while ((c = getchar()) != '\n' && c != EOF);

    if (tipo=='i')
    {
        if ((*(int*)y)<0)
        {
             x=0;
        }
    }
    else if (tipo=='f')
    {
        if ((*(float*)y)<0)
        {
            x=0;
        }
    }
    while (x != 1)
    {
        printf("Ingrese un valor valido\n");
        {
        }
        if (tipo == 'i')
        {
            x = scanf("%d", (int*)y);
            while ((c = getchar()) != '\n' && c != EOF);
            if ((x==1)&&(*(int*)y<0))
            {
                printf("El numero no puede ser negativo.\n");
                x = 0;
            }
        }
        else if (tipo == 'f')
        {
            x = scanf("%f", (float*)y);
            while ((c = getchar()) != '\n' && c != EOF);
             if ((x==1)&&(*(float*)y<0))
            {
                printf("El numero no puede ser negativo.\n");
                x = 0;
            }
        }
    }
}
void Registro(struct Libro *a, int *cont)
{
    int c, validar;
   

    printf("Ingrese el ID del libro: ");
    validar=scanf("%d", &a->id);
    validardatos(validar, &a->id, 'i');

    printf("Ingrese el titulo del libro: ");
    fgets(a->titulo, sizeof(a->titulo), stdin);
    BorrarSaltolinea(a->titulo);

    printf("Ingrese el año de publicación del libro: ");
    scanf("%d", &a->publicacion_año);
    while ((c = getchar()) != '\n' && c != EOF);
    validardatos(validar, &a->publicacion_año, 'i');

    printf("Ingrese el autor del libro: ");
    fgets(a->autor, sizeof(a->autor), stdin);
    BorrarSaltolinea(a->autor);

    printf("Ingrese el estado del libro: ");
    fgets(a->estado, sizeof(a->estado), stdin);
    BorrarSaltolinea(a->estado);

    (*cont)++;
}
void BorrarSaltolinea(char *a)
{
    int len = strlen(a);
    if (len > 0 && a[len - 1] == '\n'){ // se asegura de que la cadena no este vacia y de que el ultimo caracter si sea un salto de linea
        a[len - 1] = '\0'; // De haber un salto de linea, lo cambia por el valor nulo
    }
}