#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[10];
    int i, num_cont = 0;

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 10; i++) {
        if (numeros[i] % 5 == 0 && numeros[i] % 3 == 0) {
            num_cont++;
        }
    }

    printf("Quantidade de números divisíveis por 5 e por 3 ao mesmo tempo: %d\n", num_cont);

    return 0;
}
