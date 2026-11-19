#include <stdio.h>

int main()
{
    float funcionario[4], total = 0.00;
    
    printf("Dígite o valor dos salários\n\n");
    
    for (int i = 0; i < 4; i++){
        printf("Funcionario %d: R$ ", i + 1);
        scanf("%f", &funcionario[i]);
    }
    
    printf("\n--- Salários Cadastrados ---\n");
    for (int i = 0; i < 4; i++){
        printf("Funcionario %dº: R$ %.2f\n", i+1, funcionario[i]);
        total += funcionario[i];
    }
    
    printf("%.2f", total);
    return 0;
}