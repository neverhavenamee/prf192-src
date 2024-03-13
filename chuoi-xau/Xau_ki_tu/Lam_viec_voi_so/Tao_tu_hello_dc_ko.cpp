#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int solve(char c[]){
	char d[10]="hello";
	int cnt=0;
	for (int i=0;i<strlen(c);i++){
		if (c[i]==d[cnt]){
			++cnt;
		}
		if (cnt==5)return 1;
	}
	return 0;
}
int main(){
   char c[1000];
   scanf("%s",c);
   if (solve(c))printf("YES");
   else printf("NO");
}
