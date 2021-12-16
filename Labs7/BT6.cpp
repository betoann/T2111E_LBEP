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
	int max=0,count=0;
	for (int i=0; i<n; i++){
		if (arr[i] > 0){
			count++;
			if (max < count){
				max=count;
			}
		}else{
			count=0;
		}
	}
	if (max > 0){
		printf("So luong cac so duong lien tiep nhieu nhat la: %d",max);
	}else{
		printf("Mang khong co so duong!");
	}
}
