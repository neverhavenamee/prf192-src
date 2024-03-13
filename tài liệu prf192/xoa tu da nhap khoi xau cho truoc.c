#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	char c1[1001];
	gets(c1);
	char c2[1001];
	gets(c2);
	char *token=strtok(c1," ");
	while(token!=NULL){
		if(strcmp(token,c2)!=0){
			printf("%s ",token);
		}
		token=strtok(NULL," ");
	}
}
