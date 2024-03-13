#include<stdio.h>
#include<math.h>
int prime(int n){
	for (int i=2;i<=sqrt(n);i++)if (!(n%i))return 0;
	return n>1;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int cnt=0;
	if (n%2==1){
		for (int i=0;i<n;i++){
			if (prime(a[i][i]))++cnt;
			if (prime(a[i][n-i-1]))++cnt;
		}
		if (prime(a[n/2][n/2]))--cnt;
	}else{
		for (int i=0;i<n;i++){
			if (prime(a[i][i]))++cnt;
			if (prime(a[i][n-i-1]))++cnt;
		}
	}
	printf("%d",cnt);
}
