#include<stdio.h>
#include<string.h>
int main(){
	char c[100];
	gets(c);
	strupr(c);
	printf("%s",c);
}
