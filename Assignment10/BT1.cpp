#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	printf ("Nhap chuoi: ");
	scanf ("%s",str);
	int nguyenam=0, phuam=0;
	for (int i=0; i<strlen(str); i++){
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ){
			nguyenam++;
		}else {
			phuam++;
		}
	}
	printf ("Chuoi vua nhap co %d nguyen am va %d phu am \n",nguyenam,phuam);
}
