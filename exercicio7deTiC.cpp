#include <stdio.h>
int main(int argc, char** argv)
{
	float precoDoVeiculo, percentualDeLucro, lucroDoDistribuidor, percentualDeImposto;
	
	float valorDeImposto, precoFinalDoVeiculo;
	
	printf("informe o valor do veiculo e o percentual de lucro\n");
	
	scanf("%f %f", &precoDoVeiculo, &percentualDeLucro);
	
	   lucroDoDistribuidor = percentualDeLucro / precoDoVeiculo * 100;
	   
	   printf(" o lucro do distribuidor em percentagem e de: %.2f", lucroDoDistribuidor);
	   
	   printf("\n\n");
	   
	   //printf("informe o percentual de imposto\n");
	   
	   scanf("%f", percentualDeImposto);
	   
	  // valorDeImposto = lucroDoDistribuidor * percentualDeImposto / 100;
	     valorDeImposto = (precoDoVeiculo*18)/100;
	  printf("\n");
	  
	   printf(" o valor do imposto e de: %.1f", valorDeImposto);
	   
	   printf("\n\n");
	    
	     precoFinalDoVeiculo = precoDoVeiculo - valorDeImposto + lucroDoDistribuidor;
	     
		 printf("\n\n");
		 
		 printf("o valor final do veiculo e de: %.3f\n", precoFinalDoVeiculo ); 
	   
	   
	return 0;
}