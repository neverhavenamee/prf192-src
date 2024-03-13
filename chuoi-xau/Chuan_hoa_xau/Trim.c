#include<stdio.h>
#include<string.h>
void trim(char s[]);
main(){
	char s[1001];
	gets(s);
	trim(s);
}
void trim(char s[]){
	int cnt=1;
	int i=0;
	char *p;
	while(s[i]==32)++i;
	strcpy(s,&s[i]);
	i=strlen(s)-1;
	while(s[i]==32)--i;
	s[i+1]=0;//ki tu NULL
	p=strstr(s,"  ");
	while(p!=NULL){
		strcpy(p,p+1);
		p=strstr(s,"  ");
	}
	for (i=0;i<strlen(s);i++){
		if (s[i]==32)++cnt;
	}
	printf("%d",cnt);
}
