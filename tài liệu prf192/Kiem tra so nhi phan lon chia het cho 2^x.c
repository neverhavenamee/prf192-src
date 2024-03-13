#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int check(char c[], int x){
	if(strlen(c)<=x) return 0;
	for(int i=0;i<x;i++){
		if(c[strlen(c)-i-1]=='1'){
			return 0;
		}
	}
	return 1;
}
int main(){
	char c[1001];
	gets(c);
	int x;
	scanf("%d",&x);
	if(check(c,x)) printf("YES");
	else printf("NO");
}
