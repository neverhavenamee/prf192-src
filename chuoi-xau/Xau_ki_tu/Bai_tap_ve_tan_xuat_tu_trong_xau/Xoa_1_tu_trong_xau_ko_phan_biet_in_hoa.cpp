#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	for (int i=1;i<=t;i++){
		char c[1000];
		gets(c);
		char w[10];
		scanf("%s",w);
		getchar();//vi sau khi scanf tra ve dau \n nen gets(c) o vong 2 khong dc doc
		char a[20][50];
		char*tk=strtok(c," ");
		int n=0;
		printf("#Test %d: ");
		while(tk!=NULL){
			if (strcmpi(tk,w)!=0){
				strcpy(a[n++],tk);
			}
			tk=strtok(NULL," ");
		}
		for (int j=0;j<n;j++){
			printf("%s",a[j]);
			if (j!=n-1)printf(" ");
		}
		printf("\n");
	}
}
