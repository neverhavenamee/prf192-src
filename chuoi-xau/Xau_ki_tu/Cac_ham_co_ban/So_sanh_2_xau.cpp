#include<stdio.h>
#include<string.h>
int min(int a,int b){
	return a<b?a:b;
}
int strcmp(char c[],char d[]){
	int n1=strlen(c);
	int n2=strlen(d);
	for (int i=0;i<min(n1,n2);i++){
		if (c[i]!=d[i]){
			if (c[i]<d[i])return -1;
			else return 1;
		}
	}
	if (n1==n2)return 0;
	else if (n1<n2)return -1;
	else return 1;
}
int main(){
	char c[1000],d[1000];
	gets(c);
	gets(d);
	printf("%d",strcmp(c,d));
}
