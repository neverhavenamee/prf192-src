#include<stdio.h>
int is_alphar(char c){
	if ((c>='A'&&c<='Z')||(c>='a'&&c<='z'))return 1;
	return 0;
}
int main(){
	char c;
	c=getchar();
	printf("%d",is_alphar(c));
}
