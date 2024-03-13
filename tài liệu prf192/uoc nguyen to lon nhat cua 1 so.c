#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2; i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int find(int n){
	for(int i=n;i>=1;i--){
		if(n%i==0 && nt(i))
			return i;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",find(n));
}
