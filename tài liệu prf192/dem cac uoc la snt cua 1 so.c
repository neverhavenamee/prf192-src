#include<stdio.h>
#include<math.h>
int pt(int n){
	int cnt=0;
	for(int i=2;i<=n;i++){
		if(n%i==0)
			cnt++;
		while(n%i==0){
			n/=i;
		}
	}
	printf("%d",cnt);
}

int main(){
	int n;
	scanf("%d",&n);
	pt(n);
}
