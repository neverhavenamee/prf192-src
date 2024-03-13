#include<stdio.h>
int is_digit(char c){
	if (c>='0'||c<='9')return 1;
	return 0;
}
int main(){
	char c;
	c=getchar();
	printf("%d",is_digit(c));
}
