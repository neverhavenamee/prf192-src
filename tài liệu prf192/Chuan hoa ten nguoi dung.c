#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int cmp(const void *a, const void *b){
	char *x=(char*)a;
	char *y=(char*)b;
	if(strcmp(x,y)<0) return -1;
	else return 1;
}
void ChuanHoa(char c[]){
	c[0]=toupper(c[0]);
	for(int i=1;i<strlen(c);i++){
		c[i]=tolower(c[i]);
	}
}
int main(){
	char c[1001];
	gets(c);
	char a[20][50];
	int n=0;// so luong tu trong xau
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	for(int i=0;i<n;i++){
		ChuanHoa(a[i]);
	}
	qsort(c,n,sizeof(a[0]),cmp);
	for(int i=0;i<n;i++){
		printf("%s ",a[i]);
	}
}
