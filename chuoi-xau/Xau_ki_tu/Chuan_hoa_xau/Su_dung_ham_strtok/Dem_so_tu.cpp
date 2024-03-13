#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char c[1000];
	gets(c);
	char* tk=strtok(c," ");
	int cnt=0;
	while (tk!=NULL){
		++cnt;
		tk= strtok(NULL," ");
	}
	printf("%d",cnt);
}
