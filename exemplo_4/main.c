#include <stdio.h>

int main() {
    // int i=1;

    // do {
    //     printf("%d", i);
    //     i++;
    // } while (i<=10);

    // while (i<=10)
    // {
    //     if(i<10) {
    //         printf("%d ", i);
           
    //     } else {
    //         printf("%d ", i);
    //     }; 

    //     i++;
    // }

    int i=1, n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    while (i<=10)
    {
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    }
    

    return 0;
}