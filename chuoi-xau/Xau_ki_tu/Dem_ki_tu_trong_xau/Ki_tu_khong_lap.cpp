#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		int cnt[26]={0};
		for (int i=0;i<strlen(c);i++){
			cnt[c[i]-'A']++;
		}
		for (int i=0;i<26;i++){
			if (cnt[i]==1)printf("%c",i+'A');
		}
	}
}
