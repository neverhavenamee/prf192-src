#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	char c[1001],a[10][100];
	gets(c);
	for(int i=0;i<strlen(c);i++){
		c[i]=tolower(c[i]);
	}
	int n=0;
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	int b[1000]={0};
	for(int i=0;i<n;i++){
		if(b[i]==0){
			int cnt=1;
			for(int j=i+1;j<n;j++){
				if(strcmp(a[i],a[j])==0){
				cnt++;
				b[j]=1;
				}
			}
			printf("%s %d\n",a[i],cnt);
		}
	}
	
}
