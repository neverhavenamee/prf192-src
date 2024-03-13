#include<stdio.h>
#include<stdlib.h>
//Dung ham quicksort trong thu vien C

/*
Ham comparator la ham nhan 2 tham so tra ve so nguyen
Tra ve 3 gt am,duong,0 hien tai chi can biet tra ve gt am va duong
-Khi ban muon a dung truoc b trong thu tu sap xep thi ban se tra ve 1 so am thong thuong la -1
-Khi ban muon a dung sau b trong thu tu sap xep thi ban se tra ve 1 so duong thong thuong la 1
*Thu tu 
-Ep kieu 2 con tro thanh dang phu hop vs kdl cua mang VD int *x=(int*)a
*/
//Xep theo thu tu tang dan
/*
int cmp(const void *a,const void *b){
	int *x=(int*)a;
	int *y=(int*)b;
	if (*x<*y)return -1;
	return 1;
}
*/
//Xep theo thu tu giam dan
/*
int cmp(const void *a,const void *b){
	int *x=(int*)a;
	int *y=(int*)b;
	if (*x>*y)return -1;
	return 1;
}
*/
//Xep theo tri tuyet doi tang dan
/*
int cmp(const void *a,const void *b){
	int *x=(int*)a;
	int *y=(int*)b;
	return abs(*x)-abs(*y);
}
*/
//Xep theo tri tuyet doi tang dan so duong dung sau so am
/*
int cmp(const void *a,const void*b){
	int *x=(int*)a;
	int *y=(int*)b;
	if(abs(*x)!=abs(*y))return abs(*x)-abs(*y);
	if (*x>0)return 1;
	return -1;
}
*/
//Sap xep theo tong cac chu so tang dan so nao co tong bang nhau thi nho hon xep sau
int sum(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int cmp(const void *a,const void *b){
	int *x=(int*)a;
	int *y=(int*)b;
	if (sum(*x)!=sum(*y))return sum(*x)-sum(*y);
	return *y-*x;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
//	qsort(ten_mang,so_luong_phan_tu_mang,kich_thuoc_1_phan_tu_trong_mang,comparator(ten_cua_comparator));
	qsort(a,n,sizeof(int),cmp);
	for (int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
