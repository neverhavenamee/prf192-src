#include<stdio.h>
/*
1 2 3		9 8 7
4 5 6  ->   6 5 4
7 8 9		3 2 1
*/
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (int i=n-1;i>=0;i--){
		for (int j=n-1;j>=0;j--){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
