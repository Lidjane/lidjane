#include <stdio.h>
#include <conio.h>
# include <math.h>
int main(int argc, char** argv)
{
	int a, b, c, delta, x1,x2;
	
	printf("informe o coeficiente de a, b, c");
	scanf("%d %d %d", &a, &b, &c);
	
	   if(a != 0){
		   delta= (b*b) - 4*a*c;
		   if(delta==0){
			   x1=(- b + sqrt(delta))/(2*a);
			   printf("delta = a 0\n");
			   printf("%.2f", x1);
		   }
		   	   }else if(delta>0)
				  {
				  	x1=(-b - sqrtf(delta))/(2*a);
				  	x2=(-b - sqrtf(delta))/(2*a);
				  	printf("delta maior que 0\n");
				  	printf("%.2f\n", x1);
				  	printf("%2f\n", x2);
					  
				  } else
				  {
					  printf(" nao ha uma raiz real");
				  
	return 0;

				  }
}