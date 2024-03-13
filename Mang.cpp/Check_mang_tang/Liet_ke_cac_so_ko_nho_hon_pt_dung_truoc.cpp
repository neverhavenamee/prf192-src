#include<stdio.h>
//Liet ke cac so khong nho hon phan tu dung truoc no
int main(){
	int n,a[n];
	scanf("%d",&n);
	for (int i=0;i<n;i++)scanf("%d",&a[i]);
	int max=a[0];
	for (int i=0;i<n;i++){
		if (max<=a[i])printf("%d ",a[i]);
		if (max<a[i])max=a[i];
	}
}
