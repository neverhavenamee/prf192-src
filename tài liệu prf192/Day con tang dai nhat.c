#include<stdio.h>
int max(int a, int b){
	if(a>b) return a;
	return b;
}

int L[1000];
int main(){
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		L[i]=1;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>a[j]){
				L[i]=max(L[i],L[j]+1);
					printf("%d ",L[i]);	
			}
		}
	}
}

