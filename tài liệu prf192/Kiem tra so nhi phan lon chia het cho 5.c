#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int check(char c[]){
	int n=strlen(c);
	int tmp=1,sum=0;
	for(int i=n-1;i>=0;i--){
		sum+=(c[i]-'0')*tmp;
		tmp*=2;
		tmp%=10;
		sum%=10;
	}
	if(sum%5==0) return 1;
	else return 0;
}

int main(){
	char c[1001];
	gets(c);
	if(check(c)) printf("YES");
	else printf("NO");
}
