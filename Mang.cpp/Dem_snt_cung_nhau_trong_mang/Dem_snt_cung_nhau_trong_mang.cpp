#include<stdio.h>
//Dem cap nguyen to cung nhau trong mang
int gcd(int a,int b){
	if (!b)return a;
	return gcd(b,a%b);
}
int main(){
	int n,a[n];
	scanf("%d",&n);
	for (int i=0;i<n;i++)scanf("%d",&a[i]);
	long long cnt=0;
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (gcd(a[i],a[j])==1)cnt++;
		}
	}
	printf("%d",cnt);
}
