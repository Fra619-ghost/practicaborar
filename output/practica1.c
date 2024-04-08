#include <stdio.h>



//float result3;

int main(int argc, char const *argv[])
{


int num1;
int num2;
int resultyes;

float num3;
float num4;
float resultno;

    printf("\nBienvenido al sistema de la UAM para sumar");
    printf("\nAgregar primer valor a calcular:");
    scanf("%i",&num1);
    printf("\nAgregar segundo valor:");
    scanf("%i",&num2);
    printf("\nCalcular suma de reales");
    printf("\nAgregar primer valor a calcular:");
    scanf("%f",&num3);
    printf("\nAgregar segundo valor a calcular:");
    scanf("%f",&num4);


    printf("\nEl resultado de la primera ecuacion es: %i",resultyes);
    printf("\nEl resultado de la  segunda ecuación es:%f",resultno);


    resultyes = num1 + num2;
    resultno = num3 + num4;
    return 0;
}
