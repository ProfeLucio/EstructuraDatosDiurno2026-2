#include <stdio.h>

int vector[5] = {6, 2, 4, 1, 5};
void selectionSort();
int main(){  
    printf("Vector Original \n");
    for (int i = 0; i < 5; i++) {
        printf("%d - ", vector[i]);
    }
    
    selectionSort();
    printf("\n Ordenado \n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", vector[i]);
    }
    return 0;
}
void selectionSort() {
    for (int i = 0; i < 4; i++) {
        int minIndex = i;
        // Encontrar el mínimo en vector[5]
        for (int j = i + 1; j < 5; j++) {
            if (vector[j] < vector[minIndex]) {
                minIndex = j;
            }
        }
        int temp = vector[i];
        vector[i] = vector[minIndex];
        vector[minIndex] = temp;
        printf("Paso %d : ", i+1);
        for (int x = 0; x < 5; x++) {
            printf("%d ", vector[x]);
        }
        printf("\n ");
    }
}
 