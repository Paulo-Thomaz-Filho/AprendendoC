#include <stdio.h>

int main()
{
    int horas, minutos, minutosTotais;
    printf("Digite as horas: ");
    scanf("%d", &horas);
    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    minutosTotais = horas * 60 + minutos;
    printf("Se passaram %d desde as 00h", minutosTotais);
    return 0;

}