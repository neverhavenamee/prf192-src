#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
	char c[100];
	gets(c);
	int cnt[256]={0};
	for (int i=0;i<strlen(c);i++){
		cnt[c[i]]++;
	}
	int max=-1e9,tmp;
	for (int i=0;i<256;i++){
		if (cnt[i]!=0){
			if (cnt[i]>=max){
				max=cnt[i];	
				tmp=i;
			}
		}
	}
	printf("%c",tmp);
}
