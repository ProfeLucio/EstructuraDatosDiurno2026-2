#include <stdio.h>

int vector[5] = {6, 2, 4, 1, 5};
void insertionSort();
int main(){
    printf("Vector Original \n");
    for (int i = 0; i < 5; i++) {
        printf("%d - ", vector[i]);
    }
    
    insertionSort();
    printf("\n Ordenado \n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", vector[i]);
    }
    return 0;
}
void insertionSort() {
    for (int i = 1; i < 5; i++) {
        int clave = vector[i]; // Elemento a insertar
        int j = i - 1;
        // Desplazar hacia la derecha los elementos 
        while (j >= 0 && vector[j] > clave) {
            vector[j + 1] = vector[j];
            j--;
        }
        // Insertar 'clave' en la posición que dejó libre
        vector[j + 1] = clave;
        printf("Paso %d : ", i);
        for (int x = 0; x < 5; x++) {
            printf("%d ", vector[x]);
        }
        printf("\n");
    }   
}
