#include<stdio.h>
#include<math.h>
//p2 tim uoc nho nhat
//Cach 1
int find1(int n){
	for (int i=2;i<=sqrt(n);i++){
		if (!(n%i))return i;
	}
	return n;
}
//Cach 2
int find2(int n){
	if(n==1)return 1;
	if (!(n%2))return 2;
	for (int i=3;i<=n;i+=2){
		if (!(n%i))return i;
	}
}
//Cach 3
int prime[10001];
void sieve(){
	for (int i=1;i<=10000;i++)prime[i]=i;
	for (int i=2;i<=sqrt(10000);i++){
		for (int j=i*i;j<=10000;j+=i){
			if (prime[j]==j)prime[j]=i;
		}
	}
}
int main(){
	sieve();
	int t;
	scanf("%d",&t);
	while (t--){
		int n;
		scanf("%d",&n);
		printf("%d %d %d\n",find1(n),find2(n),prime[n]);
	}
}

