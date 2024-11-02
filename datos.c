#include <stdio.h>
#include "formula.h"

void mostrarOpciones() {
    printf("\nSeleccione una figura geométrica para calcular su superficie y volumen:\n");
    printf("1. Cubo\n");
    printf("2. Cuboide\n");
    printf("3. Cilindro recto\n");
    printf("4. Esfera\n");
    printf("5. Cono circular recto\n");
}

int solicitarFigura() {
    int figura;
    scanf("%d", &figura);
    return figura;
}

void mostrarResultadosFiguras(float superficie, float volumen) {
    printf("\nResultados:\n");
    printf("Superficie: %.2f\n", superficie);
    printf("Volumen: %.2f\n", volumen);
    printf("\n");
}
