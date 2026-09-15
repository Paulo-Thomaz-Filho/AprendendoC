#include <stdio.h>
#include <math.h> 

int main() {
    char tipo;
    int qtdDias;
    float valorDiario = 0.0f, valorTotal;
    
    printf("Digite o tempo de sua estadia em dias: ");
    scanf("%i", &qtdDias);
   
    printf("Digite o tipo da sua suite? (s - d - t): ");
    // O espaço antes do %c limpa o 'Enter' (\n) do buffer de entrada
    scanf(" %c", &tipo);

    switch (tipo) {
        case 'S':
        case 's':
            valorDiario = 300.0f;
            break;
            
        case 'D':
        case 'd':
            valorDiario = 450.0f;
            break;
            
        case 'T':
        case 't':
            valorDiario = 500.0f;
            break;

        default:
            printf("Tipo de suite invalido!\n");
            return 1; // Encerra o programa se a opção for inválida
    }
    
    valorTotal = qtdDias * valorDiario;
    
    // %.2f exibe o valor formatado com duas casas decimais
    printf("O valor total da sua hospedagem e: R$ %.2f\n", valorTotal);

    return 0;
}
