#include<stdio.h>
int transfer(int n){
	int init=0;	int m=n;
	while(n!=0){
			init=init*10 + n%10;
			n/=10;
	}
	if(init==m) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(transfer(n)){
			printf("YES");
		}else{
			printf("NO");
		}
	}
}
