#include<stdio.h>
//C1 kha giong sang so (khai bao mot mang)
//int main(){
//	int n;
//	scanf("%d",&n);
//	int a[n];
//	for (int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	int mark[10001]={0};
//	for (int i=0;i<n;i++){
//		if (!mark[a[i]]){
//			printf("%d ",a[i]);
//			mark[a[i]]=1;
//		}	
//	}
//}
//C2 cham hon nhung da dung hon
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++){
		int ok=1;
		for (int j=0;j<i;j++){
			if (a[j]==a[i]){
				ok=0;
				break;
			}
		}
		if (ok)printf("%d ",a[i]);
	}
}
