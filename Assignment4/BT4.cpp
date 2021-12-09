#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	int i=1,count=0;
	if (n > 1){
		while(i <= sqrt(n)){
			i++;
			if (n % i == 0){
				count++;
			}
		}
		if (count == 0){
			printf("Day la so nguyen to");
		}else{
			printf("Day khong phai la so nguyen to");
		}
	}else{
		printf("Day khong phai la so nguyen to");
	}
}

