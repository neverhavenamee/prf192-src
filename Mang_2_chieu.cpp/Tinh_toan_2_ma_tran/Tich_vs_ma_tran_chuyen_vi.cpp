#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m],c[n][n];
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			c[i][j]=0;
			for (int k=0;k<m;k++){
				c[i][j]+=a[i][k]*a[j][k];
			}
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
