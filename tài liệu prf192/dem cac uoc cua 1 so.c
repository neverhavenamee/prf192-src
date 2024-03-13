#include<stdio.h>
int count(int n){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(n%i==0) cnt++;
	}
	return cnt;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",count(n));
}
