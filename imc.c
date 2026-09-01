#include <stdio.h>

int main()
{
    float peso, imc;
    int altura;
    printf("Digite a sua autura em cm: ");
    scanf("%d", &altura);
    
    printf("Digite a sua autura em peso em kilos: ");
    scanf("%f", &peso);
    
    imc = (altura * altura)  / peso;
    
    printf("Seu imc é : %.2f", imc);
    return 0;
}