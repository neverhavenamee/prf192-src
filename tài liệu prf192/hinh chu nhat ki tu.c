#include<stdio.h>
int min(int a, int b){
	if(a<b) return a;
	return b;
}
int main(){
	int i,j,n,m;
	scanf("%d %d",&n,&m);
	for(i=n;i>=1;i--){
		int init=min(i,m);
		for(j=1;j<=m;j++){
			if(j<=m-i) printf("%c",64+init++);
			else printf("%c",64+init);
		}
		printf("\n");
	}
}
