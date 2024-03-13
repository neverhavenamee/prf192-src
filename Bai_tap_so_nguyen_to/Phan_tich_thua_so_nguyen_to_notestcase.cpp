#include<stdio.h>
#include<math.h>
#define ll long long
//Phan tich thua so nguyen to
//bai 1
//Input 28 Output 2 2 7

void pt1(int n){
	for (int i=2;i<=sqrt(n);i++){
		while(!(n%i)){
			printf("%d ",i);
			n/=i;
		}
	}
	if (n!=1)printf("%d",n);
}
int main(){
	int n;
	scanf("%d",&n);
	pt1(n);
}

//bai 2 moi thua so nguyen to xuat hien 1 lan
//Input 28 Output 2 7

void pt2(int n){
	for (int i=2;i<=sqrt(n);i++){
		if (!(n%i)){
			printf("%d ",i);
			while (!(n%i)){
				n/=i;
			}
		}
	}
	if (n!=1)printf("%d",n);
}
int main(){
	int n;
	scanf("%d",&n);
	pt2(n);
}

//bai 3 thua so nguyen to kem so mu
//Input 28 Output 2(2) 7(1)

void pt3(int n){
	for (int i=2;i<=sqrt(n);i++){
		if (!(n%i)){
			int cnt=0;
			while(!(n%i)){
				cnt++;
				n/=i;
			}
			printf("%d(%d) ",i,cnt);
		}
	}
	if (n!=1)printf("%d(1)",n);
}
int main(){
	int n;
	scanf("%d",&n);
	pt3(n);
}

//bai 4 them dau x vao giua cac thua so nguyen to
//Input 8 Output 2x2x2

void pt4(int n){
	for (int i=2;i<=sqrt(n);i++){
		while(!(n%i)){
			printf("%dx",i);
			n/=i;
		}
	}
	if (n!=1)printf("%d",n);
}
int main(){
	int n;
	scanf("%d",&n);
	pt4(n);
}

//bai 5 
//Input 60 Output 60=2^2*3^1*5^1

void pt5(int n){
	printf("%d = ",n);
	for (int i=2;i<=sqrt(n);i++){
		if (!(n%i)){
			int cnt=0;
			while(!(n%i)){
				cnt++;
				n/=i;
			}
			printf("%d^%d * ",i,cnt);
		}
	}
	if (n!=1)printf("%d^1",n);
}
int main(){
	int n;
	scanf("%d",&n);
	pt5(n);
}

//Bai 6 tim thua so nguyen to thu k cua n neu ko co in ra -1

int check(int k,int n){
	int cnt=0;
	for (int i=2;i<=sqrt(n);i++){
		if (!(n%i)){
			while(!(n%i)){
			n/=i;
			}
			++cnt;
			if (cnt==k)return i;
		}
	}
	if (n!=1)return n;
	return -1;
}
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	printf("%d",check(k,n));
}

//Bai 7 Tim so uoc cua n!
//C1
int count(int n,int p){
	int ans=0;
	for (int i=p;i<=n;i+=p){
		int tmp=i;
		while(!(i%p)){
			ans++;
			tmp/=i;
		}
	}
	return ans;
}
//C2
int count2(int n,int p){
	int ans=0;
	for (int i=p;i<=n;i*=p){
		ans+=n/i;
	}
	return ans;
}
int prime(int n){
	for (int i=2;i<=sqrt(n);i++){
		if (!(n%i))return 0;
	}
	return n>1;
}
ll countDivisor(int n){
	int m=n;
	ll res=1;
	while(n){
		if (prime(n)){
			res*=(count2(m,n)+1);
		}
		n--;
	}
	return res;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%lld\n",countDivisor(n));
	}
}
