#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int check(char c[]){
	if((c[strlen(c)-1]-'0')%2==1){
		return 0;
	}
	int sum=0;
	for(int i=0;i<strlen(c);i++){
		sum+=c[i]-'0';
	}
	if(sum%3==0){
		return 1;
	}
	else return 0;
}
int main(){
	char c[1001];
	gets(c);
	if(check(c)) printf("YES");
	else printf("NO");
}
