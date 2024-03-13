#include<stdio.h>
#include<string.h>
//(1^n+2^n+3^n+4^n)mod5
// 1^n -> 1 1 1 1             du 1 = (1+2+3+4)=10   
// 2^n -> 2 4 8 6			  du 2 = (1+4+9+6)=20
// 3^n -> 3 9 7 4   --> n%4=? du 3 = (1+8+7+4)=20  --> chu so cuoi cung         
// 4^n -> 4 6 4 6             du 0 = (1+6+1+6)=14
int main(){
	char c[100005];
	scanf("%s",c);
	int r;
	if(strlen(c)==1){
		r=(c[0]-'0')%4;
	}
	else{
		r=(c[strlen(c)-2]-'0')*10 + c[strlen(c)-1]-'0';
		r%=4;
	}
	if(r==0) printf("4");
	else printf("0");
}
