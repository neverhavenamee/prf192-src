#include<stdio.h>
int solve(int n,int k){
	int x=k/(n-1);
	int r=k%(n-1);
	if(r==0) return x*n-1;
	else return x*n+r;
}

int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	printf("%d",solve(n,k));
}
