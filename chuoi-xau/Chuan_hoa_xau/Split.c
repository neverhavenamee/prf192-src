#include<stdio.h>
#include<string.h>
void trim(char s[]);
void my_strlwr(char s[]);
int my_upr(char c);
void split(char s[],char w[][31],int *n);
main(){
	char s[1001];
	char w[100][31];
	int n;
	gets(s);
	int i;
	split(s,w,&n);
	for (i=0;i<n;i++){
		printf("(%s)\n",w[i]);
	}
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
	my_strlwr(s);
}
int my_upr(char c){
	if (c>='a'&&c<='z')c-=32;
}
void my_strlwr(char c[]){
	int i=0;
	for (i=0;i<strlen(c);i++){
		if (c[i]>='A'&&c[i]<='Z')c[i]+=32;
	}
}
void split(char s[],char w[][31],int *n){
	char s1[1001];
	char *p;
	int i,j,k=0;
	strcpy(s1,s);
	i=0;
	while(s1[i]==32)i++;
	strcpy(&s1[0],&s1[i]);
	i=strlen(s1)-1;
	while(s1[i]==32)i--;
	s1[i+1]=0;
	k=0;
	for(i=0;i<strlen(s1);i++){
		if (s1[i]==32){
			strcpy(w[k],s1);
			w[k++][i]=0;
			j=i;
			while(s1[j]==32)j++;
			strcpy(&s1[0],&s1[j]);
			i=-1;
		}
	}
	strcpy(w[k++],s1);
	*n=k;
}
