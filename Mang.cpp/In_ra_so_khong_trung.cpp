#include <stdio.h>
int main(){
    int a[100];
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++)scanf("%d",&a[i]);
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (i==j)continue;
			if (a[i]==a[j]){
				n--;
				int k=j;
				while(k<n){
					a[k]=a[k+1];
					k++;
				}
				j=0;
			}
		}
	}
	for (int i=0;i<n;i++)printf("%d ",a[i]);
}
