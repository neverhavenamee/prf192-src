#include<stdio.h>
#include<math.h>
int ChinhPhuong(int n){
	int sqr=sqrt(n);
	if(sqrt(n)*sqrt(n)==n) return 1;
	return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",ChinhPhuong(n));
}
