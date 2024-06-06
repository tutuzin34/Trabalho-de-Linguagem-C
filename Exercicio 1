#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, num_par = 0, num_impar = 0;

    printf("Digite o número de elementos do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < n; i++) {
        if (vetor[i] % 2 == 0) {
            num_par++;
        } else {
            num_impar++;
        }
    }
    
    printf("Quantidade de elementos pares: %d\n", num_par);
    printf("Quantidade de elementos ímpares: %d\n", num_impar);

    return 0;
}
