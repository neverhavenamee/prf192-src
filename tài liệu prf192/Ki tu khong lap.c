#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	char c[1001];
	gets(c);
	int cnt[256]={0};
	for(int i=0;i<strlen(c);i++){
		cnt[c[i]-'A']++;
	}
	for(int i=0;i<256;i++){
		if(cnt[i]==1){
			printf("%c",(i+'A'));
		}
	}
}
