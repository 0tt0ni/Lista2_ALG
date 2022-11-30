#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x=0, y=0, z=0;
	
	printf("boas vindas ao espelho numerico\n\n");
	printf("digite os numeros a serem espelhados\n");
	
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);
	
	printf("--------------------------------\n");
	
	printf("%d\n", z);
	printf("%d\n", y);
	printf("%d\n", x);
	return 0;
}
