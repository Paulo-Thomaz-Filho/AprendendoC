#include <stdio.h>
#define PI 3.14159

int main(){
    float raio, area;
    printf("Digite o raio do circulo: ");
    scanf("%F", &raio);
    area = raio * raio * PI;
    printf("O área é: %f", area);
    return 0;
}