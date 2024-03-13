#include<stdio.h>
#include<math.h>
int KiemTraSoNguyenTo(int n) 
{
	int j;
	if(n<=1) return 0;
	for(j=2; j<n; j++)
	{
		if(n%j==0) return 0;
	}
	return 1;
}

int main(){
	int n;
	int i;
	do {
		printf("Nhap n=");
		scanf("%d",&n);
	}while(n<1);
	
	for(i=2; i<=n; i++){
		if(KiemTraSoNguyenTo(i)){
			printf("%d ",i);
		}
	}
}

