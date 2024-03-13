#include<stdio.h>
#include<string.h>
char* strupr(char c[]){
	for (int i=0;i<strlen(c);i++){
		if (c[i]>='a'&&c[i]<='z')c[i]-=32;
	}
	return c;
}
int main(){
	char c[1000];
	gets(c);
	printf("%s",strupr(c));
}
