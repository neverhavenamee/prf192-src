#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		int cnt=i;
		for(j=1;j<=n;j++){
			if(j<i) printf("%d",cnt--);
			else printf("%d",cnt++);
		}
		printf("\n");
	}
}
