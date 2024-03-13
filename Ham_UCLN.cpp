#include <stdio.h>
//Ham uoc chung lon nhat
//C1
int gcd(int a,int b){
	while(b!=0){
		int r=a%b;
		a=b;
		b=r
	}
	return a;
}
//C2
int gcd(int a,int b){
	if (b==0)return a;
	return gcd(b,a%b);
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",gcd(a,b));
}
//bai 1
//liet ke cac cap so nguyen to cung nhau tren doan 1->n
int gcd(int a, int b){
	if (b==0)return a;
	return gcd(b,a%b);
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for (a;a<=b;a++){
		for (int i=a+1;i<=b;i++){
			if (gcd(a,i)==1)printf("(%d,%d) ",a,i);
		}
	}
}
