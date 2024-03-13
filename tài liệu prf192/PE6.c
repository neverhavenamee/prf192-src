#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char a[100][100];
	int n=0;
	int cnt=0;// dem so luong chu cai trong tu
  	char s[100];
  	gets(s);
  	char *token=strtok(s," ");
  	while(token!=NULL){
  		strcpy(a[n++],token);
  		token=strtok(NULL," ");
	}
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(int i=0;i<n;i++){
		if(a[i][0]=='h' && a[i][strlen(a[i])-1]=='g'){
			cnt++;
		}
	}
	printf("%d",cnt);
	







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
