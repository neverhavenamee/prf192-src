#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
//Check so chan
int even(int n){
	return !(n&1);
}
//Check so le
int odd(int n){
	return n&1;
}
//Check so lon hon 0
int pos(int n){
	return n>0;
}
//Check so nho hon 0
int neg(int n){
	return n<0;
}
//Check so nguyen
int integer(float n){
	int x=n;
	return x==n;
}
//Check so nguyen to
	//C1
int prime1(int n){
	int i;
	for (i=2;i<=sqrt(n);i++)if (!(n%i))return 0;
	return n>1;
}
	//C2
int prime2[10001];
void sieve(){
	int i;
	for (i=0;i<=10000;i++)prime2[i]=1;
	prime2[0]=prime2[1]=0;
	for (i=2;i<=10000;i++){
		int j;
		for (j=i*i;j<=sqrt(10000);j+=i){
			if (prime2[j])prime2[j]=0;
		}
	}
}
int check_prime(int n){
	return prime2[n];
}
//Check so thuan nguyen to
int pure_prime(int n){
	int m=n;
	int sum=0;
	while(n){
		if (!prime1(n%10))return 0;
		sum+=n%10;
		n/=10;
	}
	return prime1(sum)&&prime1(m);
}
//Check so thuan nghich
int reverse(int n){
	int a=n,d=0;
	while(n){
		d=d*10+n%10;
		n/=10;
	}
	return d==a;
}
//Check so strong
int factorial(int n){
	if (!n)return 1;
	return n*factorial(n-1);
}
int strong(int n){
	int m=n;
	int sum=0;
	while (n){
		sum+=factorial(n%10);
		n/=10;
	}
	return sum==m;
}
//Check so armstrong
int armstrong(int n){
	int sum=0;
	int m=n;
	while(n){
		sum+=pow(n%10,3);
		n/=10;
	}
	return sum==m;
}
//Check so chinh phuong
int square(int n){
	int x=sqrt(n);
	return x==sqrt(n);
}
//Check so fibo
	//C1
int fibo1(long long n){
	if (n==0||n==1)return 1;
	long long x0=1,x1=1;
	int i;
	for (i=2;i<92;i++){
		long long x2=x0+x1;
		if (n==x2)return 1;
		x0=x1;
		x1=x2;	
	}
	return 0;
}
	//C2
int fibo2[100];
void init(){
	int i;
	fibo2[0]=0;
	fibo2[1]=1;
	for (i=2;i<=92;i++){
		fibo2[i]=fibo2[i-1]=fibo2[i-2];
	}
}
int check_fibo(int n){
	int i;
	for (i=0;i<=92;i++){
		if (fibo2[i]==n)return 1;
	}
	return 0;
}
//Check so TNUM
int TNUM(int n){
	int x=sqrt(n);
	return prime1(x)&&square(n);
}
//Check so sphenic
int Sphenic(int n){
	int res=0;
	int i;
	for (i=2;i<=sqrt(n);i++){
		int cnt=0;
		while (n%i==0){
			++cnt;
			n/=i;
		}
		if (cnt>=2)return 0;
		if (cnt==1)++res;
	}
	if (n!=1)++res;
	return res==3;
}
//Check so SMITH
int sum_digit(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int SMITH(int n){
	int sum1=sum_digit(n);
	int sum2=0;
	int ok=n;
	int i;
	for (i=2;i<=sqrt(n);i++){
		while (!(n%i)){
			sum2+=sum_digit(i);
			n/=i;
		}
	}
	if (ok==n)return 0;
	if (n!=1)sum2+=sum_digit(n);
	return sum1==sum2;
}
//Check so loc phat
int locphat(int n){
	while (n){
		int k=n%10;
		if (k==1||k==2||k==3||k==4||k==5||k==7||k==9)return 0;
		n/=10;
	}
	return 1;
}
//Check so hoan hao
	//C1
int perfect1(long long n){
	long long sum=1;
	int i;
	for (i=2;i<=sqrt(n);i++){
		if (!(n%i)){
			if (i!=n/i){
				sum+=i+n/i;
			}	
			else sum+=i;
		}
	}
	return sum==n;
}
	//C2
int perfect2(long long n){
	int i;
	for (i=2;i<=32;i++){
		if (prime1(i)){
			long long tmp=(int)pow(2,i)-1;
			if (prime1(tmp)){
				long long sum=tmp*((int)pow(2,i-1));
				if (sum==n)return 1;	
			}
		}
	}
	return 0;
}
//Check cap so nguyen to cung nhau
int gcd(int a,int b){
	if (!b)return a;
	return gcd(b,a%b);
}
int co_prime(int a,int b){
	return gcd(a,b)==1;
}
//Check so tang
int increasing(int n){
	while (n){
		if (n/10%10>n%10)return 0;
		n/=10;
	}
	return 1;
}
//Check so giam
int decreasing (int n){
	while (n){
		if (n/10%10<n%10)return 0;
		n/=10;
	}
	return 1;
}
//Check so thuan chan
int pure_even(int n){
	if(!n)return 1;
	if (n&1)return 0;
	return pure_even(n/10);
}
//Check so thuan le
int pure_odd(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		if (!(n&1))return 0;
	}
	return sum&1;
}
int main(){
	long long n;
	scanf("%lld",&n);
	printf("%d",perfect1(n));
}
