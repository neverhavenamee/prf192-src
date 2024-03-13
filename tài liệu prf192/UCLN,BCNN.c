#include<stdio.h>
long long min(long long a, long long b){
	if(a>b) return b;
	return a;
	
}
long long gcd(long long a,long long b){
	if(a==0||b==0) return a+b;
	for(long long i=min(a,b);i>=1;i--){
		if(a%i==0 && b%i==0) return i;
	}
}

long long lcm(long long a, long long b){
	return (a*b/gcd(a,b));
}

int main(){
	long long a,b;
	printf("Nhap vao 2 so a va b: ");
	scanf("%d %d",&a,&b);
	printf("gcd: %d",gcd(a,b));
	printf("\nlcm: %d",lcm(a,b));
}
