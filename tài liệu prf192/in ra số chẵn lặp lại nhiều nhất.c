#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
	int i,j;
	int a[1000];
	for(i=0;i<7;i++){
		scanf("%d",a+i);
	}
	int ok=-1;
	for (i=0;i<7;i++){
		if (a[i]%2==0){
			ok=1;
			for (j=i+1;j<7;j++){
				if (a[i]==a[j]){
					ok=0;
					break;
				}
			}
			if (!ok)printf("%d ",a[j]);
		}
	}
	if (ok==-1)printf("Pew!!!");
}
