#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
long long find(char a[],long long b){
	long long res=0;
	for(int i=0;i<strlen(a);i++){
		res=res*10+a[i]-'0';
		res%=b;
	}
	return res;
}
long long powMod(long long a, long long b,long long m){
	long long res=1;
	if(b%2==1){
		res*=a;
		res%=m;
	}
	a*=a;
	a%=m;
	b/=2;
}

int main(){
	char a[1001];
	gets(a);
	long long b, m;
	scanf("%lld %lld",&b,&m);
	long long du=find(a,m);
	printf("%lld",powMod(du,b,m));
}
