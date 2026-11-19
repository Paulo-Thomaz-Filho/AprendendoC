#include <stdio.h>

int x [1][5];
int y;

void showVetor(int vetor[1][5], int tamanho) {

    for (int i = 0; i < tamanho; i++) {
        
        printf("\n%d", vetor[0][i]);
    }
    
    printf("\n");
}

void bubble(int vetor[1][5], int tamanho) {
    
    for (int i = 0; i < tamanho; i++) {
        
        for(int j = 0; j < tamanho - i - 1; j++){
            
            if (vetor[0][j] > vetor[0][j + 1]) {
            
                y = vetor[0][j];
                vetor[0][j] = vetor[0][j + 1];
                vetor[0][j + 1] = y;
            }
        }
    }
}

int main() {
    
    x[0][0] = 3;
    x[0][1] = 76;
    x[0][2] = 9;
    x[0][3] = 29;
    x[0][4] = 99;

    printf("--- Vetor Original ---");
    showVetor(x, 5);

    printf("\n--- Vetor Ordenado (Bubble Sort) ---");
    bubble(x, 5);
    showVetor(x, 5);
    
    return 0;
}



















