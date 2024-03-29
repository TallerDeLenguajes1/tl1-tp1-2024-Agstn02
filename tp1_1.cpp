#include <stdio.h>
 
int main() 
{
    int num = 1000;
    int *puntero = &num;

    //1-
    printf("Contenido del puntero: %d\n", *puntero);
    //2-
    printf("Direccion almacenada por el puntero: %p \n", puntero);
    //3-
    printf("Direccion de memoria de la variable num: %p\n", &num);
    //4-
    printf("Direccion de memoria del puntero: %p\n", &puntero);
    //5-
    printf("Tamaño de memoria utilizado por la variable puntero: %ld\n", sizeof(puntero));
    printf("Tamaño de memoria utilizado por la variable 'num': %ld\n", sizeof(num));


    return 0; 
}