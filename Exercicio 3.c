#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int adultos = 0, idosos = 0, jovens = 0;

    printf("Digite a quantidade de pessoas a ser entrevistadas: ");
    scanf("%d", &n);

    int idades[n];

    printf("Digite as idades das pessoas (entre 18 e 80 anos):\n");
    for (i = 0; i < n; i++) {
        int idade;
        do {
            scanf("%d", &idade);
            if (idade < 18 || idade > 80) {
                printf("Idade inválida. Por favor, digite uma idade entre 18 e 80 anos: ");
            }
        } while (idade < 18 || idade > 80);
        idades[i] = idade;
    }

    for (i = 0; i < n; i++) {
        if (idades[i] >= 18 && idades[i] < 35) {
            jovens++;
        } else if (idades[i] >= 35 && idades[i] < 65) {
            adultos++;
        } else if (idades[i] >= 65) {
            idosos++;
        }
    }

    printf("Quantidade de jovens (>= 18 e < 35): %d\n", jovens);
    printf("Quantidade de adultos (>= 35 e < 65): %d\n", adultos);
    printf("Quantidade de idosos (>= 65): %d\n", idosos);

    return 0;
}
