#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		strlwr(c);
		char a[20][50];
		char*tk=strtok(c," ");
		int n=0;
		while(tk!=NULL){
			strcpy(a[n++],tk);
			tk=strtok(NULL," ");
		}
		printf("%s",a[n-1]);
		for (int i=0;i<n-1;i++){
			printf("%c",a[i][0]);
		}
		printf("@gmail.com");
		printf("\n");
	}
}
