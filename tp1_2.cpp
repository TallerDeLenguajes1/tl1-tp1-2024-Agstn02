#include <stdio.h>

int cuadrado(int a);
void cuadradoVacio(int *num);
void invertir(int *a, int *b);
void orden(int *a, int *b);

int main(){
    int num;
    int *punt = &num;
    // Ingreso la variable
    scanf("%d", punt);
    //Muestro el contenido de la variable y su dirección
    printf("Valor de la variable: %d\n", num);
    printf("Direccion de la variable: %p\n", punt);

    // Calculo el cuadrao del num
    int resultado = cuadrado(num);
    printf("Variable num : %d\n", num);
    printf("Variable resultado : %d\n", resultado);
    printf("Variable punt : %p\n", punt);
    
    // Repito con pasaje por referencia
    cuadradoVacio(punt);
    printf("Despues de la función de tipo void\n");
    printf("Variable num : %d\n", num);
    
    //invertir y ordenar:
    int a = 1, b = 1;
    int *puntA = &a;
    int *puntB = &b;

    while (a != 0 && b != 0)
    {
        printf("Ingrese un par de valores:\n");
        scanf("%d", puntA);
        scanf("%d", puntB);

        //Invertir
        invertir(puntA, puntB);
        orden(puntA, puntB);

        printf("Ingrese '0' para finalizar.\nIngrese '1' para continuar.");
        scanf("%d", puntA);
    }
    



    return 0;
}

int cuadrado(int a){
    return a*a;
}
void cuadradoVacio(int *num){
    *num = *num * *num;
}
void invertir(int *a, int *b){
    printf("Funcion invertir\n");
    printf("a : %d\n", *a);
    printf("b : %d\n", *b);
 
    int buffer = *a;
    *a = *b;
    *b = buffer;

    printf("a : %d\n", *a);
    printf("b : %d\n", *b);
}
void orden(int *a, int *b){
    printf("Funcion ordenar\n");
    printf("a : %d\n", *a);
    printf("b : %d\n", *b);
    
    int menor = *a > *b ? *b : *a;
    int mayor = *a < *b ? *b : *a;

    *a = menor;
    *b = mayor;
    printf("a : %d\n", *a);
    printf("b : %d\n", *b);
}