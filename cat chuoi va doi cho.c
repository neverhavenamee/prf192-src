#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
char s[100],s1[50],s2[50]; char *p,tam[50];
int dem =0;
gets(s); fflush(stdin);
gets(s1); fflush(stdin);
strcpy(s2,s1);
strrev(s2);  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
p=strstr(s,s1);
while(p!= NULL){
strcpy(tam,p+strlen(s1));
*p='\0';
strcat(s,s2);strcat(s,tam);
p=strstr(s,s1);
}puts(s);




  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
