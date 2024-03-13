#include<stdio.h>
#include<string.h>
char* strlwr(char c[]){
	for (int i=0;i<strlen(c);i++){
		if (c[i]>='A'&&c[i]<='Z')c[i]+=32;
	}
	return c;
}
int main(){
	char c[1000];
	gets(c);
	printf("%s",strlwr(c));
}
