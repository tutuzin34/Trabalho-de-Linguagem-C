#include <stdio.h>
#include <stdlib.h>


void calcularTabuada(int num) {
    printf("Tabuada de %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main() {
    int num;

    printf("Digite um número para calcular a tabuada: ");
    scanf("%d", &num);

    calcularTabuada(num);

    return 0;
}
