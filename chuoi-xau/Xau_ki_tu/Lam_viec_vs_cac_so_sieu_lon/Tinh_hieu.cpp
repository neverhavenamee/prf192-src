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
	int x[n1],y[n1],z[n1];
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
		int tmp=x[i]-y[i]-n;
		if (tmp<0){
			n=1;
			z[n3++]=10+tmp;
		}else{
			z[n3++]=tmp;
			n=0;
		}
	}
	int ok=0;
	for (int i=n3-1;i>=0;i--){
		if (ok==0&&z[i]){
			ok=1;
		}
		if (ok)printf("%d",z[i]);
	}
	if (ok==0)printf("0");
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char c[1000],d[1000];
		scanf("%s%s",c,d);
		if (strlen(c)>strlen(d)||(strlen(c)==strlen(d)&&strcmp(c,d)>0))solve(c,d);
		else solve(d,c);
	}
}
