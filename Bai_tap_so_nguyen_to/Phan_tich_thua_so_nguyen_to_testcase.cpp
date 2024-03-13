#include<stdio.h>
#include<math.h>
//Phan tich thuc so nguyen to nhieu test case
//Su dung sang bien doi
//bai 1 
//Input			Output
//3				2(2) 3(1) 5(1)
//
//60				2(7)
//
//128				2(4) 5(4)
//
//10000
int prime[10001];
void sieve(){
	for (int i=1;i<=10000;i++)prime[i]=i;
	for (int i=2;i<=sqrt(10000);i++){
		for (int j=i*i;j<=10000;j+=i){
			if (prime[j]==j)prime[j]=i;
		}
	}
}
void pt(int n){
	while (n!=1){
		int cnt=0;
		int tmp=prime[n];
		while(n%tmp==0){
			++cnt;
			n/=tmp;
		}
		printf("%d(%d) ",tmp,cnt);
	}
	printf("\n");
}
int main(){
	sieve();
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		pt(n);
	}
}
