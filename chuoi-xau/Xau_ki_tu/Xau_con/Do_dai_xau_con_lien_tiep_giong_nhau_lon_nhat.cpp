#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char c[1000];
		scanf("%s",c);
		int cnt=1,res=0;
		for (int i=1;i<strlen(c);i++){
			if (c[i]==c[i-1]){
				++cnt;
			}else{
				res=cnt;
				cnt=1;
			}
		}
		if (cnt>res)res=cnt;
		printf("%d",res);
	}
}
