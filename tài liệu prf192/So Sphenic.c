#include<stdio.h>
#include<math.h>
int count(int n){
	int res=0;
	for(int i=2;i<=sqrt(n);i++){
		int cnt=0;
		while(n%i==0){
			cnt++;
			n/=i;
		}
		if(cnt>=2) return 0;
		else if(cnt==1) res++;
	}
	if(n!=1)
	res++;	
	return res==3;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",count(n));
}
