#include <stdio.h>

int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	if (n>0){
		float i=1,S=0;
		while(i<=n){
			S += 1/i;
			i++;
		}
		printf("Tong S= %f",S);
	}else{
		printf("Error!");
	}
	
}
