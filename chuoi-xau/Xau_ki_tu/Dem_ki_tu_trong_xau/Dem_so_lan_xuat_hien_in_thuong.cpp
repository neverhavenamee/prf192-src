#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
	char c[100];
	scanf("%s",c);
	int cnt[26]={0};
	for (int i=0;i<strlen(c);i++){
		cnt[c[i]-'a']++;
	}
	for (int i=0;i<26;i++){
		if (cnt[i]!=0){
			printf("%c %d\n",('a'+i),cnt[i]);
		}
	}
}
