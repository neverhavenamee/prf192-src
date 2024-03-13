#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int res=0,cnt=1, idx;
	for(int i=0;i<n;i++){
		if(a[i+1]>a[i]){
			cnt++;
		}
		else{
			cnt=1;
		}
		if(cnt>res){
			res=cnt;
			idx=i-res+1; //idx la chi so bat dau cua day con lien tiep
		}
	}
	printf("%d",res);
	for(int i=0;i<res;i++){
		printf("%d",a[idx+i]);
	}
}
