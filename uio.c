

// Atividade 1 da aula de 31/8/26 
#include <stdio.h>

int main()
{
    int produtoManha, produtoTarde, total;

    printf("Digite a quantidade de produtos recebidos no periodo da Manhâ: ");
    scanf("%d", &produtoManha);

    printf("Digite a quantidade de produtos recebidos no periodo da Tarde: ");
    scanf("%d", &produtoTarde);

    total = produtoTarde + produtoManha;

    printf("O total de produtos recebidos foi de: %d", total);

    return 0;
}   