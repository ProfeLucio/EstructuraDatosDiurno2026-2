#include <stdio.h>

int main(){
    unsigned int x = 4294967295;
    int y = 10;
    double vector[3] = {1, 2, 3};
    vector[5] = 5;
    int *p;
    printf("La direccion de memoria de x es: %p\n", &x);
    printf("La direccion de memoria de y es: %p\n", &y);
    printf("La direccion de memoria del vector es: %p\n", &vector[0]); 
    printf("La direccion de memoria del vector es: %p\n", &vector[1]);
    printf("La direccion de memoria del vector es: %p\n", &vector[2]);

    printf("El contenido de x es %u\n", x);
    int z = x;
    p = &x;
    printf("El contenido de x es %d\n", *p);

    *p = 15;
    printf("El contenido de x es %d\n", x);
    printf("El contenido de y es %d\n", y);
    printf("El contenido de z es %d\n", z);  

    return 0;
}