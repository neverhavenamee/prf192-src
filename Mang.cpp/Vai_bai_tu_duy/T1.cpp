#include<stdio.h>
//Bai Lineland
short MIN(short a,short b){
	return a<b?a:b;
}
short MAX(short a,short b){
	return a>b?a:b;
}
int main(){
	short n,a[n];
	scanf("%hd",&n);
	for (short i=0;i<n;i++)scanf("%hd",&a[i]);
	for (short i=0;i<n;i++){
		if (!i)printf("%hd %hd\n",a[1]-a[0],a[n-1]-a[0]);
		else if (i==n-1)printf("%hd %hd\n",a[n-1]-a[n-2],a[n-1]-a[0]);
		else printf("%hd %hd\n",MIN(a[i]-a[i-1],a[i+1]-a[i]),MAX(a[n-1]-a[i],a[i]-a[0]));
	}
}
//Bai ve xem phim
//int check(int a[],int n){
//	int c25=0,c50=0;
//	for (int i=0;i<n;i++){
//		if (a[i]==25)++c25;
//		else if (a[i]==50){
//			if (c25==0)return 0;
//				--c25;
//				++c50;
//		}
//		if (a[i]==100){
//			if (c25==0||(25*c25+50*c50)<75)return 0;
//			else if (c50!=0){
//				--c25;
//				--c50;
//			}else c25-=3;
//		}	
//	}
//	return 1;
//}
//int main(){
//	int n,a[n];
//	scanf("%d",&n);
//	for (int i=0;i<n;i++)scanf("%d",&a[i]);
//	if (check(a,n))printf("YES");
//	else printf("NO");
//}

