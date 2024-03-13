#include<stdio.h>
int solve(int n){
	if(n%4==0) printf("6");
	if(n%4==1) printf("8");
	if(n%4==2) printf("4");
	if(n%4==3) printf("2");
}

int main(){
	int n;
	scanf("%d",&n);
	solve(n);
}
