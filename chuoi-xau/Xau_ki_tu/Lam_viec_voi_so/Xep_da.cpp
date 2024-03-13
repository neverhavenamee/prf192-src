#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
	int n;
	scanf("%d",&n);
	char c[1000];
	scanf("%s",c);
	int cnt=0;
	for (int i=0;i<n-1;i++){
		if (c[i]==c[i+1])++cnt;
	}
	printf("%d",cnt);
}
