#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int solve(char c[],int n){
	int idx=-1;
	for(int i=0;i<n;i++){
		if(c[i]=='8'){
			idx=i;
			break;
		}
	}
	if(idx==-1) return 0;
	if(n-1-idx>=10) return 1;
	else return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	char c[1001];
	gets(c);
	if(solve(c,n)) printf("YES");
	else printf("NO");
}
