#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char s[100];
	gets(s);
	char a[100][100];
	int n=0;
	int cnt=0;
  	char*token=strtok(s," ");
  	while(token!=NULL){
  		strcpy(a[n++],token);
  		token=strtok(NULL," ");
	}
	
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:


	for(int i=0;i<3;i++){
		for(int j=0;j<strlen(a[i]);j++){
			cnt++;
		}
	}
	printf("%d",cnt);





  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
