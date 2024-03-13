#include<stdio.h>
//Truong hop cac phan tu trong 1 mang khac nhau doi mot
//C1 ko dung mang ngoai
//int min(int a,int b){
//	return a<b?a:b;
//}
//int main(){
//	int n,m;
//	scanf("%d%d",&n,&m);
//	int a[n],b[m];
//	for (int i=0;i<n;i++)scanf("%d",&a[i]);
//	for (int i=0;i<m;i++)scanf("%d",&b[i]);
//	int i=0,j=0,g=0,h=0,hop[n+m],giao[min(n,m)];
//	while(i<n&&j<m){
//		if (a[i]==b[j]){
//			giao[g++]=a[i];
//			hop[h++]=a[i];
//			++j;++i;
//		}else{
//			if (a[i]<b[j])hop[h++]=a[i++];
//			else hop[h++]=b[j++];
//		}
//	}
//	while(i<n)hop[h++]=a[i++];
//	while(j<m)hop[h++]=b[j++];
//	for (int i=0;i<h;i++)printf("%d ",hop[i]);
//	printf("\n");
//	for (int i=0;i<g;i++)printf("%d ",giao[i]);
//}
//C2 dung mang ngoai
int min(int a,int b){
	return a<b?a:b;
}
int max(int a,int b){
	return a>b?a:b;
}
int cnt[10001]={0};
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int min_val=1e9,max_val=-1e9;
	int a[n],b[m];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
		cnt[a[i]]++;
		min_val=min(min_val,a[i]);
		max_val=max(max_val,a[i]);
	}
	for (int i=0;i<n;i++){
		scanf("%d",&b[i]);
		cnt[b[i]]++;
		min_val=min(min_val,b[i]);
		max_val=max(max_val,b[i]);
	}
	for (int i=min_val;i<=max_val;i++){
		if (cnt[i])printf("%d ",i);
	}
	printf("\n");
	for (int i=min_val;i<=max_val;i++){
		if (cnt[i]==2)printf("%d ",i);
	}
}

