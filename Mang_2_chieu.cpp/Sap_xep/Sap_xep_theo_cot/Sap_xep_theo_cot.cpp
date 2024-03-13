#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
	return *(int*)a-*(int*)b;
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m],b[m][n];
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++)b[i][j]=a[j][i];
	}
	for (int i=0;i<m;i++)
	qsort(b[i],n,sizeof(int),cmp);
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			printf("%d ",b[j][i]);
		}
		printf("\n");
	}
}
