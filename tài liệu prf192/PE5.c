#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d",&n);
	int a[n];
  	for(int i=0;i<n;i++){
  		scanf("%d",&a[i]);
	}
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

	for(int i=0;i<n;i++){
		int ok=1;
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
				ok=0;break;
			}
		}
		if(ok==1) printf("%d\n",a[i]);		
	}







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
