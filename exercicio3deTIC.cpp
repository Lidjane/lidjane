#include <stdio.h>
int main(){
	int anoDeNascimento, anoAtual,idade, anosDepois;
	
	printf("informe o ano de nascimento e o ano atual\n");
	
	
     	 scanf("%i %i", &anoDeNascimento, &anoAtual);
	 
	  idade= anoAtual-anoDeNascimento;
	  
	  printf("%i-%i=%i\n", anoAtual, anoDeNascimento, idade);
	  
	  idade= 2050-anoDeNascimento;
	  printf(" em  2050  a pessoa tera %i", idade);
	  printf("\n");
	  return 0;
	  
	
}