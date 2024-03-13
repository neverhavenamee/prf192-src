#include<stdio.h>
int hoanhao(int n){	
	int S=0;
	for(int i = 1; i <n; i++)
    {
        if(n%i==0) S+=i;
    }
    if(S==n) return 1;
	else
        return 0;
}

int main()
{
	int n;
	do{
		printf("Nhap vao n:");
		scanf("%d",&n);
	}while(n<=0);
	for(int i=1;i<=n;i++)
		if(hoanhao(i)) printf("%d ",i);
}

