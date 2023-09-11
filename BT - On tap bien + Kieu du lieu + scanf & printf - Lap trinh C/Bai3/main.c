#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, tong, hieu, tich;
	float thuong;
	printf("Nhap du lieu a: %d", a);
	scanf("%d", &a);
	printf("Nhap du lieu b: %d", b);
	scanf("%d", &b);
	tong=a+b;
	hieu=a-b;
	tich=a*b;
	thuong=a/b;
	
	printf("Tong:%d \nHieu:%d \nTich:%d \nThuong:%f", tong, hieu, tich, thuong);
	return 0;
}
