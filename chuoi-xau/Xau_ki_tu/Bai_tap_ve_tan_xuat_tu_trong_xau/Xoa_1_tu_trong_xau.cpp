#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	char c[1000];
	gets(c);
	char w[10];
	gets(w);
	char a[20][50];
	char*tk=strtok(c," ");
	int n=0;
	while(tk!=NULL){
		if (strcmp(tk,w)!=0){
			strcpy(a[n++],tk);
		}
		tk=strtok(NULL," ");
	}
	for (int i=0;i<n;i++){
		printf("%s",a[i]);
		if (i!=n-1)printf(" ");
	}
}
