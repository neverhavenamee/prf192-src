#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int dt[10001],cnt=0;
void solve(char c[]){
	for (int i=0;i<strlen(c);i++){
		if (isdigit(c[i])){
			int he_so=0;
			while(c[i]!='*'){
				he_so=he_so*10+c[i]-'0';++i;
			}
			i+=3;
			int mu=0;
			while(isdigit(c[i])){
				mu=mu*10+c[i]-'0';++i;
			}
			dt[mu]+=he_so;
		}
	}
}
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		memset(dt,0,sizeof(dt));
		char c[10000],d[10000];
		gets(c);
		gets(d);
		solve(c);solve(d);
		int cnt=0;
		for (int i=10000;i>=0;i--)if (dt[i])++cnt;
		for (int i=10000;i>=0;i--){
			if (dt[i]){
				printf("%d*x^%d",dt[i],i);
				--cnt;
				if (cnt)printf(" + ");
			}
		}
		printf("\n");
	}
}
