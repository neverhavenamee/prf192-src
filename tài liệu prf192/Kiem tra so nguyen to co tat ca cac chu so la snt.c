#include<stdio.h>
int prime(int n){
	for(int i=2;i<=n;i++){
		if(n%i==0) return 0;
		else return 1;
	}
}

int digitprime(int n){
	while(n){
		int r=n%10;
		if(r!=2&&r!=3&&r!=5&&r!=7)
		return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d %d",&a,&b);
		int cnt=0;
		for(int i=a;i<=b;i++){
			if(prime(i)&&digitprime(i))
			cnt++;
		}
		printf("%d",cnt);
	}
}
