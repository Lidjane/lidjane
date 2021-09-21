#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,n2,b=0;
    printf("Digite um número: ");
    scanf("%d",&n);
    n2=n;
    for(i=1;n!=0;i++){
    	
    	b+=(n%10);
    	if(n>9){
			b=b*10;
		}
		n=n/10; 	
		
	}
	if(n2==b){
		
		printf("O numero digitado eh palindromo!");
	} else
	{
		printf("nao e palindromo");
	}
    return 0;
}