// primeiro programa

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    char nome[30];

    // scanf("%s", nome);

    gets(nome);

    // int n = 0, x = 1;
    
    printf("Nome digitado: %s", nome);

    return 0;
}
