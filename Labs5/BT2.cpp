#include <stdio.h>

int main(){
	int a,b;
	do{
		printf("Nhap a= ");
		scanf("%d",&a);
		printf("Nhap b= ");
		scanf("%d",&b);
	}while(!(a>0 && b>0));
// Tim boi chung nho nhat
	int bcnn;
	if(a>=b){
		for (int i=a; i<=(a*b); i+=a){
			if (i%a==0 && i%b==0){
				bcnn=i;
				break;
			}
		}
	}else{
		for (int i=b; i<=(a*b); i+=b){
			if (i%a==0 && i%b==0){
				bcnn=i;
				break;
			}
		}
	}
	printf("Boi chung nho nhat la %d \n",bcnn);
// Tim uoc chung lon nhat
	while(a!=b){
		if (a>b){
			a-=b;
		}else{
			b-=a;
		}
	}
	printf("Uoc chung lon nhat la %d \n",a);
}
