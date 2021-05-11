#include <stdio.h>

float tarea1;
float tarea2;
float tarea3;
float actitudinal;
float prueba1;
float prueba2;
float nota minima;

int main(){
    printf("Bienvenido");
    printf("Porfavor ingresa la nota de tu tarea 1:\n");
    scanf("%f", &tarea1);
    printf("Ingresa la nota de tu tarea 2:\n");
    scanf("%f", &tarea2);
    printf("Ingresa la nota de tu tarea 3:\n");
    scanf("%f", &tarea3);
    printf("Ingresa la nota de la actitudinal:\n");
    scanf("%f", &actitudinal);
    printf("Ingresa la nota de la prueba 1:\n");
    scanf("%f", &prueba1);
    nota minima = 4.0 - tarea1 * 0.1 + tarea2 * 0.1 + tarea3 * 0.1 + actitudinal * 0.1 + prueba1 * 0.25 /0.35;
    printf("La nota minima que necesitas para aprobar es %f:\n", nota minima);
    return 0
}   