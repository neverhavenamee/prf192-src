#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int cnt[26]={0};
int main(){
	char c[100];
	gets(c);
	int cnt1=0,cnt2=0,cnt3=0;
	for (int i=0;i<strlen(c);i++){
		if (isalpha(c[i]))cnt1++;
		else if (isdigit(c[i]))cnt2++;
		else cnt3++;
	}
	printf("%d %d %d",cnt1,cnt2,cnt3);
}
