#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	char c[1001];
	gets(c);
	int cnt=0;
	for(int i=0;i<n-1;i++){
		if(c[i]==c[i+1]){
			cnt++;
		}
	}
	printf("%d",cnt);
}
