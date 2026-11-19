#include <stdio.h>

void exibirNotas(float notas[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%.1f ", notas[i]);
    }
    printf("\n");
}

void ordenarNotas(float notas[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (notas[j] < notas[j + 1]) {
                float temp = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = temp;
            }
        }
    }
}

int main() {
    float notas[] = {6.5, 9.0, 7.5, 5.0, 8.0};
    int tamanho = 5;

    printf("Entrada: ");
    exibirNotas(notas, tamanho);

    ordenarNotas(notas, tamanho);

    printf("Saida: ");
    exibirNotas(notas, tamanho);

    return 0;
}
