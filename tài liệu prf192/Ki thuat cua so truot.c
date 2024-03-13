#include <stdio.h>
long long max(long long a, long long b){
		return a<b? b :a;
}
int main() {
	int n,k;
	scanf("%d%d",&n,&k);
	int a[n];
	for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	long long res = 0, idx=0, sum=0;
	for (int i=0;i<k;i++) sum += a[i];
	res = sum;
	for(int i=1;i<n-k+1;i++){
	sum = sum -a[i-1] + a[i+k-1]; ;
	if(sum>=res){
		res = sum;
		idx = i;
		}
	}
	printf("%11d\n",res);
	for(int i=0;i<k; i++){
	printf("%d ",a[i+idx]);
	}
}
