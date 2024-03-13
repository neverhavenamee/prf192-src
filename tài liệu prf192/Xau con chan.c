#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
// xau chan la xau co ket thuc la so chan
int main(){
	char c[1001];
	gets(c);
	int res=0;
	for(int i=0;i<strlen(c);i++){
		if((c[i]-'0')%2==0){
			res+=i+1;
		}
	}
	printf("%d",res);
}
