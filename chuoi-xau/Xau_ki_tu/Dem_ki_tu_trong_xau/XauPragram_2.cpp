#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int check(int cnt[]){
	for (int i=0;i<26;i++){
		if (!cnt[i])return 0;
	}
	return 1;
}
int main(){
	char c[1000];
	gets(c);
	strlwr(c);
	int cnt[256]={0};
	for (int i=0;i<strlen(c);i++){
		cnt[c[i]-'a']=1;
	}
	if (check(cnt))printf("YES");
	else printf("NO");
}
