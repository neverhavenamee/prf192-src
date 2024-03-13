#include<stdio.h>
#include<math.h>
#define ll long long
/*
ll gcd(ll a,ll b){
	if (b==0)return a;
	return gcd(b,a%b);
}
ll lcm(ll a,ll b){
	return a/gcd(a,b)*b;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",lcm(a,b));
}
*/
//bai 1 Tim so nguyen duong nho nhat chia het cho x,y,z
int gcd(ll a,ll b){
	if(b==0)return a;
	return gcd(b,a%b);
}
int lcd(ll a,ll b){
	return a/gcd(a,b)*b;
}
int solve(ll a, ll b, ll c,ll n){
	ll tmp=lcd(lcd(a,b),c);
	ll w=(ll)pow(10,n-1);
	ll ans=(w+tmp-1)/tmp*tmp;
	if (ans<(ll)pow(10,n))return ans;
	return -1;
}
int main(){
	int x,y,z,n;
	scanf("%d%d%d%d",&x,&y,&z,&n);
	printf("%lld",solve(x,y,z,n));
}
