/**
 * This program takes a number and returns
 * the sum of its proper divisors and determines if the 
 * number is abundant, deficient, or perfect
 *
 * (c) Fall 2015 Julian Vera
 * ali.c
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{

  //Determines first letter to be switched on
  int i;

  //Holds first letter to be switched on
  int n;

  //Will hold input numbers
  int x;

  //Will be used to divide each number by every number up until itself
  int a;
  int aliq = 0;

  //Used for swith statement
  int flags = 0;

  
  if(argc > 1 && argv[1][0] == '-'){
    for(i = 1; (n=argv[1][i]); i++){
      // printf("%d",n);                                                        
        switch(n){
      case 'a':
        flags = flags | 1;
        break;
      case 'd':
        flags = flags | 2;
        break;
      case 'p':
        flags = flags | 4;
	break;
	case '1':
	  flags = flags | 8;
	  break;
	default:
	  printf("Bad input\n");
        }
    }
  }

                                             
  //Read in all the entered digits
  while(1 == scanf("%d",&x))
    {
      //Reset value of aliq each time loop ends
      aliq = 0;
      for(a = 1; a < x; a++)
        {
	  //Increment aliq if a is a divisor
          if(x % a == 0)
	    aliq += a;
	}

      //Determine flags and numbers to be printed
      if(aliq > x && (flags & 1))
	printf("%d\n",x);
        
      else(aliq < x && (flags & 2))
	    printf("%d\n", x);
        
      else(aliq == x && (flags & 4))
	    printf("%d\n",x);
	
      else(aliq == 1 && (flags & 8))
	    printf("%d\n",x);
    }
  
  return 0;
}

