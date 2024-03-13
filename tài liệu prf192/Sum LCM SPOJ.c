#include<stdio.h>
#include<math.h>
#define ll long long
int p[1000001];
int res[1000001];
void sieve1(){
	for(int i=1;i<=1000000;i++){
		p[i]=i;
	}
	for(int i=2;i<=1000000;i++){
		if(p[i]==i){
			p[i]=i-1;
			for(int j=i*2;j<=1000000;j+=i){
				p[j]=p[j]-p[j]/i;
			}
		}
	}
}

void sieve2(){
	for(int i=1;i<=1000000;i++){
		for(int j=i;j<=1000000;j+=i){
			res[j]+=i*p[i];
		}
	}
}

int main(){
	sieve1();
	sieve2();
	int n;
	scanf("%d",&n);
	printf("%lld",(res[n]+1)*n/2);
}
