#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int cmp(const void *a, const void *b){
	char *x=(char*)a;
	char *y=(char*)b;
	return strcmp(x,y);
}
int main(){
	char c1[1001];
	gets(c1);
	char c2[1001];
	gets(c2);
	char a[20][50],b[20][50];
	int n=0,m=0;
	char *token=strtok(c1," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	
	token=strtok(c2," ");
	while(token!=NULL){
		strcpy(b[m],token);
		m++;
		token=strtok(NULL," ");
	}
	qsort(a,n,sizeof(a[0]),cmp);
	for(int i=0;i<n;i++){
		while(strcmp(a[i],a[i+1])==0){
			 i++;
		}
		int ok=0;
		for(int j=0;j<m;j++){
			if(strcmp(a[i],b[j])==0){
				ok=1;break;
			}
		}
		if(ok==0) printf("%s ",a[i]);
	}
}
