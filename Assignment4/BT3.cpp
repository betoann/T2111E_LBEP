#include <stdio.h>

int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	int i=0;
	if(n > 0){
		printf("Cac so chan be hon %d la:\n",n);
		while(i < n-1){
			i++;
			if(i % 2 == 0){
				printf(" %d ",i);
			}
		}
	}else{
		printf("Error!");
	}
	
}

