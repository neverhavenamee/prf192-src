#include<stdio.h>
#include<math.h>
int prime[1000001];
int sieve(){
	for(int i=0;i<=1000000;i++){
		prime[i]=i;
		prime[0]=prime[1]=0;
	}
	
	for(int i=2;i<=1000;i++){
		if(prime[i]){
			for(int j=i*i;j<=1000000;j+=i){
				if(prime[j]==j)
					prime[j]=i;
			}
		}
	}
}

int check_Smith(int n){
	if(prime[n]!=n){
		int tmp=n;
		int sum_digit=0;
		while(tmp){
			sum_digit+=tmp%10;
			tmp/10;
		}
		int sum_prime=0;
		while(prime[n]!=0 && prime[n]!=1)
		{
			int tmp1=prime[n];
			while(tmp){
				sum_prime=tmp1%10;
				tmp1/=10;
			}
			n/=prime[n];
		}
		if(sum_digit==sum_prime) printf("True");
			else printf("No");
	}
}

int main(){
	sieve();
	int n;
	scanf("%d",&n);
	check_Smith(n);
}
