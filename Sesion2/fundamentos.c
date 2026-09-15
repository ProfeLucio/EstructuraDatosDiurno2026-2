#include <stdio.h>
#include <stdbool.h>
int main(){    
    int edad = 50;
    float estatura = 1.66;
    char letra = 'X';
    char nombre[20] = "Gonzalo";
    bool tieneMascotas = true;
    printf("Mi edad es : %d\n", edad);
    printf("Mi estatura es: %.2f\n", estatura);
    printf("Mi letra favorita es la : %c\n", letra);
    printf("Mi nombre es: %s\n", nombre);
    printf("Tengo mascotas: %s\n", tieneMascotas ? "Sí" : "No");    
    // Operador Ternario: (condición) ? valor_si_verdadero : valor_si_falso
    int i; //Operaciones + - * /  = asignacion == Comparacion  < menor que > mayor que 
    for (i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            printf("%d es par\n", i);
        } else {
            printf("%d es impar\n", i);
        }
        // % residuo de la división 
        i % 2 == 0 ? printf("%d es par\n", i) : printf("%d es impar\n", i);
    }
    return 0;
}