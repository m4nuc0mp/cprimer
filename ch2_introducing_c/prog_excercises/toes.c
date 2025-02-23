// toes.c -- Write a program that creates an integer variable called toes.
// Have the program set toes to 10. Also have the program calculate what twice
// toes is and what toes squared is. The program should print all three values,
// identifying them.
#include <stdio.h>
int main(void)
{
    int toes = 10;

    printf("Toes = %d\n", toes);
    printf("Twice toes = %d\n", toes*2);
    printf("Toes squared = %d\n", toes*toes);

    return 0;
}
