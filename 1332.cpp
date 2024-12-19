#include <stdio.h>
#include <string.h>

int Vencedor(char *Palavra, char *Palavra1) {
    if (strcmp(Palavra, Palavra1) == 0) {
        return 0; // Empate
    } else if (strcmp(Palavra, "tesoura") == 0 && strcmp(Palavra1, "papel") == 0) {
        return 1; // Rajesh vence
    } else if (strcmp(Palavra, "papel") == 0 && strcmp(Palavra1, "pedra") == 0) {
        return 1;
    } else if (strcmp(Palavra, "pedra") == 0 && strcmp(Palavra1, "lagarto") == 0) {
        return 1;
    } else if (strcmp(Palavra, "lagarto") == 0 && strcmp(Palavra1, "spock") == 0) {
        return 1;
    } else if (strcmp(Palavra, "spock") == 0 && strcmp(Palavra1, "tesoura") == 0) {
        return 1;
    } else if (strcmp(Palavra, "tesoura") == 0 && strcmp(Palavra1, "lagarto") == 0) {
        return 1;
    } else if (strcmp(Palavra, "lagarto") == 0 && strcmp(Palavra1, "papel") == 0) {
        return 1;
    } else if (strcmp(Palavra, "papel") == 0 && strcmp(Palavra1, "spock") == 0) {
        return 1;
    } else if (strcmp(Palavra, "spock") == 0 && strcmp(Palavra1, "pedra") == 0) {
        return 1;
    } else if (strcmp(Palavra, "pedra") == 0 && strcmp(Palavra1, "tesoura") == 0) {
        return 1;
    } else {
        return 2; // Sheldon vence
    }
}

int main() {
    int c, i = 0, x;
    char Palavra[10], Palavra1[10];

    // Lê o número de casos
    scanf("%d", &c);
    for (i = 0; i < c; i++) {
        x = 0;
        // Lê as duas palavras
        scanf("%s", Palavra);
        scanf("%s", Palavra1);

        // Determina o vencedor
        x = Vencedor(Palavra, Palavra1);

        // Exibe o resultado
        if (x == 0) {
            printf("empate\n");
        } else if (x == 1) {
            printf("rajesh\n");
        } else if (x == 2) {
            printf("sheldon\n");
        }
    }
    return 0;
}
