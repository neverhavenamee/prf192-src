#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
// kiem tra in thuong
int is_lower(char c){
	if(c>='a' && c<='z'){
		return 1;
	}
	return 0;
}
// kiem tra in hoa
int is_upper(char c){
	if(c>='A' && c<='Z'){
		return 1;
	}
	return 0;
}

//kiem tra 1 ki tu co phai chu cai khong
int is_alpha(char c){
	if((c>='a' && c<='z' )||(c>='A') && c<='Z'){
		return 1;
	}
	return 0;
}
//kiem tra 1 ki tu co phai la ki tu khong
int is_digit(char c){
	if(c>='0' && c<='9'){
		return 1;
	}
	return 0;
}
//Tra ve dang in thuong cua ki tu c
char to_lower(char c){
	if(c>='A'&&c<='Z'){
		c+=32;
	}
	return c
}

// Tra ve dang in hoa cua ki tu c
char to_upper(char c){
	if(c>='a' && c<='z'){
		c-=32;
	}
	return c;
}
//Tra ve chieu dai xau
int strlen(char c[]){
	int cnt=0;
	while(c[cnt]!='\0'){
		cnt++;
	}
	return cnt;
}
//Viet thuong tat ca cac ki tu trong xau
char* strlwr(char c[]){
	for(int i=0;i<strlen(c);i++){
		if(c[i]>='A'&& c[i]<='Z'){
			c[i]+=32;
		}
	}
	return c;
}

//Viet hoa tat ca cac ki tu trong xau
char* strupr(char c[]){
	for(int i=0;i<strlen(c);i++){
		c[i]=to_upper(c[i]);
	}
	return c;
}
int min(int a,int b){
		return a<b?a:b;
}
// So sanh 2 xau theo thu tu tu dien
int strcmp(char c[],char d[]){
	int n1=strlen(c);
	int n2=strlen(d);
	for(int i=0;i<min(n1,n2);i++){
		if(c[i]!=d[i]){
			if(c[i]>d[i]) return 1;
			else if(c[i]<d[i]) return -1;
		}
	}
	if(n1==n2) return 0;
	else if(n1<n2) return -1;
	else return 1;
}
//So sanh 2 xau theo thu tu tu dien nhung khong phan biet hoa thuong
int strcmpi(char c[],char d[]){
	int n1=strlen(c);
	int n2=strlen(d);
	strlwr(c);
	strlwr(d);
	for(int i=0;i<min(n1,n2);i++){
		if(c[i]!=d[i]){
			if(c[i]>d[i]) return 1;
			else if(c[i]<d[i]) return -1;
		}
	}
	if(n1==n2) return 0;
	else if(n1<n2) return -1;
	else return 1;
}

//Chuyen 1 xau ki tu so thanh so nguyen long long
long long atoll(char c[]){
	long long res=0;
	for(int i=0;i<strlen(c);i++){
		res=res*10 + c[i]-'0';
	}
	return res;
}

//Ham dao nguoc 1 xau
char* strrev(char c[]){
	l=0; r=strlen(c)-1;
	while(l<r){
		char tmp=c[l];
			 c[l]=c[r];
			 c[r]=tmp;
			 l++;r--;
	}
	return c;
}

//char* strcpy(char c[],char d[]) dau tien xoa' xau c sau do lay sau d gan' vao xau c
//char* strcat(char c[], char d[]) noi xau d vao xau c
//int atoi(char c[]) tra ve so int cua xau ban dau	
