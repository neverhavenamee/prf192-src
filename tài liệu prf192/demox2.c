#include<stdio.h>
int main(){
	int n,m;
	scanf("%d %d",&n, &m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",a[i][j]);
		}
	}
	printf("%d",sumMainCross(a,n,m));
}
int sumMainCross(int a[][50], int n, int m){
	int sum=0;
	if(n==m){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(i==j){
				sum+=a[i][j];
				}
			}
		}
		return sum;
	}
}
