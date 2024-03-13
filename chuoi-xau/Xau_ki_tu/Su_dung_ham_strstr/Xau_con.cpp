#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
	char c[1000];
	gets(c);
	char d[1000];
	gets(d);
	if(strstr(c,d)!=NULL){
		printf("YES");
	}else{
		printf("NO");
	}
}
