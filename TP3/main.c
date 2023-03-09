/**
 * Trabajo entregado por:
 *     Nombre: Tony Santiago Montes Buitrago
 *     Código: 202014562
 *     Correo: t.montes@uniandes.edu.co
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int maxchar = 100;

void empaquetar(char *cadena, int *vector)
{
    int numero = 0;
    for (int i = 0; i < maxchar; i++)
    {
        if (i % 4 == 0 && i != 0)
        {
            *(vector + i / 4 - 1) = numero;
            numero = 0;
        }
        numero += (*(cadena + i)) * (pow(16, 2 * (4 - 1 - i % 4)));
    }
}

int main()
{
    /* 1. Inicialización */
    char *cadena;
    int *vector;

    /* 2. Inicialización arreglos dinámicos */
    cadena = (char *)calloc(maxchar, sizeof(char));
    vector = (int *)calloc(maxchar / 4, sizeof(int));

    /* 3. Leer la palabra */
    printf("Digite una palabra:\n>");
    scanf("%s", cadena);

    /* 4. Empaquetar la cadena en el vector int */
    empaquetar(cadena, vector);

    /* 5. Imprimir el resultado */
    for (int i = 0; i < maxchar / 4; i++)
    {
        int numero;
        numero = *(vector + i);
        if (numero != 0)
        {
            printf("0x%x, ", numero);
        }
    }
    /* 6. Liberar los espacios de la cadena */
    free(cadena);
    free(vector);

    return 0;
}
