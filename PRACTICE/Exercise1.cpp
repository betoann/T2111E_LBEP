#include <stdio.h>
int main(){
	int n;
	printf ("Nhap so nguyen n= ");
	scanf ("%d",&n);
	float s=0;
	if (n <= 0){
		printf ("ERROR!\n");
	}else {
		for (int i=1; i<=n; i++){
			s+=(float)1/i;
		}
		printf ("Tong S(n)= %f \n",s);
	}
}
