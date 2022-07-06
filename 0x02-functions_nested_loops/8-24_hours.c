#include <stdio.h>
#include <main.c>

void jack_bauer(void){
  
  for(int i =0; i <=23; i++)
    {
      for(int j = 0; j<=59; j++)
	{
	  if(i<10)
	    {
	      if(j<10)
		printf("\n0%d:0%d",i,j);
	      else 
		printf("\n0%d:%d",i,j);
	    } 
	  else
	    if(j<10) printf("\n%d:0%d",i,j);
	    else
	      printf("\n%d:%d",i,j);
	}
    }
} 
