#include <stdio.h>

int main()
{
    int horas, watts;
    float wattsTotais;
    printf("Dígite a potencia em Watts: ");
    scanf("%d", &watts);
    
    printf("Dígite quantas horas funcionou no dia: \n");
    scanf("%d", &horas);
    
    wattsTotais = (watts * horas * 30) / 1000;
    
    printf("A quantidade total usada foi: %.2fkW/h", wattsTotais);
    return 0;

}