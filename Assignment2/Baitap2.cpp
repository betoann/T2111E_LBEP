#include <stdio.h>

int main (){
	int m,d,rank;
	printf("Nhap thang= ");
	scanf("%d",&m);
	printf("Nhap ngay= ");
	scanf("%d",&d);
	if (m == 1 && d > 0 && d < 32){
		printf("Day la ngay thu %d \n",d);
		rank=d%7+1;
		if (rank == 1){
			printf("Va la chu nhat");
		}else {
			printf("Va la thu %d",rank);
		}
	}else if (m == 2 && d > 0 && d < 30){
		printf("Day la ngay thu %d \n",d+31);
		rank=(d+31)%7+1;
		if (rank == 1){
			printf("Va la chu nhat");
		}else {
			printf("Va la thu %d",rank);
		}
	}else if (m == 3 && d > 0 && d < 32){
		printf("Day la ngay thu %d \n",d+59);
		rank=(d+59)%7+1;
		if (rank == 1){
			printf("Va la chu nhat");
		}else {
			printf("Va la thu %d",rank);
		}
	}else if (m == 4 && d > 0 && d < 31){
		printf("Day la ngay thu %d \n",d+90);
		rank=(d+90)%7+1;
		if (rank == 1){
			printf("Va la chu nhat");
		}else {
			printf("Va la thu %d",rank);
		}
	}else if (m == 5 && d > 0 && d < 32){
		printf("Day la ngay thu %d \n",d+120);
		rank=(d+120)%7+1;
		if (rank == 1){
			printf("Va la chu nhat");
		}else {
			printf("Va la thu %d",rank);
		}
	}else if (m == 6 && d > 0 && d < 31){
		printf("Day la ngay thu %d \n",d+151);
		rank=(d+151)%7+1;
		if (rank == 1){
			printf("Va la chu nhat");
		}else {
			printf("Va la thu %d",rank);
		}
	}else if (m == 7 && d > 0 && d < 31){
		printf("Day la ngay thu %d \n",d+181);
		rank=(d+181)%7+1;
		if (rank == 1){
			printf("Va la chu nhat");
		}else {
			printf("Va la thu %d",rank);
		}
	}else if (m == 8 && d > 0 && d < 31){
		printf("Day la ngay thu %d \n",d+212);
		rank=(d+212)%7+1;
		if (rank == 1){
			printf("Va la chu nhat");
		}else {
			printf("Va la thu %d",rank);
		}
	}else if (m == 9 && d > 0 && d < 31){
		printf("Day la ngay thu %d \n",d+243);
		rank=(d+243)%7+1;
		if (rank == 1){
			printf("Va la chu nhat");
		}else {
			printf("Va la thu %d",rank);
		}
	}else if (m == 10 && d > 0 && d < 31){
		printf("Day la ngay thu %d \n",d+273);
		rank=(d+273)%7+1;
		if (rank == 1){
			printf("Va la chu nhat");
		}else {
			printf("Va la thu %d",rank);
		}
	}else if (m == 11 && d > 0 && d < 31){
		printf("Day la ngay thu %d \n",d+304);
		rank=(d+304)%7+1;
		if (rank == 1){
			printf("Va la chu nhat");
		}else {
			printf("Va la thu %d",rank);
		}
	}else if (m == 12 && d > 0 && d < 31){
		printf("Day la ngay thu %d \n",d+334);
		rank=(d+334)%7+1;
		if (rank == 1){
			printf("Va la chu nhat");
		}else {
			printf("Va la thu %d",rank);
		}
	}else {
		printf ("So thang va ngay khong hop le!");
	}
}
