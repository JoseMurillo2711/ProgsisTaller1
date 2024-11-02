#include "formula.h"
#include <math.h>

#define PI 3.14159265358979323846


float superficieCubo(float valor){
   return 6*pow(valor, 2);
}

float superficieEsfera(float valor){
   return 4*PI*pow(valor,2);
}

float superficieCuboide(float a, float b, float c){
   return 2*((a*b)+(b*c)+(a*c));
}

float superficieCilindro(float valor1, float valor2){
   return 2*PI*valor1*(valor2 + valor1);
}

float superficieCono(float valor1, float valor2){
   return PI*valor1*(valor1 + sqrt(pow(valor1,2)+pow(valor2,2)));
}

// Volumenes
float volumenCubo(float valor) {
    return pow(valor, 3);
}


float volumenEsfera(float valor) {
    return (4.0/3.0) * PI * pow(valor, 3);
}


float volumenCuboide(float a, float b, float c) {
    return a * b * c;
}


float volumenCilindro(float valor1, float valor2) {
    return PI * pow(valor1, 2) * valor2;
}

float volumenCono(float valor1, float valor2) {
    return (1.0/3.0) * PI * pow(valor1, 2) * valor2;
}
