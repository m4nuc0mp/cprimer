// first.c - Primer programa en C
#include <stdio.h>
int main(void)                  /* programa principal */
{
    int num;                    /* definir una variable llamada num */
    num = 1;                    /* asignar valor a num */

    printf("Soy una simple ");  /* usar la función printf() */
    printf("computadora.\n");
    printf("Mi número favorito es el %d, porque es el primero.\n", num);
    getchar();
    return 0;
}