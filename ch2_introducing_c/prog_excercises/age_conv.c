// age_conv.c -- Write a program that converts your age in years to days.
#include <stdio.h>
int main(void)
{
    int age = 40;
    int days = 0;   // age in days

    days = 365*40;
    printf("Your age is %d. That equals %d days.\n", age, days);

    return 0;
}