#include<stdio.h>
void Interchange_Sort(int a[1000],int n){
	int i,j;
	for (i=0;i<n;i++){
		for (j=i+1;j<n;j++){
			if (a[i]>a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}
int main(){
	int a[1000];
	int n;
	scanf("%d",&n);
	int i;
	for (i=0;i<n;i++)scanf("%d",&a[i]);
	Interchange_Sort(a,n);
	for (i=0;i<n;i++)printf("%d ",a[i]);
} 
