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
	for (int i=0; i<n-1; i++){
		for (int j=0; j<n-1-i; j++){
			if (arr[j] < arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	int x,surt=0,flag=0;
	printf("\n Nhap x= ");
	scanf("%d",&x);
	for (int i=0; i<n; i++){
		if (x > arr[i]){
			surt=arr[i];
			flag=1;
			break;
		}
	}
	if (flag == 1){
		printf("So co gia tri nho hon va gan %d nhat la: %d",x,surt);
	}else{
		printf("Mang khong co so nho hon %d",x);
	}
}
