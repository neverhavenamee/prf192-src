#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
//char *strstr(char a[],char b[])
int main(){
	char a[1001],b[1001];
	gets(a);
	gets(b);
	if(strstr(a,b)!=NULL){
		printf("YES");
	}
	else printf("NO");
}
