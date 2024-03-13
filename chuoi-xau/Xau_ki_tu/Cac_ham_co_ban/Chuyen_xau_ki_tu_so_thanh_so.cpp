#include<stdio.h>
#include<string.h>
long long atoll(char c[]){
	long long res=0;
	for (int i=0;i<strlen(c);i++){
		res=res*10+c[i]-'0';
	}
	return res;
}
int main(){
	char c[1000];
	gets(c);
	printf("%lld",atoll(c));
}
