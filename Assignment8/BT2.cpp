#include <stdio.h>

int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	int arr[n];
	int j=0;
	for (int i=0; i<n; i++){
		int flag = 0;
		do{
			flag = 0;
			printf("Nhap phan tu arr[%d]= ",i);
			scanf("%d",&arr[i]);
			for (int j=0; j<=i-1; j++){
				if (arr[j] == arr[i]){
				flag = 1;
				break;
				}
			}
		}while (flag==1);
	}	
	printf("Mang sau khi nhap la: \n");
	for (int i=0; i<n; i++){
		printf("%5d",arr[i]);
	}
}
