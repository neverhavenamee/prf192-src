long long max(int a, int b){
	return a>b?a:b;
}
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	long long sum1=0, sum2=-1e18;
	for(int i=0;i<n;i++){
		sum1+=a[i];
		sum2=max(sum1,sum2);
		if(sum1<0) sum1=0;
	}
	printf("%lld",sum2);
}
