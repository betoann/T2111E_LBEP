#include <stdio.h>

int main(){
	int n;
	do{
		printf("Nhap n= ");
		scanf("%d",&n);
	}while(n<=1);
	
	for(int i=1; i<n; i++){
		int count=0;
		for(int j=1; j<=i; j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==2){
			printf(" %d ",i);
		}	
	}
}
