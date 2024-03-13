#include<stdio.h>
void sorting(int a[],int n){
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (a[i]>a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int c=0,l=0;
	int chan[n],le[n];
	for (int i=0;i<n;i++){
		int x;scanf("%d",&x);
		if (!(x%2))chan[c++]=x;
		else le[l++]=x;
	}
	sorting(chan,c);
	sorting(le,l);
	for (int i=0;i<c;i++)printf("%d ",chan[i]);
	for (int i=0;i<l;i++)printf("%d ",le[i]);
}
