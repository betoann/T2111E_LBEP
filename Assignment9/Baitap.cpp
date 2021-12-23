#include <stdio.h>
#include <math.h>

int TimSNT (int n){
	for (int i=n+1; true; i++){
		int count=0;
		for (int j=2; j<i; j++){
			if (i%j==0){
				count++;
			}
		}
		if (count==0){
			return i;
		}
	}
}

int TongCacChuSo (int x){
	int sum=0;
	while (x > 0){
		sum=sum+x%10;
		x=x/10;
	}
	return sum;
}

int ChuVi (int a,int b,int c){
	int cv=a+b+c;
	return cv;
}

float DienTich (int a,int b,int c){
	float ncv=(float) ChuVi(a,b,c)/2;
	float dt=(float) sqrt(ncv*(ncv-a)*(ncv-b)*(ncv-c));
	return dt;
}

int UocChungLN (int a,int b){
	while(a!=b){
		if (a>b){
			a-=b;
		}else{
			b-=a;
		}
	}
	return a;
}

int BoiChungNN (int a,int b){
	if(a>=b){
		for (int i=a; i<=(a*b); i+=a){
			if (i%a==0 && i%b==0){
				return i;
			}
		}
	}else{
		for (int i=b; i<=(a*b); i+=b){
			if (i%a==0 && i%b==0){
				return i;
			}
		}
	}
}

int main(){
	printf ("So nguyen to tiep theo cua n la: %d \n",TimSNT(4));
	printf ("Tong cac chu so: %d \n",TongCacChuSo(2345));
	printf ("Chu vi tam giac la: %d \n",ChuVi(3,4,5));
	printf ("Dien tich tam giac la: %f \n",DienTich(3,5,7));
	printf ("Uoc chung lon nhat la: %d \n",UocChungLN(6,9));
	printf ("Boi chung nho nhat la: %d \n",BoiChungNN(6,9));
}
