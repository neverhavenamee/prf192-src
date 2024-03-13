#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int check(char c[]){	
	int l=0,r=strlen(c)-1;
	while(l<r){
		if(c[l]!=c[r])
		return 0;
		l++,r--;
	}
	return 1;
}

int main(){
	char c[1001];
	gets(c);
	if(check(c)==1) printf("YES");
	else printf("NO");
}

