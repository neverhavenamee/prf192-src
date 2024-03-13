#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	
  int n;
  scanf("%d",&n);
  int x=n/2, y=n%2;
  int cnt=1;
  int ok=1;
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

	if(n==0 || n==1) printf("%d is not power of 2",n);
	while(x>1){
		if(y==1){
			ok=0;
			printf("%d is not power of 2",n);break;
		}
		x=x/2;
		cnt++;
		y=x%2;
		ok=1;
	}
	if(ok==1) printf("%d",cnt); 





  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
