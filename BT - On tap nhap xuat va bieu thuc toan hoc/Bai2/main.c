#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r, s, cv;
	printf("Ban kinh: ", r);
	scanf("%f", &r);
	s=3.14*r*r;
	cv=2*3.14*r;
	
	printf("Dien tich hinh tron:%f \nChu vi hinh tron:%f", s, cv);
	return 0;
}
