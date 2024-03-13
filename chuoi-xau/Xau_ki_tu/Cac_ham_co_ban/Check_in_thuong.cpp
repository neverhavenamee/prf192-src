#include<stdio.h>
int is_lower(char c){
	if (c>='a'&&c<='z')return 1;
	return 0;
}
int main(){
	char c;
	c=getchar();
	printf("%d",is_lower(c));
}
