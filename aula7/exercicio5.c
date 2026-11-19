#include <stdio.h>

int main() {
    int qtdAluno;
    float nota, somaNota, media;
    
    do {
        printf("Dígite a quantidade de alunos: ");
        scanf("%d", &qtdAluno);
        if (qtdAluno <= 0){
            printf("Quantidade invalida! \n");
        }
    } while (qtdAluno <= 0);

    for(int i = 1; i <= qtdAluno; i++){
        do {
            printf("digite a nota do aluno %d: ", i);
            scanf("%f", &nota);
            
            if (nota < 0 || nota > 10){
                printf("Nota invalida, digite novamente!");
            }
        } while (nota < 0 || nota > 10);
        
        somaNota += nota;
    }
    
    media = somaNota / qtdAluno;
    printf("A media é: %.2f", media);
    return 0;
}