//sang so nguyen to dc dung trong th ma nhieu test case va co mien gt lon 10^6
#include<stdio.h>
int prime [10001];
void sieve(){
//	Coi tat ca cac so tu 0 -> n la so nguyen to
//	printf[i]=1
//	printf[i]=0
	for (int i=0;i<10000;i++)
	prime[i]=1;
//	loai 0 va 1
	prime[0]=prime[1]=0;
	for (int i=2;i<=10000;i++){
//			Duyet tat ca cac boi cua i va cho no khong la so nguyen to
			for (int j=i*i;j<=10000;j+=i){
				prime[j]=0;//j ko con la so nguyen to nua
			}
	}
}
int main(){
	sieve();
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		if (prime[i])printf("%d ",i);
	}
}
