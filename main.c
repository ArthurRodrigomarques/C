#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    char nome[30];

    scant("%s", nome);
    // qets();

    int n = 0, x = 1;
    
    printf("Olá mundo!\n");

    return 0;
}
