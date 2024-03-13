#include<stdio.h>
#include<math.h>
#include<string.h>
char a[10000001], n[10000001];
int main(){
	scanf("%c%c",&a,&n);	
	int tmp = a[strlen(a)-1]-'0';
	if(tmp==0 || tmp ==1 || tmp==5|| tmp==6){
		printf("%d",tmp);
		return 0;
	}
	int r;
	if(strlen(n)==1) r=n[0]-'0';
	else r = (n[strlen(n)-2]-'0')*10 + n[strlen(n)-1]-'0';
	int r2[4]={2,4,8,6};
	int r3[4]={3,9,7,1};
	int r4[4]={4,6,4,6};
	int r7[4]={7,9,3,1};
	int r8[4]={8,4,2,6};
	int r9[4]={9,1,9,1};
	r%=4;
	if(tmp==2) printf("%d",r2[r]);
		else if(tmp==3) printf("%d",r3[r]);
			else if(tmp==4) printf("%d",r4[r]);
				else if(tmp==7) printf("%d",r7[r]);
					else if(tmp==8) printf("%d",r8[r]);
						else if(tmp==9) printf("%d",r9[r]);
						
}
