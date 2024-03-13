#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;scanf("%d",&n);
  int i, count=0;
  if(n<2){
  	count=0;
  }
  if(n==2||n==3){
  	count=1;
  }
  for(i=2;i<=n/2;i++){
  	if(n%i==0){
  		count=0;
	}
	else{
		count++;
	}
  }
  

  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:


if(count==0){
  	printf("%d is not a prime number", n);
  }else{
  	printf("%#X",n);
  }





  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
