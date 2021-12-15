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
	int sum=0,count=0;
	for (int i=0; i<n; i++){
		if (arr[i] % 2 != 0 && i%2==0){
			sum+=arr[i];
			count++;
		}
	}
	if (count>0){
		float tb=(float) sum/count;
		printf("Trung binh cong cac so le o vi tri chan trong mang la: %f \n",tb);
	}else{
		printf("Khong co so le o vi tri chan trong mang!");
	}
	
	
}
