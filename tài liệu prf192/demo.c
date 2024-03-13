#include<stdio.h>
#include<math.h>
void menu(){
	printf("<===============MENU======================>\n");
	printf("1. Input N and array of integer numbers\n");
	printf("2. Tong cac phan tu trong mang\n");
	printf("3. Xuat cac phan tu trong mang\n");
	printf("4. Sap xep cac phan tu trong mang\n");
	printf("5. Exit\n");
}

void inPut(int a[],int n){
	for(int i=0;i<n;i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}

void outPut(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
void tong(int a[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	printf("%d",sum);
}

int sapxep(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tmp=a[j];
				a[j]=a[i];
				a[i]=tmp;
			}
		}
		printf("%d ",a[i]);
	}
	printf("%d",a[n-1]);
}
	
int main(){
	menu();
	int choose,n;
	int a[n];
	do{
		printf("\nYour choice: ");
		scanf("%d",&choose);
		switch(choose){
			case 1: printf("Nhap kich thuoc cua mang:");
			scanf("%d",&n);
			inPut(a,n);break;
			case 2: tong(a,n);break;
			case 3: outPut(a,n);break;
			case 4: printf("%d ",sapxep(a,n));break;
			case 5: printf("Goodbye!");break;
			default: printf("INVALID NUMBER!");break;
		}
	}while(choose!=5);
}
