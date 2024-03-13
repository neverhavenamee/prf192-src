#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int cmp(const void *a,const void *b){
	char*x=(char*)a;
	char*y=(char*)b;
	return strcmp(x,y);
}
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
	qsort(a,n,sizeof(a[0]),cmp);
//C1
//	int b[1000]={0};
//	for (int i=0;i<n;i++){
//		if (b[i]==0){
//			int cnt=1;
//			for (int j=i+1;j<n;j++){
//				if (strcmp(a[i],a[j])==0){
//					++cnt;
//					b[j]=1;
//				}
//			}
//			printf("%s %d\n",a[i],cnt);
//		}
//	}
//}
//C2
	int cnt=1;
	for (int i=0;i<n;i++){
		while(strcmp(a[i],a[i+1])==0){
			cnt++;
			i++;
		}
		printf("%s %d\n",a[i],cnt);
		cnt=1;
	}
}
