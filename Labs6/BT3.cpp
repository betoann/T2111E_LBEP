#include <stdio.h>

int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	int sd,sdn=0;
		while(n!=0){
		sd=n%10;
		sdn=sdn*10+sd;
		n=n/10;
		}
		printf("So dao nguoc la: %d",sdn);
}
