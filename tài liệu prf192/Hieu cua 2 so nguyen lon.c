#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int reverse(int a[],int n){
	int l=0,r=n-1;
	int tmp=a[l];
	a[l]=a[r];
	a[r]=tmp;
	l++;r--;
}

void add(char a[], char b[]){
	int n1=strlen(a);
	int n2=strlen(b);
	int n=0;
	int x[n1],y[n2],z[n1+1];
	for(int i=0;i<n1;i++){
		x[i]=a[i]-'0';
	}
	for(int i=0;i<n2;i++){
		y[i]=b[i]-'0';
	}
	reverse(x,n1),reverse(y,n2);
	for(int i=n2;i<n1;i++){
		y[i]=0;
	}
	int nho=0;
	for(int i=0;i<n1;i++){
		int tmp= x[i]-y[i]-nho;
		if(tmp<0){
			nho=1;
			z[n++]=10+tmp;
		}
		else{
			z[n++]=tmp;
			nho=0;
		}
	}
	int ok=0;
	for(int i=n-1;i>=0;i--){
		if(ok==0 & z[i]!=0){
			ok=1;
		}
		if(ok==1){
			printf("%d",z[i]);
		}
	}
	if(ok==0){
			printf("0");
		}
}
int main(){
	char c[1001],d[1001];
	gets(c);
	gets(d);
	if(strlen(c)>strlen(d) || strlen(c)==strlen(d) && strcmp(c,d)>0){
		add(c,d);
	}
	else add(d,c);
}
