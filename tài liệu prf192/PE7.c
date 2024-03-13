#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int k;
	do{
		scanf("%d",&k);
	}while(k>=20);

	char n[k];
	for(int i=0;i<k;i++){
		scanf("%c\n",&n[i]);
	}
	int cnt[256]={0};
	int idx1=0,idx2=0;
	int max2=0,max1=0;
	for(int i=0;i<strlen(n);i++){
		cnt[n[i]-'a']++;
	}
	for(int i=0;i<256;i++){
		if(cnt[i]!=0){
			if(cnt[i]>max1){
				max2=max1;
				max1=cnt[i];
				idx2=idx1;
				idx1=i+'a';
			}
			else if(cnt[i]>max2){
				max2=cnt[i];
				idx2=i+'a';
			}
			else{
				idx2=i+'a';
			}
		}
	}
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	

	printf("%c\n",idx1);
	printf("%c",idx2);




  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
