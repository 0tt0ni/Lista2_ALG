#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a = 0, b = 0, c = 0,d = 0, x = 4, y = 0, z = 0;
	
	printf("digite os tres numeros pares a terem sua media aritmetica:\n");
			scanf("%d", &a);
			scanf("%d", &b);
			scanf("%d", &c);
			scanf("%d", &d);
			
		if(a,b,c =! 0){
			if(a,b,c%2 == 0){
				y=a+b+c+d;
				z=y/x;
				printf("%d", z);
			}else{
				printf("calculo invalido");
			}
		}else{
			printf("calculo invalido");
		}
	
	return 0;
}
