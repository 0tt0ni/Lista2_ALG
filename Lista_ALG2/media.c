#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float a = 0, b = 0, c = 0, d = 0, r = 0, ap = 0, bp = 0, cp = 0, dp = 0;
	
	do{
		
		printf("digite a renda da familia:");
		scanf("%f", &a);
		if(a>=0){
		ap= a+ap;
			
		printf("digite o numero de filhos:");
		scanf("%f", &b);
		bp= b+bp;
			
		printf("digite o maior salario:");
		scanf("%f", &c);		
		if(c>=cp){
		cp = c;
		}
		
		printf("digite a quantidade de pessoas que recebem menos de 100 reais:");
		scanf("%f", &d);
		dp= d+dp;
		printf("-------------------------------------------------\n");
		r= r+1;
		
	}else{
		ap=ap/r;
		bp=bp/r;
		dp=dp/r;
	printf("%f\n", ap);
	printf("%f\n", bp);
	printf("%f\n", cp);
	printf("%f\n", dp);
	
}}while(a>=0);

	return 0;
}
