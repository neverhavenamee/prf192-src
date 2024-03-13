#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	char c[1001];
	gets(c);
	int cnt[26]={0};
	for(int i=0;i<strlen(c);i++){
		cnt[c[i]-'a']++;
	}
	int res=0;
	for(int i=0;i<26;i++){
		if(cnt[i]!=cnt[i+1]){
			res++;
		}
	}
	printf("%d",26-res);
}
