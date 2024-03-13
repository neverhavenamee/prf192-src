#include<stdio.h>
main(){
	int n,des,arr[10];
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&des);
	if (des>n){
		printf("Nhap lai: ");
	}else{
		for (int i=des-1;i<n-des+2;++i){
			arr[i]=arr[i+1];
		}
		for (int i=0;i<n-1;i++){
			printf("%d ",arr[i]);
		}
	}
}
