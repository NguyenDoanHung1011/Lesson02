#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int d, m, y;
	printf("Nhap ngay:", d);
	scanf("%d", &d);
	printf("\nNhap thang:", m);
	scanf("%d", &m);
	printf("\nNhap nam:", y);
	scanf("%d", &y);
	
	printf("%d/%d/%d", d, m, y);
	return 0;
}
