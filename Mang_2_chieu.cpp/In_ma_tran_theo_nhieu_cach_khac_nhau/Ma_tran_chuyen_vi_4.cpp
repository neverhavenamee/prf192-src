#include<stdio.h>
/*
1 2 3		3 6 9
4 5 6  ->   2 5 8
7 8 9		1 4 7
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
		for (int j=0;j<n;j++){
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}
