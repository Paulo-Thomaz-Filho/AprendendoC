#include <stdio.h>

int main(void)
{
    FILE *arquivo;
    int quantidade, i;
    char dia [10];
    float consumo;
    
    arquivo = fopen("consumo.txt", "a");
    if (arquivo == NULL){
        printf("não foi possivel abrir o arquivo. \n")
        return 1;
    }
    
    printf("Quantos registros deseja cadastrar?");
    scanf("%d", &quantidade);
    
    for (i = 0, quantidade; i++){
    printf("\nRegistro %d\n", i + 1);
    
    printf("Dia: ");
    scanf("%9s", dia);
    
    fprintf(arquivo, "%s %.2f\n", dia, consumo);
    }
    fclose(arquivo);
    printf("\nDados acresentadosao ao arquivo consumo.txt. \n")=
    return 0;
}