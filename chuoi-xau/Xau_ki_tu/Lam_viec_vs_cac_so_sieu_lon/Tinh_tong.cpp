#include<stdio.h>
#include<string.h>
void reverse(int a[],int n){
	int l=0,r=n-1;
	while(l<r){
		int tmp=a[l];
		a[l]=a[r];
		a[r]=tmp;
		++l;--r;
	}
}
void solve(char c[],char d[]){
	int n1=strlen(c),n2=strlen(d),n3=0;
	int x[n1],y[n1],z[n1+1];
	for (int i=0;i<n1;i++){
		x[i]=c[i]-'0';
	}
	for (int i=0;i<n2;i++){
		y[i]=d[i]-'0';
	}
	reverse(x,n1);reverse(y,n2);
	for (int i=n2;i<n1;i++){
		y[i]=0;
	}
	int n=0;
	for (int i=0;i<n1;i++){
		int tmp=x[i]+y[i]+n;
		z[n3++]=tmp%10;
		n=tmp/10;
	}
	if(n)z[n3++]=n;
	for (int i=n3-1;i>=0;i--)printf("%d",z[i]);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char c[1000],d[1000];
		scanf("%s%s",c,d);
		if (strlen(c)>=strlen(d))solve(c,d);
		else solve(d,c);
	}
}
