#include<stdio.h>
long long max(long long a,long long b){
	return a>b?a:b;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)scanf("%d",&a[i]);
	long long sum1=0,sum2=-1e9-1;
	for (int i=0;i<n;i++){
		sum1+=a[i];
		sum2=max(sum1,sum2);
		if (sum1<0)sum1=0;
	}
	printf("%lld",sum2);
}
