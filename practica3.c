#include <stdio.h>

float num1 = 0;
float num2 = 0;
float resta;

 int main()
{
    printf("Bienvenido");
    printf("valor1");
    scanf("%f",num1);
    printf("valor2");
    scanf("%f",num2);

    resta = num1-num2;

    printf("Resultado: %f",resta);
    return 0;
}
