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
