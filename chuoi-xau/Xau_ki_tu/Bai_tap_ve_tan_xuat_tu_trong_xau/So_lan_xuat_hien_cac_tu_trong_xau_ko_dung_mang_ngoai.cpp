#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	char c[1000];
	gets(c);
	strlwr(c);
	char a[20][50];
	char*tk=strtok(c," ");
	int n=0;
	while(tk!=NULL){
		strcpy(a[n++],tk);
		tk=strtok(NULL," ");
	}
	for (int i=0;i<n;i++){
		int cnt=0;
		for (int j=0;j<n;j++){
			if (strcmp(a[i],a[j])==0){
				++cnt;
			}
		}
		int ok=1;
		for (int j=i-1;j>=0;j--){
			if (strcmp(a[i],a[j])==0){
				ok=0;
				break;
			}
		}
		if (ok)printf("%s %d\n",a[i],cnt);
	}
}
