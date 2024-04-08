#include <stdio.h>

int num1;
int num2;
int suma;

int main(int argc, char const *argv[])
{
    printf("Bienvemido");
    printf("valor1");
    scanf("%i",&num1);
    printf("valor2");
    scanf("%i",&num2);

    suma = num1+num2;

    printf("resultado: %i",suma);
    return 0;
}
