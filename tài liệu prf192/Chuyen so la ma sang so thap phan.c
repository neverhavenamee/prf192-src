#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
int val[]={1,5,10,50,100,500,1000};
char s[]="IVXLCDM";
int findPos(char c){
	for(int i=0;i<7;i++){
		if(s[i]==c) return i;
	}
}

int solve(char c[]){
	int n=strlen(c);
	int res=val[findPos(c[n-1])];
	for(int i=n-1;i>0;i--){
		int pos1=findPos(c[i]);
		int pos2=findPos(c[i-1]);
		if(val[pos1]<=val[pos2]){
			res+=val[pos2];
		}
		else{
			res-=val[pos2];
		}
	}
	return res;
}
int main(){
	char c[1000];
	gets(c);
	printf("%d",solve(c));
}
