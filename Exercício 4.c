#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[10];
    int ref;
    int cont = 0;

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Digite o valor de referência: ");
    scanf("%d", &ref);

    printf("Números maiores que o valor de referência (%d):\n", ref);
    for (int i = 0; i < 10; i++) {
        if (numeros[i] > ref) {
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        if (numeros[i] == ref) {
            cont++;
        }
    }

    printf("O valor de referência (%d) aparece %d vezes no vetor.\n", ref, cont);

    return 0;
}
