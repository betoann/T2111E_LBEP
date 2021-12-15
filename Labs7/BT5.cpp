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
	int sd=arr[0];
	for (int i=0; i<n; i++){
		if(arr[i] > 0){
			sd=arr[i];
			break;
		}
	}
	for (int i=0; i<n; i++){
		if (arr[i] < sd && arr[i] > 0){
			sd=arr[i];
		}
	}
	if (sd>0){
		printf("So duong nho nhat trong mang la: %d",sd);
	}else{
		printf("Mang khong co so duong!");
	}
}
