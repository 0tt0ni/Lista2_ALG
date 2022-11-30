#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a = 0, b = 0, c = 0, d = 0, e = 0, x = 0;
	
	printf("digite cinco numeros positivos ou negativos:\n");
	
		scanf(" %d", &a);
		scanf(" %d", &b);
		scanf(" %d", &c);
		scanf(" %d", &d);
		scanf(" %d", &e);
		
		if(a<0){
			x = x+1;
			
		}if(b<0){
			x = x+1;
			
		}if(c<0){
			x = x+1;
			
		}if(d<0){
			x = x+1;
			
		}if(e<0){
			x = x+1;
		}
		if(x!=0){
			printf("voce digitou %d numeros negativos", x);
		}else{
			printf("n a numeros negativos");
}
	
	return 0;
}
