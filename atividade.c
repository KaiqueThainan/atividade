#include <stdio.h>

void soma (float num1, float num2){
	float resultado;
		resultado= num1 + num2;
	printf("O resultado é:%.2f", resultado);
	
}

void sub (float num1, float num2){
        float resultado;
   	resultado= num1 - num2;
	printf("o resultado é:%.2ff", resultado);
}

void mult (float num1, float num2){
	float resultado;
	resultado= num1 * num2;
	printf("o resultado é:%.2f", resultado);

}

void div (float num1, float num2){
	float resultado;
	if(num1 == 0){
	printf("erro Divi por 0\n");
        }else{
	resultado= num1 / num2;
	printf("o resultado é:%.2f", resultado);
	}	
	}
float valor (){

	float numero; 
		printf("Digite um numero");
		scanf("%f",&numero);
		return numero;



}


void main() {
    char operacao;
    int cont;
    
    cont= 1;
while(cont){
    //valor(); num1;
    //printf("Digite o primeiro numero: ");
    //scanf("%f", &num1);
    printf("Escolha a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);
    // valor(); num2;
    //printf("Digite o segundo numero: ");
    //scanf("%f", &num2);

    switch(operacao) {
        case '+':
		soma(valor(),valor());
            //resultado = num1 + num2;
           //printf("Resultado: %.2f\n", resultado);
           break;
        case '-':
		sub(valor(),valor());
            //resultado = num1 - num2;
            //printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
	    mult(valor(),valor());
            //resultado = num1 * num2;
            //printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
	    float num1;
	    float num2;
	    num1 = valor();
	    num2 = valor();
	    div (num1,num2);
            /*if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: Não pode conter número 0\n");
            }*/
            break;
        default:
            printf("Operacao invalida\n");
    }
    printf("Deseja continuar?\n digite 1 para SIM e 0 para NAO");
    scanf("%d",&cont);
    }
}
