#include <stdio.h>
int main(int argc, char** argv)
{
	float  salarioMinimo, valorDeqw, valorAserPago, descontoParaserPago, desconto;
	int qntdadeDeqlw;
	
	printf("informe o salario minimo e a quantidade de quilowalt\n");
	
	scanf("%f %i", &salarioMinimo, &qntdadeDeqlw);
	
	    valorDeqw = salarioMinimo / 1/5;
	    
	    printf("o valor de quilowalt e de: %.2f\n", valorDeqw);
	    
	    valorAserPago = qntdadeDeqlw + valorDeqw;
	    
	    printf("o valor a ser pago por essa residencia e de: %.3f\n", valorAserPago);
	    
	    descontoParaserPago = valorAserPago * 0.85;
	    
	    desconto = valorAserPago - descontoParaserPago;
	    
	    printf("o valor a ser pago pela residencia depois de sofrer um desconto e de: %.3f", desconto);
	    
	    printf("\n");
  
	    
	return 0;
}