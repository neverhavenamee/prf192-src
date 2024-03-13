#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	char c[1001];
	gets(c);
	int n=strlen(c);
	int x[n];
	int sum=0;
	for(int i=0;i<strlen(c);i++){
		x[i]=c[i]-'0';
	}
	for(int i=0;i<n;i++){
		sum+=x[i];
	}
	printf("%d",sum);
}
