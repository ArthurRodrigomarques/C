#include <stdio.h>

int main() {
    int senha =123;
    int n;

    printf("Digite sua senha de acesso! ");

    scanf ("%d", &n);

    if (senha == n) {
        printf("Acesso permitido!");
    }
    //  else if (senha > 0) {
    //     printf("N maior que zero!");
    // } 
    else {  
        printf("Acesso negado!");
    }

    return 0;
}
