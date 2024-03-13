#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
	char c[100],d[100];
	gets(c);
	gets(d);
	int cnt[256]={0};
	for (int i=0;i<strlen(c);i++){
		cnt[c[i]]=1;
	}
	for (int i=0;i<strlen(d);i++){
		cnt[d[i]]=1;
	}
	for (int i=0;i<256;i++){
		if (cnt[i]){
			printf("%c",i);
		}
	}
}
