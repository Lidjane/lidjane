#include <stdio.h>
int main(int argc, char** argv)
{
	float custoDoConvite, custoDoEspetaculo, qntidadeDeConvites;
	printf("informe os valores do convite e o custo do espetaculo\n");
	
	scanf("%f %f", &custoDoConvite, &custoDoEspetaculo);
	
	 qntidadeDeConvites = custoDoEspetaculo/custoDoConvite;
	 
	 printf(" A quantidade de convites a serem vendidos para alcancar o custo total e: %.2f", qntidadeDeConvites);
	 
	 printf("\n\n");
	
	
	return 0;
}