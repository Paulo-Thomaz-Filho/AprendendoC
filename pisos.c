#include <stdio.h>
#include <math.h>
// caixa 2,50m

int main()
{
	float area, comprimento, largura, valor;
	int caixas;

	printf("Dígite a largura: ");
	scanf("%f",&largura);

    printf("Dígite a comprimento: ");
    scanf("%f",&comprimento);
    
    printf("Dígite a valor de cada piso: ");
    scanf("%f",&valor);
    
    area = comprimento * largura;
    caixas = ceil (area / 2.5);
    valor = caixas * valor;
    
    printf("O total de pisos é %d para revestir %.2fm² e o valor total é %.2f reais", caixas, area, valor);

	return 0;
}