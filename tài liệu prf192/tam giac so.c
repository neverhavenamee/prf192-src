#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf("~");
		}
		int cnt=2;
		for(j=1;j<=2*i-1;j++){
			if(j<i) printf("%d",cnt), cnt+=2;
			else printf("%d",cnt), cnt-=2;
		}
		printf("\n");
	}
}
