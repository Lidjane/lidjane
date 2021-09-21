#include <stdio.h>
int main(int argc, char** argv)
{
	int diaria; 
	float pagar;
	char nomeDocliente[100];
	
	printf("informe o valor do nome\n");
	
	 gets(nomeDocliente);
	
	printf("informe o numero da diaria\n");
	
	 scanf("%d", &diaria);
	 
	 if(diaria<15){
	 	
		 pagar = 50+4;
	 
		
	 }else if(diaria == 15){
	 	
		 pagar = 50 + 3,60;
	 
		
	 }else if (diaria>15){
	 	
			 pagar = 50 + 3;
		 
		 }
		  printf(" o nome do cliente %s \n e valor a ser pago e de: %.3f ", nomeDocliente, pagar );
		  printf("\n");
		  
	return 0;
}