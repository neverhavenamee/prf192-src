#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int cmp(const void *a, const void *b){
	char *x=(char*)a;
	char *y=(char*)b;
	if(*x<*y) return -1;
	else return 1;
}

void ChuanHoa(char c[]){
	for(int i=0;i<strlen(c);i++){
		c[i]=tolower(c[i]);
	}
}
 
int main(){
	char c[1001],a[20][50];
	gets(c);
	ChuanHoa(c);
	int n=0;
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	printf("%s",a[n-1]);
	for(int i=0;i<n-1;i++){
		printf("%c",a[i][0]);
	}
	printf("@gmail.com");
}
