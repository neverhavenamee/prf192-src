#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		int res=0,sum=0;
		for (int i=0;i<strlen(c);i++){
			if (isdigit(c[i])){
				res=res*10+c[i]-'0';
			}else{
				sum+=res;
				res=0;
			}
		}
		if (isdigit(c[strlen(c)-1]))sum+=res;
		printf("%d\n",sum);
	}
}
