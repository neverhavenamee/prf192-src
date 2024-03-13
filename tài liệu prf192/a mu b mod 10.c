#include<stdio.h>
int solve(int a,int b){
	int res=1;
	while(b){
		if(b%2==1){
		res*=a;
		res%=10;
	}
	a*=a;
	a%=10;
	b/=2;
	}
	return res;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",solve(a,b));
}
