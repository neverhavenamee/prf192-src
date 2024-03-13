#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,a[n],b[n];
		scanf("%d",&n);
		for (int i=0;i<n;i++)scanf("%d",&a[i]);
		int dem=1,res=0,cnt=0;
		for (int i=1;i<n;i++){
			if (a[i-1]<a[i])++dem;
			else dem=1;
			if (dem>res){
				res=dem;
				b[0]=i-res+1;		//chi so dau tien cua cua so dau tien
				cnt=1;
			}else if (dem==res){
				b[cnt]=i-res+1;		//chi so dau tien cua cua so thu cnt
				++cnt;
			}
		}
		printf("%d\n",res);
		for (int i=0;i<cnt;i++){   //duyet cac cua so
			for (int j=0;j<res;j++){
				printf("%d ",a[b[i]+j]);//b[i] chi so dau tien cua cua so
			}
			printf("\n");
		}
	}
}
