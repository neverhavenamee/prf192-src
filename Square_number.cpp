#include <stdio.h>
#include<math.h>
//Bai 1 check co phai so chinh phuong hay ko
int square_number(int n){
	int x=sqrt(n);
	if (x==sqrt(n))return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	if (square_number(n))printf("YES");
	else printf("NO");
}
//bai 2 dem so chinh phuong tu 1->n
int square_number(int n){
	int x=sqrt(n);
	if (x==sqrt(n))return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	int count=0;
	for (int i=1;i<=n;i++){
		if (square_number(i))count++;
	}
	printf("%d",count);
}
//bai 3: liet ke so chinh phuong tu a->b
int square_number(int n){
	int x=sqrt(n);
	if (x==sqrt(n))return 1;
	else return 0;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for (a;a<=b;a++){
		if (square_number(a))printf("%d ",a);
	}
}
//bai 4 liet ke cac so vua la chinh phuong vua chia het cho 5
int divide5(int n){
	if (!(n%5))return 1;
	return 0;
}
int square(int n){
	int x=sqrt(n);
	if (x==sqrt(n))return 1;
	return 0;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for (a;a<=b;a++){
		if (divide5(a)&&square(a))printf("%d ",a);
	}
}
//bai 5 liet ke so la so chinh phuong, co tong cac chu so la so nguyen to 
int prime(int n){
	for (int i=2;i<=sqrt(n);i++){
		if (!(n%i))return 0;
	}	
	return n>1;
}
int sum_digits(int n){
	int sum=0;
	while (n){
		sum+=n%10;
		n/=10;
	}
	return prime(sum);
}
int square(int n){
	int x=sqrt(n);
	if (x==sqrt(n))return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		if (square(i)&&sum_digits(i))printf("%d ",i);
	}
}
