#include <stdio.h>

int main(){
	int a,b;
	do{
		printf("Nhap a= ");
		scanf("%d",&a);
		printf("Nhap b= ");
		scanf("%d",&b);
	}while(a>=b);
	
	for (int i=a; i<=b; i++){
		int count=0;
		for (int j=1; j<=i; j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==2){
			printf(" %d ",i);
		}
	}
}
