#include <stdio.h>

int main() {
char validaSexo() {
    char sexo;
    while (1) {
        printf("Informe o sexo (M/F): ");
        scanf(" %c", &sexo);
        if (sexo == 'M' || sexo == 'm' || sexo == 'F' || sexo == 'f') {
            return sexo;
        } else {
            printf("Sexo inválido. Por favor, informe M para Masculino ou F para Feminino.\n");
        }
    }
}


float validaSalario() {
    float salario;
    while (1) {
        printf("Informe o salário em reais: ");
        scanf("%f", &salario);
        if (salario > 1.00) {
            return salario;
        } else {
            printf("O salário deve ser maior que R$1,00.\n");
        }
    }
}


char* classificaSalario(float salario) {
    float salario_minimo = 1400.00;
    if (salario > salario_minimo) {
        return "Acima do salário mínimo";
    } else if (salario == salario_minimo) {
        return "Igual ao salário mínimo";
    } else {
        return "Abaixo do salário mínimo";
    }
}

void mostraClassificacao(char sexo, float salario, char* classificacao) {
    printf("\nSexo: %s\n", (sexo == 'M' || sexo == 'm') ? "Masculino" : "Feminino");
    printf("Salário: R$%.2f\n", salario);
    printf("Classificação em relação ao salário mínimo: %s\n", classificacao);
}


    int num_assalariados;

    printf("Informe o número de assalariados a serem cadastrados: ");
    scanf("%d", &num_assalariados);

    int assalariados_abaixo = 0;
    int assalariados_acima = 0;

    for (int i = 0; i < num_assalariados; ++i) {
        printf("\nCadastro de Assalariado:\n");

        char sexo = validaSexo();
        float salario = validaSalario();
        char* classificacao = classificaSalario(salario);

        mostraClassificacao(sexo, salario, classificacao);

        if (classificacao[0] == 'A') {
            assalariados_acima++;
        } else if (classificacao[0] == 'A') {
            assalariados_abaixo++;
        }
    }

    printf("\nResumo:\n");
    printf("Assalariados abaixo do salário mínimo: %d\n", assalariados_abaixo);
    printf("Assalariados acima do salário mínimo: %d\n", assalariados_acima);

    return 0;
}
