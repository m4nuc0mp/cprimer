// fathm_ft.c -- Convierte fathoms (braza inglesa) a feet
#include <stdio.h>
int main(void)
{
    int feet, fathoms;

    fathoms = 2;
    feet = 6*fathoms;
    printf("Hay %d pies en %d brazas inglesas.\n", feet, fathoms);

    return 0;
}