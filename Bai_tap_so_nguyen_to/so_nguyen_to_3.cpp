#include<stdio.h>
#include <math.h>
//Bac cua so nguyen to trong n giai thua
//Input		Output
//3			9
//62 7		73
//76 2		0
//3 5
//C1

int count1(int n,int p){
	int count=0;
	for (int i=p;i<=n;i+=p){
			int x=n;
			while (!(x%p)){
				count++;
				x/=p;
		}
	}
	return count;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,p;
		scanf("%d%d",&n,&p);
		printf("%d",count1(n,p));
	}
}

//Ct giai nhanh bai nay
//Tim so mu cua p ma m! chia het cho p
//[m/p]+[m/p^2]+[m/p^3]...[m/p^n]
//Sao cho p^n<=m
//VD m=10 p=3
//so mu la [10/3]+[10/3^2]=4
//Ap dung ct tren
//C2

int count2(int n,int p){
	int ans=0;
	for (int i=p;i<=n;i*=p){
		ans+=n/i;
	}
	return ans;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,p;
		scanf("%d%d",&n,&p);
		printf("%d",count2(n,p));
	}
}

//Bai tap 2 Dem so 0 cua n giai thua
//C1

int count(int n){
	if (n<5)return 0;
	int count=0;
	for (int i=5;i<=n;i+=5){
		int tmp=n;
		while (!(tmp%5)){
			++count;
			tmp/=5;
		}
	}
	return count;
}
//C2
int count2(int n){
	int cnt=0;
	for (int i=5;i<=n;i*=5){
		cnt+=n/=i;
	}
	return cnt;
}
int main(){
	int t;
	scanf("%d",&t);
	while (t--){
		int n;
		scanf("%d",&n);
		printf("%d %d\n",count(n),count2(n));
	}
}

//Bai tap 3 So Sphenic
//La so la tich cua 3 thua so nguyen to khac nhau
int sphenic(int n){
	int res=0;
	for (int i=2;i<=sqrt(n);i++){
		int cnt=0;
		while(!(n%i)){
			++cnt;
			n/=i;
		}
		if (cnt>1)return 0;
		if (cnt==1) ++res;
	}
	if (n!=1)++res;
	return res==3;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%d\n",sphenic(n));
	}
}
//Bai tap 4 So Smith
//La so khong phai so nguyen to va tong cac chu so bang tong cac uoc so nguyen to 

int prime[10001];
void sieve(){
	for (int i=0;i<=10000;i++)prime[i]=i;
	for (int i=2;i<=sqrt(10000);i++){
		for (int j=i*i;j<=10000;j+=i)
		if (prime[j]==j)prime[j]=i;
	}
}
int sum_digit(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int sum_divisor(int n){
	int tmp2=n;
	int sum=0;
	while(n!=1){
		int tmp=prime[n];
		while(!(n%tmp)){
			sum+=sum_digit(tmp);
			n/=tmp;
		}
	}
	return sum==sum_digit(tmp2);
}
int no_prime(int n){
	for (int i=2;i<=sqrt(n);i++){
		if (!(n%i))return 1;
	}
	return 0;
}
int main(){
	sieve();
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%s\n",(sum_divisor(n)&&no_prime(n))?"YES":"NO");
	}
}

//Bai 5 Tim uoc so nguyen to lon nhat cua so n

int find(int n){
	int cnt;
	for (int i=2;i<=sqrt(n);i++){
		while(!(n%i)){
			cnt=i;
			n/=i;
		}
	}
	if (n!=1) cnt=n;
	return cnt;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%d",find(n));
	}
}

//bai 6 tim so ma chia het cho so nao do cung chia het cho binh phuong so do
//VD	27=3*3*3 (hop le)
//	28=2*2*7 (hop le)
//	29 (ko hop le)
//	30=2*3*5(ko hop le)

int sodep(int n){
	for (int i=2;i<=sqrt(n);i++){
		int cnt=0;
		while(!(n%i)){
			++cnt;
			n/=i;
		}
		if (cnt>=2)return 1;
	}
	return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		for (int i=1;i<=n;i++){
			if (sodep(i))printf("%d ",i);
		}
	}
}

//bai 7 bai 6 tim so ma chia het cho so nao do dong thoi chia het cho binh phuong so do
int sodep(int n){
	int res=0;//check dieu kien can
	for (int i=2;i<=sqrt(n);i++){
		int cnt=0;
		while (!(n%i)){
			++cnt;
			n/=i;
		}
		if (cnt==1)return 0;
		if (cnt>=2)res=1;
	}
	if (n!=1)return 0;
	return res;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		for (int i=1;i<=n;i++){
			if (sodep(i))printf("%d ",i);
		}
	}
}
