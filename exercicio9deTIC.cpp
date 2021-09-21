#include <stdio.h>
int main(int argc, char** argv)
{
	int pesoDoSaco, quantidadeEmGramas, qntdEmQuilo, finalDeCincoDias;
	
		printf("informe o peso do saco em quilos, e a racao dada aos gatos em kg\n");
		
		scanf("%i %i", &pesoDoSaco, &qntdEmQuilo);
		
		//printf(" cada gato recebe um total de 1kg");
		quantidadeEmGramas= qntdEmQuilo * 1000;
		
		printf(" a quantidade em gramas e de: %i\n", quantidadeEmGramas);
		printf("\n");
		
		finalDeCincoDias = pesoDoSaco - qntdEmQuilo * 5;
		printf("\n");
		
		printf(" no final de cinco dias sobrarao : %i", finalDeCincoDias);
		
		
		printf("\n\n");
		
		
	return 0;
}