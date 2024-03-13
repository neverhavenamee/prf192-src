#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	char c[1001],a[20][50];
	gets(c);
	int n=0;
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	int res=0; // check xem co tu nao duoc lap hay chua
	for(int i=0;i<n;i++){
		int ok=0;
		for(int j=i+1;j<n;j++){
			if(strcmp(a[i],a[j])==0){
				 ok=1;break;
			}
		}
		if(ok==1){
		printf("%s ",a[i]);
		res=1;
		break;
		}
	}
	if(res==0) printf("-1");
}
