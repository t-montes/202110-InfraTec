#include <stdio.h>

int main()
{
    unsigned int f, l, v;
    printf("Digite la frecuencia y el ancho del bus separados por un espacio:\n");
    scanf("%d%d", &f, &l);
    printf("Frecuencia=%d Hz, Ancho=%d bits\n", f, l);
    v = f * l;
    printf("Velocidad=%d bits/s\n", v);
    return 0;
}
