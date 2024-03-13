#include<stdio.h>
#include<math.h>

//Su dung cong thuc (a*b)%c = ((a%c) * (b%c))%c

int powMod1(int x,int y, int m){
	long long res=1;
	for(int i=1;i<=y;i++){
		res*=x;
		res%=m;
	}
	return res;
}

int powMod2(int x, int y, int m){
	long long res=1;
	while(y){
		if(y%2==1){
			res*=x;
			res%=m;
		}
		x*=x;
		x%=m;
		y/=2;
	}
	return res;
}


