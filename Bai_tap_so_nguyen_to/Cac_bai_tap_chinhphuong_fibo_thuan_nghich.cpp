#include<stdio.h>
#include<math.h>
//bai 1 dem so cac so chinh phuong trong doan a -> b

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		int c1=sqrt(a),c2=sqrt(b);
		if (c1*c1!=a)++c1; //vi co the gia tri bi them VD 5 ket qua la 2.23 nhung bi may lam tron xuong 2 nen bi them gt
		printf("%d\n",c2-c1+1);
	}
}

//Bai tap 2 Dem uoc cua n
//C1
int count1(int n){
	int cnt=0;
	for (int i=1;i<=sqrt(n);i++){
		if (!(n%i)){
			if (i!=n/i)cnt+=2;
			else cnt++;
		}
	}
	return cnt;
}
//C2 Su dung Ct tinh so uoc khi biet giai thua cua no
int count2(int n){
	int res=1;
	for (int i=2;i<=sqrt(n);i++){
		int cnt=0;
		while(!(n%i)){
			++cnt;
			n/=i;
		}
		res*=(cnt+1);
	}
	if (n!=1)res*=2;
	return res;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%d\n",count2(n));
	}
}
//Bai 3 Tinh tong uoc cua n

int count(int n){
	int sum=0;
	for (int i=1;i<=sqrt(n);i++){
		if (!(n%i)){
			if (i!=n/i)sum+=i+n/i;
			else sum+=i;
		}
	}
	return sum;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%d\n",count(n));
	}
}
//Bai 4 Kiem tra mot so co so luong uoc la so le hay khong
//So co so uoc la so le thi la so chinh phuong
int square(long long n){
	int x=sqrt(n);
	if (x==sqrt(n))return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if (square(n))printf("YES\n");
		else printf("NO\n");
	}
}
//Bai 5 Ktra so xem co phai la so co tong cac uoc ko tinh chinh no bang no khong
//C1 Voi n co gt nho
int sum_divisor(int n){
	int sum=0;
	for (int i=1;i<=sqrt(n);i++){
		if (!(n%i)){
			if(i!=n/i&&i!=1)sum+=i+n/i;
			else sum+=i;
		}
	}
	return n==sum;
}
//C2 Voi n co gt lon
//Ta co neu p la snt va (2^p)-1 la so nguyen to 
//thi So hoan hao = 2^(p-1)*(2^p-1)
int prime(int n){
	for (int i=2;i<=sqrt(n);++i){
		if (!(n%i))return 0;
	}
	return n>1;
}
int check(long long n){
	for (int i=1;i<=32;i++){ //vi 2^32 <=> 10^18
		if (prime(i)){
			int tmp=(int)pow(2,i)-1;
			if (prime(tmp)){
				long long perfect=1ll*tmp*(int)pow(2,i-1);
				if (perfect==n)return 1;
			}
		}
	}
	return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if (check(n))printf("YES\n");
		else printf("NO\n");
	}
}
*/
//Bai 6 In ra n so fibo dau tien
//C1 Ko dung mang
void solve(int n){
	if (n==1)printf("0");
	else printf("0 1");
	long long fb1=0,fb2=1;
	for (int i=3;i<=n;i++){
		long long fb=fb1+fb2;
		printf(" %lld",fb);
		fb1=fb2;
		fb2=fb;
	}
}
//C2 Su dung mang
void solve2(int n){
	long long fibo[n];
	fibo[0]=0;
	fibo[1]=1;
	for (int i=2;i<n;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
	for (int i=0;i<n;i++)printf("%lld ",fibo[i]);
}
int main(){
	int t;
	scanf("\n%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		solve(n);
	}
}
*/
//Bai 7 kiem tra so fibonaci
//C1
int solve(long long n){
	if (n==1||n==0)return 1;
	long long fb1=0,fb2=1;
	for (int i=3;i<=n;i++){
		long long fb=fb1+fb2;
		if (fb==n)return 1;
		fb1=fb2;
		fb2=fb;
	}
	return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%s\n",(solve(n))?"YES":"NO");
	}
}
*/
//C2 Giong sang so
long long fb[100];
void fbo(){
	fb[0]=0;
	fb[1]=1;
	for (int i=2;i<=92;i++){
		fb[i]=fb[i-1]+fb[i-2];
	}
}
int main(){
	fbo();
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		int cnt=0;
		for (int i=0;i<=92;i++){
			if (n==fb[i]){
				printf("YES\n");	
				cnt++;
			}
		}
		if (!cnt)printf("NO\n");
	}
}
*/
//Bai 8 liet ke so dep la so nguyen to co tong cac chu so nam trong day fibo tu a->b
int prime(int n){
	for (int i=2;i<=sqrt(n);i++){
		if (!(n%i))return 0;
	}
	return n>1;
}
int fibo(int n){
	if (n==0||n==1)return 1;
	int fb1=0,fb2=1;
	for (int i=3;i<=92;i++){
		int fb3=fb1+fb2;
		if (fb3==n)return 1;
		fb1=fb2;
		fb2=fb3;
	}
	return 0;
}
int sum_digit(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return fibo(sum);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		int cnt=0;
		for (a;a<=b;a++){
			if (sum_digit(a)&&prime(a)){
			printf("%d ",a);
			cnt=1;
			}
		}
		if (!cnt)printf("%d",--cnt);
	}
}
*/
//Bai 9 Liet ke so thuan nghich co it nhat 3 uoc so nguyen to ko co so nao in ra -1
int rev(int n){
	int d=0,m=n;
	while(n){
		d=d*10+n%10;
		n/=10;
	}
	return m==d;
}
int check(int n){
	int cnt1=0;
	for (int i=2;i<=sqrt(n);i++){
		int cnt2=0;
		while(!(n%i)){
			++cnt2;
			n/=i;
		}
		if (cnt2!=0)++cnt1;
	}
	if (n!=1)cnt1++;
	return cnt1>=3;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		int cnt=0;
		for (a;a<=b;a++){
			if (check(a)&&rev(a)){
			printf("%d ",a);
			cnt=1;
			}
		}
		if (!cnt)printf("%d",--cnt);
	}
}
//Bai 10 liet ke so thuan nghich ma co chu so cuoi lon nhat
int check(int n){
	int d=0,m=n;
	int x=n%10;
	while(n){
		d=d*10+n%10;
		if (x<(n%10))return 0;
		n/=10;
	}
	return m==d;
}
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1;i<n;i++){
		if (check(i))printf("%d ",i);
	}
}
//Bai 11 nguyen to cung nhau
//2 so goi la nguyen to cung nhau khi co uoc chung lon nhat la 1
int gcd(int a,int b){
	if (b==0)return a;
	return gcd(b,a%b);
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if (gcd(a,b)==1)printf("YES");
	else printf("NO");
}
