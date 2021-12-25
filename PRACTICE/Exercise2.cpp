#include <stdio.h>

void reverseArray(int ary[],int x){
	int temp;
	for (int i=0; i<x-1; i++){
		for (int j=0; j<x-1-i; j++){
			temp = ary[j];
			ary[j] = ary[j+1];
			ary[j+1] = temp;
		}
	}
	for (int i=0; i<x; i++){
		printf (" %d \t",ary[i]);
	}
}

int main(){
	int n;
	do{
		printf ("Nhap so phan tu cua mang: ");
		scanf ("%d",&n);
	}while (n<=0);
	int ary[n];
	for (int i=0; i<n; i++){
		printf ("Nhap phan tu ary[%d]= ",i);
		scanf ("%d",&ary[i]);
	}
	printf (" Mang sau khi in nguoc: \n");
	reverseArray(ary,n);
}
