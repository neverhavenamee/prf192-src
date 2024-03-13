#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
long long gcd(long long a, long long b){
	if(b==0) return a;
	else return gcd(b,a%b);
}

long long find(char n[],long long m){
	long long res=0;
	for(int i=0;i<strlen(n);i++){
		res=(res*10+n[i]-'0')%m;
	}
	return res;
}

int main(){
	char c[10001];
	gets(c);
	long long d;
	scanf("%lld",&d);
	long long du=find(c,d);
	printf("%lld",gcd(d,du));
}
