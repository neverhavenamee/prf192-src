#include<stdio.h>
void sort(int a[],int n){
	for (int i=0;i<n;i++){
		int min=i;
		for (int j=i+1;j<n;j++)if(a[j]<a[min])min=j;
		if (i!=min){
			int tmp=a[i];
			a[i]=a[min];
			a[min]=tmp;
		}
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		for (int i=0;i<n;i++)scanf("%d",&a[i]);
		sort(a,n);
		int res=1e9,cnt=0;
		for (int i=1;i<n;i++){
			if (a[i]-a[i-1]<res){
				res=a[i]-a[i-1];
				cnt=1;
			}else if (a[i]-a[i-1]==res){
				cnt++;
			}
		}
		printf("%d %d\n",res,cnt);
	}
}
