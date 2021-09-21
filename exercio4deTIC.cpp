#include <stdio.h>
int main(){
 float salarioDoFuncionario, novoSalario, aumento;
	
	printf("informe o salario do funcionario\n");
	
	scanf("%f%f", &salarioDoFuncionario, &novoSalario);
	
	aumento = (salarioDoFuncionario*25)/100;
	
	printf("\n%.3f", salarioDoFuncionario);
	
	printf("\n");
	
	novoSalario= salarioDoFuncionario+aumento;
	printf("\n");
	
	printf(" o novo salario e:%.3f", novoSalario  );
	
	printf("\n");
	return 0;
	
	
	
}