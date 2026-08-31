#include <stdio.h>

int main(){
    int total;
    float preco, precoTotal;

    printf("Digite a quantidade de cafes: ");
    scanf("%d", &total);
    printf("Dígite o valor unitario do café: ");
    scanf("%f", &preco);
    precoTotal = preco * total;
    printf("O valor total dos %d cafés é: %.2f", total, precoTotal);
    return 0;
}