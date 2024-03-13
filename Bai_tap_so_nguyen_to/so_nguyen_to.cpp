//bai 1 kiem tra co phai la so nguyen to ko
#include <stdio.h>
#include <math.h>
int prime[10001];
void sang_so(){
	for (int i=0;i<10000;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for (int i=2;i<10000;i++){
		for (int j=i*i;j<10000;j+=i){
			prime[j]=0;
		}
	}
}
int main(){
	sang_so();
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if (prime[n])printf("YES\n");
		else printf("NO\n");
	}
}
//bai 2 dem so thuan nguyen to trong doan a->b
int prime[10001];
void sang_so(){
	for (int i=0;i<10000;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for (int i=2;i<10000;i++){
		for (int j=i*i;j<10000;j+=i){
			prime[j]=0;
		}
	}
}
int check_digit(int n){
	while(n){
		int k=n%10;
		if (!(prime[k]))return 0;
		n/=10;
	}
	return 1;
}
int main(){
	sang_so();
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		int count=0;
		for (a;a<=b;a++){
			if (prime[a]&&check_digit(a))count++;
		}
		printf("%d ",count);
	}
}
//bai 3 liet ke cac so tu 1->n (dung sang so nguyen to)
int prime[10001];
int sang_so(){
	for (int i=0;i<10000;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for (int i=2;i<10000;i++){
		for (int j=i*i;j<10000;j+=i){
			prime[j]=0;
		}
	}
}
int main(){
	sang_so();
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		if(prime[i])printf("%d ",i);
	}
}
//bai 4 liet ke cap so nguyen to co tong bang n
int prime[10001];
int sieve(){
	for (int i=0;i<10000;i++)prime[i]=1;
	prime[0]=prime[1]=0;
	for (int i=2;i<10000;i++){
		for (int j=i*i;j<10000;j+=i){
			prime[j]=0;
		}
	}
}
int main(){
	int t;
	scanf("%d",&t);
	sieve();
	while(t--){
		int n;
		scanf("%d",&n);
		for (int i=2;i<=n/2;i++){
			if (prime[i]&&prime[n-i])printf("%d %d\n",i,n-i);
		}
	}
}
//bai 5 liet ke so thuan nguyen to(la so nguyen to, co cac chu so nguyen to 
//co tong chu so la so nguyen to) trong khoang tu a->b
int prime[100001];
int sieve(){
	for (int i=0;i<10000;i++)prime[i]=1;
	prime[0]=prime[1]=0;
	for (int i=2;i<10000;i++){
		for (int j=i*i;j<10000;j+=i)prime[j]=0;
	}
}
int prime_digits_sum(int n){
	int sum=0;
	while(n){
		int k=n%10;
		if (!(prime[k]))return 0;
		sum+=k;
		n/=10;
	}
	if (prime[sum])return 1;
	return 0;
}
int main(){
	sieve();
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		for (a;a<=b;a++){
			if (prime[a]&&prime_digits_sum(a))printf("%d ",a);
		}
		printf("\n");
	}
}
//bai 6 liet ke so co 3 uoc so tu 1->n
//so co 3 uoc so la binh phuong cua 1 so nguyen to
int prime[1001];
int sieve(){
	for (int i=0;i<=1000;i++)prime[i]=1;
	prime[0]=prime[1]=0;
	for (int i=2;i<=sqrt(1000);i++){//rut gon
		for (int j=i*i;j<=1000;j+=i)prime[j]=0;
	}
}
int main(){
	sieve();
	int t;
	scanf("%d",&t);
	while (t--){
		int n;
		scanf("%d",&n);
		for (int i=1;i<=sqrt(n);i++){//vi in ra la i*i
			if (prime[i])printf("%d ",i*i);
		}
		printf("\n");
	}
}
//bai 7 dem so co 3 uoc so tu 1->n
int prime[1001];
int sieve(){
	for (int i=0;i<=1000;i++)prime[i]=1;
	prime[0]=prime[1]=0;
	for (int i=2;i<=sqrt(1000);i++){
		for (int j=i*i;j<=1000;j+=i){
			prime[j]=0;
		}
	}
}
int main(){
	sieve();
	int t;
	scanf("%d",&t);
	while (t--){
		int n;
		scanf("%d",&n);
		int count=0;
		for (int i=1;i<=sqrt(n);i++){
			if (prime[i])count++;
		}
		printf("%d\n",count);
	}
}
//bai 8 dem so co 3 uoc trong khoang tu a->b
int prime[1001];
int sieve(){
	for (int i=1;i<=1000;i++)prime[i]=1;
	prime[1]=prime[0]=0;
	for (int i=2;i<=sqrt(1000);i++){
		for (int j=i*i;j<=1000;j+=i){
			prime[j]=0;
		}
	}
}
int main(){
	sieve();
	int t;
	scanf("%d",&t);
	while (t--){
		int a,b;
		scanf("%d%d",&a,&b);
		int count=0;
		for (int i=sqrt(a);i<=sqrt(b);i++){
			if (prime[i]&&i*i>=a){//tranh viec bi mat so khi sqrt lam tron
				count++;
			}
		printf("%d\n",count);
		}
	}
}
//bai 9 liet ke n so nguyen to dau tien
int prime[10001];
void sieve(){
	for (int i=0;i<=10000;++i)prime[i]=1;
	prime[0]=prime[1]=0;
	for (int i=2;i<=10000;++i){
		for (int j=i*i;j<=10000;j+=i)prime[j]=0;
	}
}
int main(){
	sieve();
	int n;
	scanf("%d",&n);
	int cnt=0,i=0;
	while(cnt<n){
		if (prime[i]){
			cnt++;
			printf("%d ",i);
		}
		++i;
	}
}

