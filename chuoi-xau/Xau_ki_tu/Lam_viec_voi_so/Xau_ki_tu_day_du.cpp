#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int lis(char c[]){
	int lis[strlen(c)];
	for(int i=0;i<strlen(c);i++){
		lis[i]=1;
		for (int j=0;j<i;j++){
			if (c[i]>c[j]){
				lis[i]=lis[j]+1;
			}
		}
	}
	int res=0;
	for (int i=0;i<strlen(c);i++){
		if (lis[i]>res)res=lis[i];
	}
	return 26-res;
}
int main(){
	char c[1000];
	gets(c);
	printf("%d",lis(c));
}
