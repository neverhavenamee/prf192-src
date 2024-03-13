#include<stdio.h>
#include<stdlib.h>
//Dung mang luu

//int check[10001]={0};
//int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
//		int n;
//		scanf("%d",&n);
//		int a[n];
//		int tmp=0;
//		for (int i=0;i<n;i++)scanf("%d",&a[i]);
//		for (int i=0;i<n;i++){
//			if (check[a[i]]==1){
//				tmp=1;
//				printf("%d",a[i]);
//			}
//			check[a[i]]=1;
//		}
//		if (!tmp)printf("-1");
//		memset(cnt,0,sizeof(cnt));//reset phan tu ve gt 0
//	}
//}

//ko dung mang

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		for (int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int ok=1;
		for (int i=0;i<n;i++){
			for (int j=i+1;j<n;j++){
				if (a[i]==a[j]){
					printf("%d ",a[i]);
					ok=0;
				}
			}
		}
		if (ok)printf("-1");
	}
}
