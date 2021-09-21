#include <stdio.h>
int main()
{
	int horasTrabalhadas, horas, totalDeHoras;
	float salarioMinimo, novoSalario, salarioBruto, imposto,novoSalarioAReceber;
	
	printf("informe o total de horas trabalhadas, e o valor do salario minimo\n");
	
	 scanf("%i %f", &horasTrabalhadas, &salarioMinimo);
	 
	  horas = horasTrabalhadas / 6;
	  
	   totalDeHoras = horas * 30;
	   
	   //printf(" o tatal de horas e : %i\n", totalDeHoras);
	 
	 novoSalario = salarioMinimo / horas;
	 
//	printf("a metade do salrio e de: %.3f\n", novoSalario);
	 
	 salarioBruto = horas * horasTrabalhadas;
	 
	// printf(" o valor do salario bruto e de: %.3f\n", salarioBruto);
	 
	    imposto = salarioBruto * 3 / 100; 
	    
	   // printf("o valor do imposto e de: %.1f:\n", imposto);
	    
	    novoSalarioAReceber = salarioBruto - imposto;
	    
	    printf(" o novo salario a receber e de %.3f:", novoSalarioAReceber);
	    
	    
	 
	 
	 
        
	return 0;
}