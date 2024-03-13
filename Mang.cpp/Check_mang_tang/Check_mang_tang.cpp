#include<stdio.h>
//Check mang tang dan
int check(int a[],int n){
	for (int i=0;i<n-1;i++){//n-1 tranh viec so sanh vs gia tri ngoai mang
		if (a[i+1]<=a[i])return 0;
	}
	return 1;
}
int main(){
	int n,a[n];
	scanf("%d",&n);
	for (int i=0;i<n;i++)scanf("%d",&a[i]);
	if (check(a,n))printf("YES");
	else printf("NO");
}
