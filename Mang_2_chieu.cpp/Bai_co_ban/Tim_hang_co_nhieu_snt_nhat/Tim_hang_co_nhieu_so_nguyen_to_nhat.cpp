#include<stdio.h>
#include<math.h>
int prime(int n){
	for (int i=2;i<=sqrt(n);i++){
		if (!(n%i))return 0;
	}
	return n>1;
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m];
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int res=-1e9,tmp=0;
	for (int i=0;i<n;i++){
		int cnt=0;
		for (int j=0;j<m;j++){
			if (prime(a[i][j]))++cnt;
		}
		if (cnt>res){
			res=cnt;
			tmp=i;
		}
	}
	printf("%d\n",tmp+1);
	for (int j=0;j<m;j++)
	if (prime(a[tmp][j]))printf("%d ",a[tmp][j]);
}
