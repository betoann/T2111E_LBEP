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
	int sl=arr[0];
	for (int i=0; i<n; i++){
		if (arr[i] % 2 != 0){
			sl=arr[i];
		}
	}
	if(sl % 2 != 0){
		printf("So le cuoi cung cua mang la: %d",sl);
	}else{
		printf("Mang khong co so le!");
	}
}
