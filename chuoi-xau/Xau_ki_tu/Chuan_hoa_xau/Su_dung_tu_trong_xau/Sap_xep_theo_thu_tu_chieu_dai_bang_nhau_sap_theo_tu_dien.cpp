#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int cmp(const void *a,const void *b){
	char* x=(char*)a;
	char* y=(char*)b;
	if (strlen(x)!=strlen(y)){
		if (strlen(x)>strlen(y))return 1;
		else return -1;
	}
	else if (strcmp(x,y)>0)return 1;
	else return -1;
	
}
int main(){
	int t;
	scanf("%d",&t);
	getchar();//vi ket thuc ham scanf se tra ve dau xuong dong nen dung ham nay de doc no
	while(t--){
		char c[1000];
		gets(c);
		char a[20][50];
		int n;
		char*tk=strtok(c," ");
		while (tk!=NULL){
			strcpy(a[n++],tk);
			tk=strtok(NULL," ");
		}
		qsort(a,n,sizeof(a[0]),cmp);
		for (int i=0;i<n;i++){
			printf("%s ",a[i]);
		}
	}
}
