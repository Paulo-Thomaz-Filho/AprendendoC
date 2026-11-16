#include <stdio.h>

// Função para exibir os tempos
void exibirTempos(int tempos[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("%d ", tempos[i]);
    }
    printf("\n");
}

// Função que aplica o Insertion Sort
void insertionSort(int tempos[], int tamanho) {
    int i, j, valorAtual;
    for (i = 1; i < tamanho; i++) {
        valorAtual = tempos[i];
        j = i - 1;
        
        // Desloca os elementos maiores para a direita
        while (j >= 0 && tempos[j] > valorAtual) {
            tempos[j + 1] = tempos[j];
            j--;
        }
        
        // Insere o valor atual na posição correta
        tempos[j + 1] = valorAtual;
    }
}

int main() {
    int tempos[5] = {58, 42, 51, 39, 47};
    
    printf("Antes: ");
    exibirTempos(tempos, 5);
    
    insertionSort(tempos, 5);
    
    printf("Depois: ");
    exibirTempos(tempos, 5);
    
    return 0;
}
