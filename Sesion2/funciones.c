#include "stdio.h"


void saludar();
void contestar();

int main(){
    int quieresContestar = 0;
    saludar();
    printf("Quieres contestar? (1 Si/0 No): ");
    scanf("%d", &quieresContestar);
    if (quieresContestar == 1){
        contestar(quieresContestar);
    } 
    return 0;
}

void saludar(){
    printf("Hola, como estas?\n");
}

void contestar(int respuesta){    
    if(respuesta == 1)
        printf(" Bien Gracias,!\n");
}
