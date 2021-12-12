#include <stdio.h>

int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	int sd,sum=0;
	while(n>0){
		sd=n%10;
		sum+=sd;
		n=n/10;
	}
	printf("Tong cac chu so cua n la %d",sum);
}
