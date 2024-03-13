#include <stdio.h>
#include <math.h>
int main()
{
	int n; 
	scanf("%d", &n);
	for(int i=0;i<=n;i++){
		if(i % 3 == 0){
			printf("cac boi so cua 3 la: %d",i);
		}
	}
	return 0;
}
