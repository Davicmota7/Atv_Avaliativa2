#include <stdio.h>

int main() {

float calcularAdicionalProdutividade(int quantidadeDePecas) {
    if (quantidadeDePecas <= 50) {
        return 0;
    } else if (quantidadeDePecas <= 80) {
        return (quantidadeDePecas - 50) * 0.50;
    } else {
        return (80 - 50) * 0.50 + (quantidadeDePecas - 80) * 0.75;
    }
}

float calcularSalario(int quantidadeDePecas) {
    float salarioBase = 600;
    float adicionalProdutividade = calcularAdicionalProdutividade(quantidadeDePecas);
    return salarioBase + adicionalProdutividade;
}


    int quantidadeDePecas;

    while (1) {
        printf("Digite a quantidade de peças fabricadas pelo operário (ou digite -1 para encerrar): ");
        scanf("%d", &quantidadeDePecas);

        if (quantidadeDePecas == -1) {
            break;
        } else {
            float salario = calcularSalario(quantidadeDePecas);
            printf("O salário do operário é: R$ %.2f\n", salario);
        }
    }

    return 0;
}
