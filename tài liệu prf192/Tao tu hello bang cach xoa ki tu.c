#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int solve(char c[]){
	char d[5]={'h','e','l','l','o'};
	int cnt=0;
	for(int i=0;i<strlen(c);i++){
		if(c[i]=d[cnt]){
			cnt++;
		}
		if(cnt==5){
			return 1;
		}
	}
	 return 0;
}
int main(){
	char c[1001];
	gets(c);
	if(solve(c)) printf("YES");
	else printf("NO");
}
