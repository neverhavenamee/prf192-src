#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int paragram(char c[]){
	strlwr(c);
	int cnt[26]={0};
	for(int i=0;i<=strlen(c);i++){
		cnt[c[i]-'a']=1;
	}
	for(int i=0;i<26;i++){
		if(cnt[i]==0) return 0;
	}
	return 1;
}
int main(){
	char c[1005];
	gets(c);
	if(paragram(c)) printf("YES");
	else printf("NO");
}
