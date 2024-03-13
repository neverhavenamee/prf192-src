#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	char c[1001];
	gets(c);
	int cnt=1;
	for(int i=0;i<strlen(c)-1;i++){
		if(c[i]!=c[i+1]){
			cnt++;
		}
		else{
			cnt=1;
		}
	}
	printf("%d",cnt);
}
