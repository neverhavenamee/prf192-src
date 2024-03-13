#include<stdio.h>
//Vi du: Xoa phan tu thu p
main(){
	int n;
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	int a[1000];
	int i;
	printf("Nhap cac phan tu trong mang:\n");
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	int p;
	printf("Nhap phan tu thu p: ");
	scanf("%d",&p);
	for (i=p;i<n;i++){
		a[i-1]=a[i];
	}
	n--;
	for (i=0;i<n;i++)
		printf("%d ",a[i]);
}
