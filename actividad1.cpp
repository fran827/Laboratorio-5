#include <stdio.h>

int numero1;
int numero2;
int suma;

int main(){
    printf("Ingrese el primer número:\n");
    scanf("%d", &numero1);
    printf("Ingrese el segundo número:\n");
    scanf("%d", &numero2);
    suma = numero1 + numero2;
    printf("El resultado de la suma es %d\n", suma);
    return 0;
}
