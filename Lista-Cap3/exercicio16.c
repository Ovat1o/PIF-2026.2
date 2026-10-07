#include <stdio.h>
#include <stdlib.h>

#define SENHA_SECRETA 2026
#define MAX_TENTATIVAS 3

int main() {
    int senha, tentativas = 0, acessoConcedido = 0;

    while (tentativas < MAX_TENTATIVAS && !acessoConcedido) {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        tentativas++;

        if (senha == SENHA_SECRETA) {
            acessoConcedido = 1;
        } else if (tentativas < MAX_TENTATIVAS) {
            printf("Senha incorreta. Restam %d tentativa(s).\n",
                   MAX_TENTATIVAS - tentativas);
        }
    }

    if (acessoConcedido) {
        printf("Acesso Concedido! Tentativas utilizadas: %d\n", tentativas);
    } else {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    system("PAUSE");
    return 0;
}
