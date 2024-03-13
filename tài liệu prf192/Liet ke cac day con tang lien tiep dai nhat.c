#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int res=1;
	int cnt=0; // cnt : so luong day con
	int b[n]; //luu chi so cua cac day con lien tiep
	int dem=1; // chieu dai cua day con lien tiep
	for(int i=1;i<n;i++){
		if(a[i]>a[i-1]){
			dem++;
		}
		else{
			dem=1;
		}
		if(dem>res){
			res=dem;
			b[0]=i-res+1;
			cnt=1;
		}
		else if(dem==res){
			b[cnt]=i-res+1;
			cnt++;
		}
	}
		printf("%d\n",res);
		for(int i=0;i<cnt;i++){
			for(int j=0;j<res;j++){
				printf("%d ",a[b[i]+j]);
			}
			printf("\n");
	}
}
