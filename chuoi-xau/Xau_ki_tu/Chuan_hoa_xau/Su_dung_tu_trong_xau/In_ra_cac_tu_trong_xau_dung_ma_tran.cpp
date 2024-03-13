#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	int t;
	scanf("%d",&t);
	getchar();//vi ket thuc ham scanf se tra ve dau xuong dong nen dung ham nay de doc no
	while(t--){
		char c[1000];
		gets(c);
		char a[20][50];
		int n=0;
		char *tk=strtok(c," ");
		while (tk!=NULL){
			strcpy(a[n],tk);
			++n;
			tk=strtok(NULL," ");
		}
		for (int i=0;i<n;i++){
			printf("%s\n",a[i]);
		}
	}
}
