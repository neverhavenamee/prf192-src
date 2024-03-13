#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	for (int k=1;k<=t;k++){
		char c[1000];
		gets(c);
		char a[20][50];
		char*tk=strtok(c," ");
		int n=0;
		printf("#Test %d: ",k);
		while(tk!=NULL){
			strcpy(a[n++],tk);
			tk=strtok(NULL," ");
		}
		int res=0;
		for (int i=0;i<n;i++){
			int ok=0;
			for (int j=0;j<i;j++){
				if (strcmp(a[i],a[j])==0){
					ok=1;
					break;
				}
			}
			if (ok){
				printf("%s",a[i]);
				res=1;
				break;
			}
		}
		if (!res)printf("-1");
		printf("\n");
	}
}
