#include <stdio.h>

int main (){
	int n;
	printf("Nhap n= ");
	scanf("%d", &n);
	int hn,ht,hc,dv;
	if (n >= 10000 || n <= 0 ){
		printf("So khong hop le!");
	}else{
		if (n >= 1000){
			hn=n/1000;
			ht=(n/100)%10;
			hc=(n%100)/10;
			dv=n%10;
			printf("So nghich dao cua %d la: %d%d%d%d", n,dv,hc,ht,hn);
		}else{
			if (n > 99 && n <= 999){
				ht=n/100;
				hc=(n/10)%10;
				dv=n%10;
				printf("So nghich dao cua %d la: %d%d%d", n,dv,hc,ht);
			}else{
				hc=n/10;
				dv=n%10;
				printf("So nghich dao cua %d la: %d%d", n,dv,hc);
			}
		}	
	}	
}
