#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, s, cv;
	printf("Chieu dai: ", a);
	scanf("%d", &a);
	printf("Chieu rong: ", b);
	scanf("%d", &b);
	s= a * b;
	cv= a*2 + b*2;
	
	printf("Dien tich hinh chu nhat:%d \nChu vi hinh chu nhat:%d", s, cv);
	return 0;
}
