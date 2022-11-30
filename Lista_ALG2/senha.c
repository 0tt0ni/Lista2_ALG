#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int  x = 0, y = 0;
	
	printf("--------------------------------\n\n");
	
		printf("crie sua senha numerica\n\n");
		scanf("%d", &x);
		
	printf("--------------------------------\n\n");
	
		printf("Digite sua senha para acessar sua conta\n\n");
		scanf("%d", &y);
		
	if(x==y){
		printf("boas vindas\n\n");
	}else{
		printf("tente novamente\n\n");
		scanf("%d", &y);
		
	if(x==y){
		printf("boas vindas\n\n");
	}else{
		printf("tente novamente\n\n");
		scanf("%d", &y);
		
		if(x==y){
		printf("boas vindas\n\n");
	}else{
		printf("limite de tentativas atingido, cartao bloqueado");
		
}
}
}

	return 0;
	
	

}
