#include<stdio.h>
int swap(int a, int b){
	int t;
	t=a;
	a=b;
	b=t;
	printf("%d%d ",a,b);
}

int main(){
	int a,b,t;
	printf("Nhap vao 2 so a va b:");
	scanf("%d%d ",&a,&b);
	swap(a,b);
}
