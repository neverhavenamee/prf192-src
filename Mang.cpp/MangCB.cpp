#include <stdio.h>
#include <math.h>
////bai 1 tinh tong cac phan tu trong mang
//void in(int a[],int n){
//	for (int i=0;i<n;i++)scanf("%d",&a[i]);
//}
//int sumM(int a[],int n){
//	int sum=0;
//	for (int i=0;i<n;i++){
//		sum+=a[i];
//	}
//	return sum;
//}
//int main(){
//	int a[1000],n;
//	scanf("%d",&n);
//	in(a,n);
//	printf("%d",sumM(a,n));
//}
//bai 2 dem so nguyen to trong mang
//int prime(int n){
//	for (int i=2;i<=sqrt(n);i++){
//		if (!(n%i))return 0;
//	}
//	return n>1;
//}
//int main(){
//	int n,a[n];
//	scanf("%d",&n);
//	int count=0;
//	for (int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//		if (prime(a[i]))count++;
//	}
//	printf("%d",count);
//}
//bai 3 tinh tong so nguyen to trong mang 2 chieu
int prime (int n){
	for (int i=2;i<=sqrt(n);i++)
	if (!(n%i))return 0;
	return n>1;
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m];
	int sum=0;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
			if (prime(a[i][j]))sum+=a[i][j];
		}
	}
	printf("%d",sum);
}
