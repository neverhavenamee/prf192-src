#include<stdio.h>
//Ko dung cua so truot
//int main(){
//	int n,k,idx;
//	scanf("%d%d",&n,&k);
//	int a[n];
//	for (int i=0;i<n;i++)scanf("%d",&a[i]);
//	long long res=-1e9-1;
//	for (int i=0;i<n-k+1;i++){
//		long long sum=0;
//		for (int j=0;j<k;j++){
//			sum+=a[i+j];
//		}
//		if (sum>=res){
//			res=sum;
//			idx=i;
//		}
//	}
//	printf("%lld\n",res);
//	for (int i=idx;i<k+idx;i++){
//		printf("%d ",a[i]);
//	}
//}

//Dung cua so truot
int main(){
	int n,k,idx;
	scanf("%d%d",&n,&k);
	int a[n];
	for (int i=0;i<n;i++)scanf("%d",&a[i]);
	long long res=0,sum=0;
	for (int i=0;i<k;i++)sum+=a[i];//tinh tong k phan tu dau tien
	res=sum;
	for (int i=1;i<n-k+1;i++){//chay tu phan tu thu 2
		sum=sum-a[i-1]+a[i+k-1];
		if (sum>=res){
			res=sum;
			idx=i;
		}
	}
	printf("%lld\n",res);
	for (int i=idx;i<k+idx;i++){
		printf("%d ",a[i]);
	}
}
