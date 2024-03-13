#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	char c[n];
	scanf("%s",c);
	int res=0;
	for (int i=0;i<n;i++){
		if ((c[i]-'0')%2==0)res+=i+1;
	}
	printf("%d",res);
}
