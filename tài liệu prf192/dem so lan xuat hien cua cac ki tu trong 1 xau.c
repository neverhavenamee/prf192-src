#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	char c[1005];
	scanf("%s",c);
	int cnt[26]={0};	
	for(int i=0;i<strlen(c);i++){
		cnt[c[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		if(cnt[i]!=0){
			printf("%c %d\n",(i+'a'),cnt[i]);
		}
	}
}
// Dem so lan xuat hien cua all ki tu trong bang ma ASCII theo thu tu tu dien
// char c[1005];
// gets(c);
//int cnt[256]={0};
//for(int i=0;i<strlen(c);i++){
//      cnt[c[i]]++;
//}
//for(int i=0;i<256;i++){
//  if(cnt[i]!=0]){
//        printf("%c %d\n",i,cnt[i];
//    }
//}
