#include <stdio.h>
#include <math.h>

typedef struct {
    int numerador;
    int denominador;
} Fracao;

void calcularSequencia(int n, double x, Fracao *sequencia) {
    sequencia[0].numerador = 1;
    sequencia[0].denominador = 1;

    for (int i = 1; i <= n; i++) {
        double termo = 1.0 / pow(x, i);
        sequencia[i].numerador = 1;
        sequencia[i].denominador = pow(x, i);
    }
}

void gravarResultado(int n, Fracao *sequencia) {
    printf("%d =>  %d/%d", n, sequencia[0].numerador, sequencia[0].denominador);

    for (int i = 1; i <= n; i++) {
        printf(", %d/%d", sequencia[i].numerador, sequencia[i].denominador);
    }

    printf(" }\n");

    FILE *arquivo = fopen("RESULTADO06.TXT", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(arquivo, "%d =>  %d/%d", n, sequencia[0].numerador, sequencia[0].denominador);

    for (int i = 1; i <= n; i++) {
        fprintf(arquivo, ", %d/%d", sequencia[i].numerador, sequencia[i].denominador);
    }

    fprintf(arquivo, " }\n");
    fclose(arquivo);
}


int main() {
    int n;
    double x;
    
    printf("Digite a quantidade de termos (n): ");
    scanf("%d", &n);

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    Fracao sequencia[n + 1];  // Array para armazenar a sequência
   
    calcularSequencia(n, x, sequencia);
    gravarResultado(n, sequencia);

    printf("Resultados gravados em \"RESULTADO06.TXT\".\n");

    return 0;
}
