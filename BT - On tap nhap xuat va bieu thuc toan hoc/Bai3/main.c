#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int sum=0;
	
	for (int i=0; i <= n; i++) {
		sum += i;
	}
	
	printf("Tong gia tri;%d", sum);
	return 0;
}
