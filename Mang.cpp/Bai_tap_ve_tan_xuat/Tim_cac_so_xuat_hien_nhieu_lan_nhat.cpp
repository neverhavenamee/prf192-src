#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int res=0,tmp=0;
	for (int i=0;i<n;i++){
		int cnt=1;
		for (int j=i+1;j<n;j++){
			if (a[i]==a[j])++cnt;
		}
		if (res==cnt){
			b[tmp++]=a[i];
		}
		if (res<cnt){
			res=cnt;
			b[0]=a[i];
			tmp=1;
		}
	}
	printf("%d\n",res);
	for (int i=0;i<tmp;i++)printf("%d ",b[i]);
}
