#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int solve(char n[],long long m){
	long long res=0;
	for(int i=0;i<strlen(n);i++){
		res=(res*10+n[i]-'0')%m;
	}
	return res;
}
int main(){
	char c[1001];
	gets(c);
	long long d;
	scanf("%lld",&d);
	printf("%d",solve(c,d));
}
