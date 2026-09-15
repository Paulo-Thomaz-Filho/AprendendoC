#include <stdio.h>
#include <math.h> 

int main() {
    char tipo;
    int qtdDias;
    float valorDiario, valorTotal;
    
    printf("Dígite o tempo de sua estadia em dias: ");
    scanf("%i", &qtdDias);
   
    printf("Dígite o tipo da sua suite? (s - d - t): ");
    scanf("%c", &tipo);

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
    }
    
    valorTotal = qtdDias * valorDiario;
    
    printf("O valor total da sua hospedagem é %f", valorTotal);

    return 0;
}