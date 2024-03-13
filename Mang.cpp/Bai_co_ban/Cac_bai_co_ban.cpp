#include<stdio.h>
#include<math.h>
//int main(){
//	int n,arr[100];
//	scanf("%d",&n);
//	for (int i=0;i<n;i++){
//		scanf("%d",&arr[i]);
//	}
	//In ra so nho nhat, lon nhat
//	int min=arr[0],max=arr[0];
//	for (int i=0;i<n;i++){
//		if (arr[i]<min)min=arr[i];
//		if (arr[i]>max)max=arr[i];
//	}
//	printf("%d %d",min,max);
	//Dem so chan, le
//	int even=0,odd=0;
//	for (int i=0;i<n;i++){
//		if (arr[i]){
//			if(arr[i]&1)odd++;
//			else even++;
//		}
//	}
//	printf("%d %d",odd,even);
//}
	//In ra so nt trong mang
//int prime(int n){
//	for (int i=2;i<=sqrt(n);i++)if (!(n%i))
//	return 0;
//	return n>1;
//}
//int main(){
//	int n,arr[1000];scanf("%d",&n);
//	for (int i=0;i<n;i++){
//		scanf("%d",&arr[i]);
//	}
//	for (int i=0;i<n;i++){
//		if (prime(arr[i]))printf("%d ",arr[i]);
//	}
//}
	//In ra so nho nhat va nho thu 2 (dc phep bang vs so nho nhat)tuong tu voi so lon nhat
//int main(){
//	int n,arr[1000];
//	scanf("%d",&n);
//	for (int i=0;i<n;i++){
//		scanf("%d",&arr[i]);
//	}
//	int min=1e9+1,min2=1e9+1;
//	for (int i=0;i<n;i++){
//		if (arr[i]<min){
//			min2=min;
//			min=arr[i];
//		}else if (arr[i]<min2){
//			min2=arr[i];
//		}
//	}
//	printf("%d %d",min2,min);
//}	
	//Tuong tu tren nhung neu ko co so lon thu 2(bang so lon nhat ko tinh) in ra -1
//int main(){
//	int n,arr[1000];
//	scanf("%d",&n);
//	for (int i=0;i<n;i++){
//		scanf("%d",&arr[i]);
//	}
//	int min=1e9+1,min2=1e9+1,tmp=0;
//	for (int i=0;i<n;i++){
//		if (arr[i]<min){
//			min2=min;
//			min=arr[i];
//		}else if (arr[i]<min2&&arr[i]!=min){
//			min2=arr[i];
//			tmp++;
//		}
//	}
//	printf("%d ",min);
//	if (!tmp)printf("-1");
//}	
	//Cho mang mot chieu, liet ke cac phan tu co it nhat mot phà tu lien ke trai dau vs no
int main(){
	int n,arr[1000];
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for (int i=0;i<n;i++){
		if (!i&&arr[0]*arr[1]<0)
		printf("%d",arr[0]);
		else if (i==n-1&&arr[n-1]*arr[n-2]<0)
		printf("%d",arr[n-1]);
		else if (arr[i]*arr[i-1]<0||arr[i]*arr[i+1]<0)
		printf("%d",arr[i]);	
	}
}

