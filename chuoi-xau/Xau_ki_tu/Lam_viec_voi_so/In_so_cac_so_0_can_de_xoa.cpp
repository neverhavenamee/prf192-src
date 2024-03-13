#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char c[1000];
		scanf("%s",c);
		int index=-1,res=0;
		for (int i=0;i<strlen(c);i++){
			if (c[i]=='1'){
				if (index==-1)index=i;
				else {
					res+=i-index-1;
					index=i;
				}
			}
		}
		printf("%d\n",res);
	}
}
