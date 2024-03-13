#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void selectionSort(char a[][50],int n){
	for (int i=0;i<n;i++){
		int m=i;
		for (int j=i+1;j<n;j++){
			if (strcmp(a[j],a[m])<0)m=j;
		}
		char tmp[100];
		strcpy(tmp,a[m]);
		strcpy(a[m],a[i]);
		strcpy(a[i],tmp);
	}
}
int main(){
	int t;
	scanf("%d",&t);
	getchar();//vi ket thuc ham scanf se tra ve dau xuong dong nen dung ham nay de doc no
	while(t--){
		char c[1000];
		gets(c);
		char a[20][50];
		int n=0;
		char* tk=strtok(c," ");
		while(tk!=NULL){
			strcpy(a[n],tk);
			++n;
			tk=strtok(NULL," ");
		}
		selectionSort(a,n);
		for (int i=0;i<n;i++){
			printf("%s ",a[i]);
		}
		printf("\n");
	}
}
