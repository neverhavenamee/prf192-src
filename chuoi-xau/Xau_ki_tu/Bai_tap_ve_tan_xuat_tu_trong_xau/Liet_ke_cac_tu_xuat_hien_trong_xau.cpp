#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	char c[1000];
	gets(c);
	strlwr(c);
	char a[20][50];
	char*tk=strtok(c," ");
	int n=0;
	while(tk!=NULL){
		strcpy(a[n++],tk);
		tk=strtok(NULL," ");
	}
	for (int i=0;i<n;i++){
		int ok=1;
		for (int j=0;j<i;j++){
			if (strcmp(a[i],a[j])==0){
				ok=0;
				break;
			}
		}
		if (ok)printf("%s ",a[i]);
	}
}
