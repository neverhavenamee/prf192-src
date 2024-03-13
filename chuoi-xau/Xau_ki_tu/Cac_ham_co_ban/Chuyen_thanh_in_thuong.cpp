#include<stdio.h>
int to_lower(char c){
	if (c>='A'&&c<='Z')c+=32;
	return c;
}
int main(){
	char c;
	c=getchar();
	printf("%c",to_lower(c));
}
