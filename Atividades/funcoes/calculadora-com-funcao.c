#include <stdio.h> 

typedef struct 
{
	int a;
	int b;
	int op;
	double resultado;
} Calculadora;

int soma(int a, int b);
void subtrair(int a, int b);

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
				calc.resultado = soma(calc.a, calc.b);
				printf("Resultado = %f\n", calc.resultado);
				break;
			}
			case 2:{
				subtrair(calc.a, calc.b);
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

int soma(int a, int b){
	float resultado;
	resultado = a + b;
	return resultado;
}


void subtrair(int a, int b){
	float resultado;
	resultado = a - b;
	printf("Resultado = %f\n", resultado);
}


