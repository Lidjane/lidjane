#include <stdio.h>
int main(){
	float salarioDofuncionario, percentualDeAumento, aumento, novoSalario;
	
	printf("informe o salario do funcionario e o percentual de aumento\n");
	
	scanf("%f %f", &salarioDofuncionario , &percentualDeAumento);
	
	  aumento = salarioDofuncionario * percentualDeAumento/100;
	
	printf(" o valor do aumento e:%.3f", aumento);
	printf("\n");
	
	novoSalario = salarioDofuncionario + aumento;
	
	printf(" o valor no novo salario e:%.3f", novoSalario);
	
	printf("\n");
	
	return 0;
	
}