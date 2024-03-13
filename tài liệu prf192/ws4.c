#include<stdio.h>
int gcd(int a, int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
int nhap(int a[],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}

int SoChanAm(int a[],int n){
	int max=-1e9-1;
	for(int i=0;i<n;i++){
		if(a[i]>max && a[i]<0 && a[i]%2==0){
			max=a[i];
		}
	}
	return max;
}

int Everage(int a[], int n){
	int sum=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==1){
			sum+=a[i];
		}
	}
	return sum/n;
}

int GCD(int a[], int n) {
    int kq=gcd(a[0],a[1]);
    for(int i=2;i<n;i++){
    	kq=gcd(kq,a[i]);
	}
	return kq;
}

int sapxep(int a[],int n){
	int tmp;
	for(int i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			tmp=a[i+1];
			a[i+1]=a[i];
			a[i]=tmp;
		}
	}
}
int main(){
	int n,choice;
	int a[100];
	while(choice==1){
	printf("1. Input N and array of integer numbers\n");
	printf("2. Find the largest even negative number\n");
	printf("3. Calculate Everage total of the ODD numbers\n");
	printf("4. Calculate greatest common divisor of all array members\n");
	printf("5. Sort up ascending Display all elements\n");
	printf("6. Exit\n");
	printf("Your Choice: ");
	scanf("%d",&choice);
	switch(choice){
	case 1:
            do {
                    printf("Nhap so phan tu cua mang (2 < N < 100): ");
                    scanf("%d", &n);
                } while (n < 3 || n > 99);
                nhap(a,n);
				break;
		case 2: printf("So chan am lon nhat la: ",SoChanAm(a,n));break;
		case 3: printf("Tong binh quan cac so le la: ",Everage(a,n));break;
		case 4: printf("Uoc chung lon nhat cua cac phan tu trong mang la: ",GCD(a,n));break;
		case 5: printf("Thu tu tang dang cua cac phan tu trong mang la: ",sapxep(a,n));break;
		case 6: printf("Goodbye!");break;
		default:printf("Invalid choice, try again\n");break;
		}
	}
	return  0;
}
