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
	int x,count=0;
	printf("Nhap x= ");
	scanf("%d",&x);
	for (int i=0; i<n; i++){
		if (arr[i] == x){
			printf("%d co trong mang \n",x);
			count++;
			break;
		}
	}
	if (count==0){
		printf("%d khong co trong mang \n",x);
	}
}
