#include <stdio.h>
#include <math.h> 

int main() {
    // defiinindo variaveis
    float a, b, c, delta, raiz, baskara_mais, baskara_menos;
    
    // -- inputs dos dados --
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    
    // -- calculo --
    delta = b * b - 4 * a * c;
    
    // verificação de raiz
    if (delta < 0){
        printf("Não há raiz real");
    } 
    else {
        // faz o cauculo da raiz
        raiz  = sqrt(delta);
        
        // termina a conta da formula
        baskara_mais  = ( -b + raiz ) / (2 * a);
        baskara_menos = ( -b - raiz ) / (2 * a);
        
        printf("As respostas são: %.2f e %.2f\n", baskara_mais, baskara_menos);
    }
    
    return 0;
}