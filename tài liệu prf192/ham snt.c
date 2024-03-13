#include<stdio.h>
#include<math.h>
int prime(int n){
	int i;
	for( i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
		else return 1;
	}
}

int main(){
	int i,n;
	for(i=1;i<=n;i++){
		if(nt(n)) printf("%d",n);
	}
}
