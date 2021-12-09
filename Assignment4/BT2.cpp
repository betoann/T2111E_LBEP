#include <stdio.h>

int main(){
	int count=0,sum=0,i=0;
	while(count < 100){
		i++;
		if(i % 2 != 0){
			sum += i;
			count++;
		}
	}
	printf("Tong 100 so le= %d",sum);
}
