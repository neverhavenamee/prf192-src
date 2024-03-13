#include <stdio.h>
//Nhap vao 2 so tim` cong sai va 10 so tiep theo
int main()
{
	int a,b;
	printf("Nhap vao 2 so a va b:");
	scanf("%d%d",&a,&b);
	int cs= b-a;
	printf("Cong sai la: %d",cs);
    int s10= 10*cs;
	printf("gia tri cua phan tu thu 10 la:%d",s10);
	int tong = (10*(a+s10))/2;
	printf("Tong cua 10 so hang dau la:%d",tong);
	return 0;
}
