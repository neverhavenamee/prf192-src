#include<stdio.h>
#include<math.h>
long long phi(long long n){
	long long res=n;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0) n/=i;
			res-=res/i; //res=res*(1-1/i)	
		}
	}
	if(n!=1){
		res-=res/n;
	}
	return res;
}

int main(){
	long long n;
	scanf("%lld",&n);
	printf("%lld",phi(n));
}
