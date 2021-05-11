#include <stdio.h>

float radio;
float pi = 3.14;
float perimetro;
float area;

int main(){
    printf("Ingrese el radio de un círculo:\n");
    scanf("%f", &radio);
    perimetro = 2 * radio * pi;
    area = pi * radio * radio;
    printf("El perimetro del círculo es %f:\n", perimetro);
    printf("El área del círculo es %f:\n", area);
    return 0;

}