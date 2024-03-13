#include<stdio.h>
#include<math.h>
float PT2(int a, int b, int c){
	if(a==0){
		if(b==0) printf("Phuong trinh vo nghiem!");
		else printf("Phuong trinh co nghiem duy nhat:x=%f ",-c/b);
	}
	
	float x,x1,x2;
	float delta=b*b-4*a*c;
	if(delta>0){
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf("Phuonng trinh co 2 nghiem phan biet la: x1= %f, x2=%f",x1,x2);
	}
	else if(delta==0) printf("Phuong trinh co nghiem nhat x= %f",-b/2*a);
	else printf("Phuong trinh vo nghiem!");
}

int main(){
	int a,b,c;
	printf("Nhap vao a,b,c: ");
	scanf("%d",&a,&b,&c);
	PT2(a,b,c);
}
