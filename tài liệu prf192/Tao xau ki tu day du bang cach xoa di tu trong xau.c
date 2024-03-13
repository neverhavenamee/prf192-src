#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int lis(char c[]){
	int lis[strlen(c)];
	//lis[i]: chieu dai day con tang dai nhat ket thuc tai i
	for(int i=0;i<strlen(c);i++){
		lis[i]=1;
		for(int j=0;j<i;j++){
			if(c[i]>c[j] && lis[j]<lis[j]+1){
				lis[i]=lis[j]+1;
			}
		}
	}
	int res=0;
	for(int i=0;i<strlen(c);i++){
		if(lis[i]>res){
			res=lis[i];
		}
	}
	return 26-res;
}
int main(){
	char c[1001];
	gets(c);
	printf("%d",lis(c));
}
