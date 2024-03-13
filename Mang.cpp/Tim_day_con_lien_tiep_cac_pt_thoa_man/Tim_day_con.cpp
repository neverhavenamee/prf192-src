#include<stdio.h>
//Cac phan tu lien ke khac nhau
//int check(int a,int b){
//	return a>b?a:b;
//}
//int main(){
//	int n,a[n];
//	scanf("%d",&n);
//	for (int i=0;i<n;i++)scanf("%d",&a[i]);
//	int res=0,cnt=1;
//	for (int i=0;i<n;i++){
//		if (a[i-1]!=a[i])++cnt;
//		else cnt=1;
//		res=check(res,cnt);
//	}
//	printf("%d",res);
//}
//Cac phan tu giong nhau
//int check(int a,int b){
//	return a>b?a:b;
//}
//int main(){
//	int n,a[n];
//	scanf("%d",&n);
//	for (int i=0;i<n;i++)scanf("%d",&a[i]);
//	int res=0,cnt=1;
//	for (int i=0;i<n;i++){
//		if (a[i-1]==a[i])++cnt;
//		else cnt=1;
//		res=check(res,cnt);
//	}
//	printf("%d",res);
//}
//Cac phan tu trai dau nhau
int check(int a,int b){
	return a>b?a:b;
}
int main(){
	int n,a[n];
	scanf("%d",&n);
	for (int i=0;i<n;i++)scanf("%d",&a[i]);
	int res=0,cnt=1;
	for (int i=0;i<n;i++){
		if (a[i-1]*a[i]<0)++cnt;
		else cnt=1;
		res=check(res,cnt);
	}
	if (res==1)printf("0");
	else printf("%d",res);
}
