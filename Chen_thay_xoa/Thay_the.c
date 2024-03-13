#include<stdio.h>
//Vi du: Thay the so k vao vi tri truoc phan tu thu p
main(){
	int n;
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	int a[1000];
	int i;
	printf("Nhap cac phan tu trong mang:\n");
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	int k,p;
	printf("Nhap so k: ");
	scanf("%d",&k);
	printf("Nhap phan tu thu p: ");
	scanf("%d",&p);
	a[p-1]=k;
	for (i=0;i<n;i++)
		printf("%d ",a[i]);
}
