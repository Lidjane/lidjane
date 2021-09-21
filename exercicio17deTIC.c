#include <stdio.h>
int main(int argc, char** argv)

{
	 int valor, c =1, i=0;
	printf("digite um valor\n");
	
	 scanf("%i", &valor);
	  for( i=valor; i > 1; i--){
	  	
	     	c = c * i;
   	
	  }
	    printf("%i", c);
	return 0;
}