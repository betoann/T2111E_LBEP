#include <stdio.h>

int main(){
	int n;
	do{
		printf("Nhap n= ");
		scanf("%d",&n);
	}while(n<=0);
	int sum=0;
	for (int i=1; i<=n; i++){
		if (n % i == 0){
			sum+=i;
		}
	}
	printf("Tong cac uoc cua %d la= %d",n,sum);
}
