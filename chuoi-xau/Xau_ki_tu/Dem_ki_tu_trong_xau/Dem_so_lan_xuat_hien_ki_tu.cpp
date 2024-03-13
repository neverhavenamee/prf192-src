#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
	char c[100];
	scanf("%s",c);
	int cnt[256]={0};
	for (int i=0;i<strlen(c);i++){
		cnt[(int)c[i]]++;
	}
	for (int i=0;i<256;i++){
		if (cnt[i]!=0){
			printf("%c %d\n",i,cnt[i]);
		}
	}
}
