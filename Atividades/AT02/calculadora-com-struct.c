#include <stdio.h> 

typedef struct 
{
	int a;
	int b;
	int op;
	double resultado;
} Calculadora;


int main(){  
	Calculadora calc;
	for(;;){
		printf("Digite o primeiro valor\n");
		scanf("%d", &calc.a);
		printf("Digite o segundo valor\n");
		scanf("%d", &calc.b);

		printf("Digite a operação\n0 - Sair\n1 - Somar\n2- Subtrair\n3- Multiplicar\n4-Dividir\n");
		scanf("%d", &calc.op);
		switch (calc.op){
			case 0:{
				printf("Sair\n");
				break;
			}
			case 1:{
				calc.resultado = calc.a + calc.b;
				printf("Resultado = %f\n", calc.resultado);
				break;
			}
			case 2:{
				calc.resultado = calc.a - calc.b;
				printf("Resultado = %f\n", calc.resultado);
				break;
			}
			case 3:{
				calc.resultado = calc.a * calc.b;
				printf("Resultado = %f\n", calc.resultado);
				break;
			}
			case 4:{
				if (calc.b == 0){
					printf("Não é possível dividir por 0\n");
				}else{
					calc.resultado = calc.a / calc.b;
					printf("Resultado = %f\n", calc.resultado);	
				}		
				break;
			}
			default: printf("Opção inválida\n");
		}

		if (calc.op == 0) break;

	}
	
}


