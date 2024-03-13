#include<stdio.h>
#include<math.h>
int main(){
	int n, m;
	do{
		printf("Enter rows and cols: ");
		scanf("%d %d", &n, &m);
	} while(n<2||n>50||m<2||m>50);
	int a[50][50];
	inputArr(a, n, m);
	outputArr(a, n, m);
	return 0;
}
void inputArr(int a[][50], int n, int m)
{	//nhap cac phan tu trong mang
	printf("=========Input Array==========\n");
	int i, j;
	for (i = 0; i<n; i++){
		for (j = 0; j < m; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
}
void outputArr(int a[][50], int n, int m)
{
	//xuat cac phan tu trong mang
	int i, j;
	printf("=======Output Array========\n");
		for (i = 0; i<n; i++){
		for (j = 0; j < m; j++){
			printf("%d\tx", a[i][j]);
		}
		printf("\n");
	}
}
int findMax(int a[][50], int n, int m){
	int max=-1e9-1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]>max){
				max=a[i][j];
			}
		}
	}
	printf("%d",max);
}

int sumRow(int a[][50], int n, int m){
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			sum+=a[i][j];
		}
		printf("\nTong cac phan tu cua hang thu %d la: %d",i,sum);
	}
}

int sumCol(int a[][50], int n, int m){
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			sum+=a[j][i];
		}
		printf("\nTong cac phan tu cua cot thu %d la: %d",i,sum);
	}	
}

int findK(int a[][50], int n, int m){
	int k;
	scanf("%d",&k);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==k){
				printf("Vi tri cua phan tu bang la hang [%d] cot[%d]  ",i,j);
			}
		}
	}
}

int prime(int n){
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int countPrimes(int a[][50], int n, int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(prime(a[i][j])){
				printf("%d",a[i][j]);
			}
		}
	}
}

float averagePos(int a[][50], int n, int m){
	int sum=0;
	int cnt=0;
	for(int i=0;i<n;i++){
		for((int j=0;j<m;j++){
			if(a[i][j]%2==0){
				sum+=a[i][j];
				cnt++;
			}
		}
	}
	return sum/cnt;
}

int sumMainCross(int a[][50], int n, int m){
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i==j){
				sum+=a[i][j];
			}
		}
	}
	return sum;
}

int sumBelowMC(int a[][50], int n, int m){
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i>j){
				sum+=a[i][j];
			}
		}
	}
	return sum;
}
int sumAboveMC(int a[][50], int n, int m){
		int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i<j){
				sum+=a[i][j];
			}
		}
	}
	return sum;
}
