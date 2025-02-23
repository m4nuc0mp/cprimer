// two_func.c -- Un programa que usa una función además de main()
#include <stdio.h>
void mayordomo(void);   // Prototipo de función en ANSI/ISO C
int main(void)
{
    printf("Llamaré a la función mayordomo.\n");
    mayordomo();
    printf("Sí, traeme algo de té y un pendrive.\n");

    return 0;
}

void mayordomo()
{
    printf("Me llamó señor?\n");
}