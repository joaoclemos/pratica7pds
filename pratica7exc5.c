#include <stdio.h>

int main(void) {
    int n;

    // Lê a quantidade de elementos
    scanf("%d", &n);

    // Declara o vetor com o tamanho lido
    int v[n];

    // Lê cada elemento do vetor
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    // Algoritmo de ordenação (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Se o elemento atual for menor que o próximo, troca eles de lugar
            if (v[j] < v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    // Imprime o vetor ordenado
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}