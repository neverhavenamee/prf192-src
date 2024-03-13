#include<stdio.h>
int main()
{
	int i,j,n,m;
	scanf("%d %d",&n, &m);
	for(i=1;i<=n;i++){
		int init=i;
		for(j=1;j<m;j++){
			if(j<=m-i) printf("%d",init++);
			else printf("%d",init--);
		}
		printf("\n");
	}
}
