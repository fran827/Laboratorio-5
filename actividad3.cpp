#include <stdio.h>

float numero1;
float numero2;
float multiplicacion;

int main(){
    printf("Ingrese un número decimal:\n");
    scanf("%f", &numero1);
    printf("Ingrese otro número decimal:\n");
    scanf("%f", &numero2);
    multiplicacion = numero1 * numero2;
    printf("El resultado de la multiplicación es %f:\n", multiplicacion);
    return 0;
}