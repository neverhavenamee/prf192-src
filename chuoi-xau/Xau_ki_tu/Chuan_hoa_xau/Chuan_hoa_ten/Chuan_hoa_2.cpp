#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void chuanhoa(char c[1000]){
	c[0]=toupper(c[0]);
	for (int i=1;i<strlen(c);i++){
		c[i]=tolower(c[i]);
	}
}
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		char a[20][50];
		char*tk=strtok(c," ");
		int n=0;
		while(tk!=NULL){
			strcpy(a[n++],tk);
			tk=strtok(NULL," ");
		}
		chuanhoa(a[n-1]);
		printf("%s, ",a[n-1]);
		for (int i=0;i<n-1;i++){
			chuanhoa(a[i]);
			printf("%s",a[i]);
			if (i!=n-2)printf(" "); // Dung khi de bai bat bo dau cach o cuoi
		}
		printf("\n");
	}
}
