#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int cmp(const void *a,const void*b){
	char*x=(char*)a;
	char*y=(char*)b;
	return strcmp(x,y);
}
int main(){
	char c[1000],d[1000],a[20][50],b[20][50];
	gets(c);
	gets(d);
	int n=0,m=0;
	char*tk=strtok(c," ");
	while(tk!=NULL){
		strcpy(a[n++],tk);
		tk=strtok(NULL," ");
	}
	tk=strtok(d," ");
	while(tk!=NULL){
		strcpy(b[m++],tk);
		tk=strtok(NULL," ");
	}
	qsort(a,n,sizeof(a[0]),cmp);
	for (int i=0;i<n;i++){
		while (strcmp(a[i],a[i+1])==0)++i;
		int ok=1;
		for (int j=0;j<m;j++){
			if (strcmp(b[j],a[i])==0){
				ok=0;
				break;
			}
		}
		if (ok)printf("%s\n",a[i]);
	}
}
