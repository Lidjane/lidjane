 #include <stdio.h>
int main(int argc, char** argv)
{
	int soma = 0, numero;
	
 for(int i=0; i<500; i++)
 {
     if(i%2!=0 && i%3==0)
	 {
		 soma=soma+i;
		 printf("\n numero: %i", i);
	 }	 
 }
 printf("\n soma de todos os numeros impares e multiplos de tres e: %i", soma);
 
 printf("\n");
	return 0;
}