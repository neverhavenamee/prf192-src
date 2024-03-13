#include<stdio.h>
int strlen(char c[]){
	int cnt=0;
	while(c[cnt]!='\0')++cnt;
	return cnt;
}
int main(){
	char c[1000];
	gets(c);
	printf("%d",strlen(c));
}
