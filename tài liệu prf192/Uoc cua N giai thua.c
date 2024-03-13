#include<stdio.h>
#include<math.h>
//Tim bac cua snt p trong n!
int degree1(int n, int p){
	int ans=0;
	for(int i=p;i<=n;i+=p){
		int tmp=i;
		while(tmp%i==0){
			ans++;
			tmp/=p;
		}
	}
	return ans;
}

//cong thuc legendre
int degree2(int n,int p){
	int ans=0;
	for(int i=p;i<=n;i*=p){
		ans+=n/i;
	}
	return ans;
}

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
		return n>1;
}

long long countDivisor(int n){
	long long res=1;
	for(int i=1;i<=n;i++){
		if(nt(i)) res *=degree2(n,i)+1;
	}
	return res;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%lld",countDivisor(10));
}
