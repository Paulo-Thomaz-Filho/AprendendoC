#include <stdio.h>

int main()
{
    int nota[3][4];
    printf("- - - Lista de erros - - -\n\n");

    for (int i = 0; i < 3; i ++) {
        for (int j = 0; j < 4; j ++) {
            printf("Digite o valor da %dª venda do funcionario %d: ", j+1, i+1);
            scanf("%d", &nota[i][j]);
        }
    }                           
    
    
    for (int i = 0; i < 3; i ++) {
        printf("{%d | %d | %d | %d}\n", nota[i][0],nota[i][1],nota[i][2],nota[i][3]);
    }
    
    return 0;
}
