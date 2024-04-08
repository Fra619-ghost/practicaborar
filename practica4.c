#include <stdio.h>

char name[30];
char name2[30];
char name3[30];
char name4[30];
char nombrecompleto[30];

int num1;
int num2;
int suma;


int main(int argc, char const *argv[])
{
    printf("jsdhshdsh");
    printf("valor1");
    scanf("%s",name);
    printf("valor2");
    scanf("%s",name2);
    printf("valor3");
    scanf("%s",name3);
    printf("valor4");
    scanf("%s",name4);
     printf("valor1 suma");
    scanf("%i",&num1);
    printf("valor2 suma");
    scanf("%i",&num2);

    suma = num1+num2;



    printf("Nombre: %s,%s,%s,%s",name,name2,name3,name4);
    printf("Resultado: %i",suma);
    return 0;
}
