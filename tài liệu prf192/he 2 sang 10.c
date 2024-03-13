#include<stdio.h>
#include<math.h>
int doi(int n){
		scanf("%d",&n);
		int i=0, sum=0;
		while(n!=0){
			sum+=n%10*pow(2,i);
			n/=10;
			i++;
	}
	return sum;
}
int main(){
	int n;
	printf("%d",doi(n));
}
