#include<stdio.h>
int is_upper(char c){
	if (c>='A'&&c<='Z')return 1;
	return 0;
}
int main(){
	char c;
	c=getchar();
	printf("%d",is_upper(c));
}
