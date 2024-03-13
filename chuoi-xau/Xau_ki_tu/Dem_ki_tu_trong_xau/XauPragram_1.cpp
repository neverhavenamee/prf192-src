//19.11
#include<stdio.h>
#include<string.h>
void my_strlwr(char c[],int n){
	for (int i=0;i<=n;i++){
		if (c[i]>='A'&&c[i]<='Z')c[i]+=32;
	}
}
int check(int cnt[]){
	for (int i=0;i<26;i++){
		if (!cnt[i])return 0;
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	char c[1000];
	gets(c);
	my_strlwr(c,n);
	int cnt[256]={0};
	for (int i=0;i<=n;i++){
		cnt[c[i]-'a']=1;
	}
	if (check(cnt))printf("YES");
	else printf("NO");
}
