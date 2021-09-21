
#include <stdio.h>

int main()
{              
 int i, n, qntpares=1, qntdeimpares=1;
 
 int mediapares, mediaimpares;
    
  for (i=0; i<=9; i++){
  	
	  printf("digite os 10 numeros\n");
	  
            scanf("%i", &n);
            
    
    if(n %2==0){
    
         	qntpares=qntpares+1;
         	//i++;
        
	mediapares = qntpares + n/10;
	    
	  
	  printf("\n a media dos pares eh de: %i", mediapares);
		
	}else if( n % 2 != 0)
	{
		
		  qntdeimpares=qntdeimpares+1;
		 // i++;
		  
		     mediaimpares = qntdeimpares+n/10;
		     
		      printf(" a media dos impares eh de: %i", mediaimpares);
		     
	}
  }
  printf("\n");
		  

  return 0;
  
  }


  

