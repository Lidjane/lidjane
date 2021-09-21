#include <stdio.h>
int main(int argc, char** argv)
{
	int n, a=-1, b=1, c;
  do{
  	
  	n = a + b;
  	
  	printf("%i ", n);
  	
  	a=b;
  	
  	b=n;
  	
	  
  }while( n<21);
  
	return 0;
}