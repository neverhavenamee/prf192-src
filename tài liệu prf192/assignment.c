#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int add(char c[],int n){
	int a[1001][1001];
	int m=0;
	printf("Nhap vao danh sach N sinh vien: ");
	scanf("%d",&n);
	scanf("\n");
	for(int i=0;i<n;i++){
		printf("Nhap thong tin sinh vien gom Name, Student ID, Sex: ");
		gets(c);
		char *token=strtok(c," ");
		while(token!=NULL){
			strcpy(a[m],token);
			m++;
			token=strtok(NULL," ");
		}
	}
}
int remove(char c[],int n){
	printf("Nhap vao ma so sinh vien muon xoa: ");
	scanf("%d",&)
}
int main(){
	int choice;
	printf("\n=======================MENU=======================");
	printf("\n| 1- Nhap vao danh sach sinh vien");
	printf("\n| 2- Them sinh vien |");
	printf("\n| 3- Xoa sinh vien khoi danh sach |");
	printf("\n| 4- Result |");
	printf("\n| 5- Check result |");
	printf("\n| 6- In ra danh sach |");
	printf("\n==================================================\n");
	printf("\nEnter Your Choice: ");
	scanf("%d", &choice);
}



