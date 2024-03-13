#include<stdio.h>
#include<math.h>
#define ll long long
ll pow1(int a, int b){
	ll res=1;
	while(b){
		if(b%2==1) res*=a;
		b/=2;
		a*=a;
	}
	return res;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%lld",pow1(a,b));
}
