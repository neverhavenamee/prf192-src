#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int check(char c[1000]){
	for (int i=0;i<strlen(c);i++){
		if (!isupper(c[i]))return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		char* tk=strtok(c," ");
		while (tk!=NULL){
			if (check(tk))printf("%s\n",tk);
			tk= strtok(NULL," ");
		}
	}
}
