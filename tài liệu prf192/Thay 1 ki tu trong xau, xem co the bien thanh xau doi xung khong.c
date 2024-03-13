#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int check(char c[]){
	int cnt=0;
	int l=0, r=strlen(c)-1;
	while(l<r){
		if(c[l]!=c[r]) cnt++;
		l++;r--;
	}
	if(strlen(c)%2==1 && cnt<=0){
		return 1;
	}
	if(strlen(c)%2==0 && cnt==1){
		return 1;
	}
	return 0;
}
int main(){
	char c[1001];
	gets(c);
	if(check(c)) printf("YES");
	else printf("NO");
}
