// VETOR

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int vet[50]; // = {1, 5, 6, 9, 0, 8, 2};
    int i;

    for(i=0; i<50; i++)
        vet[i] = i;

    for(i = 0; i<50; i++) 
        printf("Vetor[%d] = %d\n", i + 1, vet[i]);
    
    
    // printf("vetor[0] = %d\n", vet[1]);
    // printf("vetor[0] = %d\n", vet[2]);
    // printf("vetor[0] = %d\n", vet[3]);
    // printf("vetor[0] = %d\n", vet[4]);
    // printf("vetor[0] = %d\n", vet[5]);
    // printf("vetor[0] = %d\n", vet[6]);

    return 0;
}