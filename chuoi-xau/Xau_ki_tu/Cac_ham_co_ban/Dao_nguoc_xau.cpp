#include<stdio.h>
#include<string.h>
char* strrev(char c[]){
	int l=0,r=strlen(c)-1;
	while(l<r){
		int tmp=c[l];
		c[l]=c[r];
		c[r]=tmp;
		++l;--r;
	}
	return c;
}
int main(){
	char c[1000];
	gets(c);
	printf("%s",strrev(c));
}
