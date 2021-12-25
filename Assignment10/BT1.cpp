#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	printf ("Nhap chuoi: ");
	scanf ("%s",str);
	int a,e,i,o,u,k;
	a = e = i = o = u = k = 0;
	for (int j=0; j<strlen(str); j++){
		switch(str[j]){
			case 'a': a++; break;
			case 'e': e++; break;
			case 'i': i++; break;
			case 'o': o++; break;
			case 'u': u++; break;
			default: k++;
		}
	}
	printf ("So nguyen am a: %d\n",a);
	printf ("So nguyen am e: %d\n",e);
	printf ("So nguyen am i: %d\n",i);
	printf ("So nguyen am o: %d\n",o);
	printf ("So nguyen am u: %d\n",u);
	printf ("so nguyen am khac: %d\n",k);
}
