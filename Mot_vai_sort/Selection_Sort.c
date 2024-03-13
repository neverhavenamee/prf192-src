#include<stdio.h>
void Selection_Sort(int a[1000],int n){
	int i,j;
	for (i=0;i<n;i++){
		int min=i;
		for (j=i+1;j<n;j++){
			if (a[min]>a[j]){
				min=j;
			}
		}
		int tmp=a[min];
		a[min]=a[i];
		a[i]=tmp;
	}
}
int main(){
	int a[1000];
	int n;
	scanf("%d",&n);
	int i;
	for (i=0;i<n;i++)scanf("%d",&a[i]);
	Selection_Sort(a,n);
	for (i=0;i<n;i++)printf("%d ",a[i]);
} 
