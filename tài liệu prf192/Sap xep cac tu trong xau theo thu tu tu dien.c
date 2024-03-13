#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
//neu muon a dung truoc b return -1;
//neu muon a dung sau b return 1;
//int cmp(const void *a, const void *b){
//	char *x=(char*)a;
//	char *y=(char*)b;
//	if(strcmp(x,y)<0) return -1;
//	else return 1;
//}
void sapxep(char a[][50],int n){
	for(int i=0;i<n;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(strcmp(a[j],a[min])<0) min=j;
		}
		char tmp[100];
		strcpy(tmp,a[min]);
		strcpy(a[min],a[i]);
		strcpy(a[i],tmp);
	}
}
int main(){
	char c[1000];
	gets(c);
	char a[20][50];
	int n=0;//dem so luong tu trong cau
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	// Co the su dung ham` co san qsort nhu sau: qsort(mang muon sap xep, so luong phan tu sap xep,kich thuoc cua 1 phan tu,cmp)
	// qsort(a,n,sizeof(a[0]),cmp);
	sapxep(a,n);
	for(int i=0;i<n;i++){
		printf("%s ",a[i]);
	}
	printf("\n");
}
