#include <stdio.h>

void main() {
    char operacao;
    float resultado, num1, num2;
    int cont;
    
    cont= 1;
while(cont){
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Escolha a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch(operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: Não pode conter número 0\n");
            }
            break;
        default:
            printf("Operacao invalida\n");
    }
    printf("Deseja continuar?\n digite 1 para SIM e 0 para NAO");
    scanf("%d",&cont);
    }
}
