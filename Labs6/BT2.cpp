#include <stdio.h>

int main(){
	int n;
	do{
		printf("Nhap n= ");
		scanf("%d",&n);
	}while(n<0);
	
	int gt=1;
	for (int i=1; i<=n; i++){
		gt*=i;
	}
	printf("%d! = %d",n,gt);
}
