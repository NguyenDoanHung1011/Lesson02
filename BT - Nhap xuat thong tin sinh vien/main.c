#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char rollno[16]="Tran Van A";
	int age=18;
	char name[50]="R001";
	char address[200]="Ha Noi";
	
	printf("=============================\n");
	printf("| Ten        | Tuoi   | Ma SV     | Dia chi        |\n");
	printf("| %s | %d     | %s      | %s         |\n", rollno, age, name, address);
	printf("==============================");
	
	return 0;
}
