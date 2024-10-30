#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt-br");

    char nome[20];
    // int soma, x, y; //numero do tipo inteiro 0,1,2,3,4
    float nota1, nota2, nota3, media; // 1,25 2,30;


    printf("digite seu nome: ");
    gets(nome);
    // printf("Digite dois valores:");
    printf("Digite tres notas:");
    // scanf("%d", &x);
    // scanf("%d", &y);

    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    //  soma = x + y;

     media = (nota1+nota2 + nota3)/3.0;
    printf("nome: %s", nome);
    printf("\nmedia = %.2f", media);

    return 0;
}