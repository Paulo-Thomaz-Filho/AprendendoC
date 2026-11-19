#include <stdio.h>

// Função para exibir o estoque
void exibirEstoque(int estoque[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("%d ", estoque[i]);
    }
    printf("\n");
}

// Função que aplica o Selection Sort
void selectionSort(int estoque[], int tamanho) {
    int i, j, indiceMenor, auxiliar;
    
    for (i = 0; i < tamanho - 1; i++) {
        indiceMenor = i;
        
        for (j = i + 1; j < tamanho; j++) {
            if (estoque[j] < estoque[indiceMenor]) {
                indiceMenor = j;
            }
        }
        
        // Realiza a troca com a primeira posição não ordenada
        auxiliar = estoque[i];
        estoque[i] = estoque[indiceMenor];
        estoque[indiceMenor] = auxiliar;
    }
}

int main() {
    int estoque[6] = {18, 5, 27, 12, 9, 21};
    
    printf("Antes: ");
    exibirEstoque(estoque, 6);
    
    selectionSort(estoque, 6);
    
    printf("Depois: ");
    exibirEstoque(estoque, 6);
    
    return 0;
}
