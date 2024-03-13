#include<stdio.h>
//Dung mang ben ngoai
//Co cung so lan xuat hien in ra cai nho hon
//int cnt[10001]={0};
//int main(){
//	int n;
//	scanf("%d",&n);
//	int a[n];
//	for (int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for (int i=0;i<n;i++){
//		++cnt[a[i]];
//	}
//	int dem=0,res;
//	for (int i=0;i<n;i++){
//		if (cnt[a[i]]>dem){
//			dem=cnt[a[i]];
//			res=a[i];
//		}else if (cnt[a[i]]==dem){
//			if (res>a[i])res=a[i];
//		}
//	}
//	printf("%d %d",res,dem);
//}
//In ra cai truoc
//int cnt[10001]={0};
//int main(){
//	int n;
//	scanf("%d",&n);
//	int a[n];
//	for (int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for (int i=0;i<n;i++){
//		++cnt[a[i]];
//	}
//	int dem=0,res;
//	for (int i=0;i<n;i++){
//		if (cnt[a[i]]>dem){
//			dem=cnt[a[i]];
//			res=a[i];
//		}
//	}
//	printf("%d %d",res,dem);
//}
//Ko dung mang ngoai
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int dem=0,res;
	for (int i=0;i<n;i++){
		int cnt=1;//chinh la a[i];
		for(int j=i+1;j<n;j++){
			if (a[i]==a[j])++cnt;
		}
		if (dem<cnt){
			dem=cnt;
			res=a[i];
		}
	}
	printf("%d %d",res,dem);
}
