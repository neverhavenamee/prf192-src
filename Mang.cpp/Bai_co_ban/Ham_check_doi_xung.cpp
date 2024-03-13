//ham kiem tra mang doi xung
#include<stdio.h>
int dx(int a[],int n){
	int l=0,r=n-1;
	while(l<r){
		if (a[l]!=a[r])return 0;
		++l;--r;
	}
	return 1;
}
int main(){
	int n,arr[n];
	scanf("%d",&n);
	for (int i=0;i<n;i++)scanf("%d",&arr[i]);
	if (dx(arr,n))printf("YES");
	else printf("NO");
}
