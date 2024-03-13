#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int check(char c[]){
	int l=0,r=strlen(c)-1;
	int tmp=0;
	while(l<r){
		if (c[l]!=c[r])tmp++;
		if (tmp>1)return 0;
		l++;r--;
	}
	return 1;
}
int main(){
	char c[1000];
	gets(c);
	if (check(c))printf("YES");
	else printf("NO");
}
