#include<stdio.h>
int gcd(int a, int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		if(gcd(a,b)==1) printf("YES!");
		else printf("NO");
	}
}
