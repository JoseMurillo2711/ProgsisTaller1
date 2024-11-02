#include <stdio.h>
#include "formula.h"

int main() {
    int figura;
    int opcion = 1;
    float superficie, volumen;

    while (opcion) {
        mostrarOpciones();
        figura = solicitarFigura();

        switch (figura) {
            case 1: {
                float lado;
                printf("Ingrese el lado del cubo: ");
                scanf("%f", &lado);
                superficie = superficieCubo(lado);
                volumen = volumenCubo(lado);
                mostrarResultadosFiguras(superficie, volumen);
                break;
            }

            case 2: {
                float largo, ancho, altura;
                printf("Ingrese el largo del cuboide: ");
                scanf("%f", &largo);
                printf("Ingrese el ancho del cuboide: ");
                scanf("%f", &ancho);
                printf("Ingrese la altura del cuboide: ");
                scanf("%f", &altura);
                superficie = superficieCuboide(largo, ancho, altura);
                volumen = volumenCuboide(largo, ancho, altura);
                mostrarResultadosFiguras(superficie, volumen);
                break;
            }
            case 3: {
                float radio, altura;
                printf("Ingrese el radio del cilindro: ");
                scanf("%f", &radio);
                printf("Ingrese la altura del cilindro: ");
                scanf("%f", &altura);
                superficie = superficieCilindro(radio, altura);
                volumen = volumenCilindro(radio, altura);
                mostrarResultadosFiguras(superficie, volumen);
                break;
            }

            case 4: {
                float radio;
                printf("Ingrese el radio de la esfera: ");
                scanf("%f", &radio);
                superficie = superficieEsfera(radio);
                volumen = volumenEsfera(radio);
                mostrarResultadosFiguras(superficie, volumen);
                break;
            }

            case 5: {
                float radio, altura;
                printf("Ingrese el radio del cono: ");
                scanf("%f", &radio);
                printf("Ingrese la altura del cono: ");
                scanf("%f", &altura);
                superficie = superficieCono(radio, altura);
                volumen = volumenCono(radio, altura);
                mostrarResultadosFiguras(superficie, volumen);
                break;
            }
            default:
                printf("Opción no válida\n");
                continue;
        }

        printf("¿Desea analizar otra figura? (1 para sí, 0 para no): ");
        scanf("%d", &opcion);
    }

    printf("Programa finalizado.\n");
    return 0;
}
