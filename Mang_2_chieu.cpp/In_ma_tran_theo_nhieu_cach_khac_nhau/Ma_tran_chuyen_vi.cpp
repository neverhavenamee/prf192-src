#include<stdio.h>
/*
1 2 3		1 4 7
4 5 6  ->   2 5 8
7 8 9		3 6 9
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
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}
