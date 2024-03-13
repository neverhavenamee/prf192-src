#include<stdio.h>
#include<math.h>

int count(int n, int p){
	int ans=0;
	for(int i=p;i<=n;i+=p){
		int tmp=i;
		while(tmp%p==0){
			ans++;
			tmp/=p;
		}
	}
	return ans;
}

//Cong thuc Legendre
// int count 2(int n,int p){
//   int ans=0;
//for(int i=p;i<=n;i*=p){
//		ans+=n/p;
// }
//return ans;
int main(){
	int n,p;
	scanf("%d %d",&n,&p);
	printf("%d",count(n,p));
}

