#include <stdio.h>

int main (){
	int n,snd;
	printf("Nhap n= ");
	scanf("%d",&n);
	if (n<0 || n>9999){
		printf("So khong hop le!");
	}else{
			snd=n%10;
			n=n/10;
			if (n>0){
				snd=snd*10+n%10;
				n=n/10;
				if (n>0){
					snd=snd*10+n%10;
					n=n/10;
					if (n>0){
						snd=snd*10+n%10;
						n=n/10;
						printf("So nghich dao la: %d",snd);
					}else{
						printf("So nghich dao la: %d",snd);
					}
				}else{
					printf("So nghich dao la: %d",snd);
				}
			}else{
				printf("So nghich dao la: %d",snd);
			}
	}
}
