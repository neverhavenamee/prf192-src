#include<stdio.h>
#include<math.h>
#define ll long long
//Cac cach cho phep luy thua
ll pow1(int a,int b){
	ll res=1;
	for (int i=1;i<=b;i++){
		res*=a;
	}
	return res;
}
ll pow2(int a,int b){
	ll res=1;
	while(b){
		if (b&1)res*=a;
		b/=2;
		a*=a;
	}
	return res;
}
ll pow3(int a,int b){
	if (!b)return 1;
	ll x=pow3(a,b/2);
	if (b&1)return x*x*a;
	else return x*x;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d %d %d",pow1(a,b),pow2(a,b),pow3(a,b));
}
