#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int count(char a[][100], int n, char tmp[]){
	int cnt = 0;
	for(int i=0;i<n;i++){
		if(strcmp(a[i], tmp)==0) ++cnt;
	}
	return cnt;
}

int main(){
	int t;
	scanf("%d",&t);
	char name[100][100];
	int n = 0;
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		for(int i =0 ;i<strlen(c);i++) c[i] = tolower(c[i]);
		char a[10][100];
		int m = 0;
		char *token = strtok(c, " ");
		while(token!=NULL){
			strcpy(a[m++], token) ;
			token = strtok(NULL, " ");
		}
		char res[1000];
		strcpy(res, a[m-1]);
		int dem = strlen(res);
		for(int i=0;i<m-1;i++){
			res[dem++] = a[i][0];
		}
		res[dem] = '\0';
		int cnt = count(name, n, res);
		if(cnt==0) printf("%s@ptit.edu.vn\n",res);
		else printf("%s%d@ptit.edu.vn\n",res,cnt+1);
		strcpy(name[n++], res);
	}
}
