#include <stdio.h>

int main()
{
    float valores[8];
    float soma = 0.0f, media;
    int AcimaMedia = 0;
    
    printf("- - - Lista de erros - - -\n\n");

    for (int i = 0; i < 8; i ++) {
        printf ("Dígite o valor do %d: ", i+1);
        scanf  ("%f", &valores[i]);
        soma += valores[i];
        
        if (valores[i] > 5) {
            AcimaMedia += 1;
        }
        
    }                           
    
    media = soma / 8;
    
    
    printf("\nA soma das notas foi %.2f\n", soma);
    printf("A media das notas foi %.2f\n", media);
    printf("Teve %d notas acima da media", AcimaMedia);
    
    return 0;
}