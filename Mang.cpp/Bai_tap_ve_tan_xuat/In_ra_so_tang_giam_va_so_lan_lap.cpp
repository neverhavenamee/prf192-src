#include<stdio.h>
int rev(int n){
	int d=0,m=n;
	while(n){
		d=n%10+d*10;
		n/=10;
	}
	return m==d;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)scanf("%d",&a[i]);
	for (int i=0;i<n;i++){
		if (rev(a[i])){
			int cnt=1;
			for (int j=i+1;j<n;j++){
				if (a[i]==a[j])++cnt;
			}	
			printf("%d %d\n",a[i],cnt);
		}
	}
}
