#include<stdio.h>
//Tich lon nhat trong mang
long long MAX(long long a,long long b){
	return a>b?a:b;
}
/*Tim tich cua 2 so so lon nhat va so lon thu 2 va 
tich cua 2 so so nho nhat va so nho thu 2 roi
so sanh*/
int main(){
	int n,a[n];
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max1=-1e9-1,max2=-1e9-1;
	int min1=1e9+1,min2=1e9+1;
	for (int i=0;i<n;i++){
		if (a[i]>max1){
			max2=max1;
			max1=a[i];
		}
		else if (a[i]>max2)max2=a[i];
		if (a[i]<min1){
			min2=min1;
			min1=a[i];
		}
		else if (a[i]<min2)min2=a[i];
	}
	printf("%lld",MAX(1ll*min1*min2,1ll*max1*max2));
}
