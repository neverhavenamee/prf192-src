#include<stdio.h>
//Dung tong tien to
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int prefix[n];
	for (int i=0;i<n;i++){
		if (!i)prefix[0]=a[0];
		else prefix[i]=prefix[i-1]+a[i];
	}
	int q;
	scanf("%d",&q);
	while(q--){
		int l,r;
		scanf("%d%d",&l,&r);
		if (!(l-1))printf("%d",prefix[r-1]);
		else printf("%d",prefix[r-1]-prefix[l-2]);
		printf("\n");
	}
}
