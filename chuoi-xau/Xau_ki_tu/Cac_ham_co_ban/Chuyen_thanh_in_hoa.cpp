#include<stdio.h>
int to_upper(char c){
	if (c>='a'&&c<='z')c-=32;
	return c;
}
int main(){
	char c;
	c=getchar();
	printf("%c",to_upper(c));
}
