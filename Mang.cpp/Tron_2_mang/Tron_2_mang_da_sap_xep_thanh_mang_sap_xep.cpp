#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n],b[m];
	for (int i=0;i<n;i++)scanf("%d",&a[i]);
	for (int i=0;i<m;i++)scanf("%d",&b[i]);
	int i=0,j=0,k=0,c[n+m];
	while(i<n&&j<m){
		if (a[i]<=b[j])c[k++]=a[i++];
		else c[k++]=b[j++];
	}
	while(i<n)c[k++]=a[i++];
	while(j<m)c[k++]=b[j++];
	for (int i=0;i<n+m;i++)printf("%d ",c[i]);
}
