#include<stdio.h>
#include<math.h>

#define ll long long

ll gcd(ll a, ll b){
	if(b==0) return a;
	return gcd(b,a%b);
}

ll lcm(ll a, ll b){
	return a/gcd(a,b)*b;
}

ll solve(int n, int x, int y, int z){
	int tmp=lcm(x,lcm(y,z));
	ll m=pow(10,n-1);
	ll res = (m+tmp-1)/tmp*tmp;
	if(res<(ll)pow(10,n)) return res;
	return -1;
}

int main(){
	int n,x,y,z;
	scanf("%d%d%d%d",x,y,z,n);
	printf("%lld",res);
}
