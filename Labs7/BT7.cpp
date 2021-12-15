#include <stdio.h>

int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0; i<n; i++){
		printf("Nhap phan tu arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	int smax=0,sum=0;
	for (int i=0; i<n; i++){
		if (arr[i] > 0){
			sum+=arr[i];
		}else{
			if (smax < sum){
				smax=sum;
				sum=0;
			}
		}
	}
	if (smax > 0){
		printf("Chuoi so duong co tong lon nhat la: %d",smax);
	}else{
		printf("Mang khong co so duong!");
	}
}
