#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//int cmp(const void *a, const void *b){
//	char *x=(char*)a;
//	char *y=(char*)b;
//	if(*x<*y) return -1;
//	else return 1;
//}

int sapxep(char c[]){
	for(int i=0;i<strlen(c)-1;i++){
		for(int j=i+1;j<strlen(c);j++){
				if(c[i]>c[j]){
					 int tmp=c[i];
					 c[i]=c[j];
					 c[j]=tmp;
				}
		}
	}
}

int main(){
	char c[10001];
	gets(c);
//	qsort(c,strlen(c),sizeof(char),cmp);
//	printf("%s",c);
	sapxep(c);
	printf("%s",c);
}
