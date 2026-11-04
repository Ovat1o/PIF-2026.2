#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;

    printf("=== URA - Atendimento Automatico Bancario ===\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferencia\n");
    printf("4 - Falar com Atendente\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\n[Direcionamento] Voce escolheu 'Consultar Saldo'. Aguarde enquanto consultamos as informacoes da sua conta...\n");
            break;
        case 2:
            printf("\n[Direcionamento] Voce escolheu 'Efetuar Extrato'. O extrato dos ultimos 30 dias sera gerado e enviado ao seu e-mail cadastrado.\n");
            break;
        case 3:
            printf("\n[Direcionamento] Voce escolheu 'Fazer Transferencia'. Digite os dados da conta de destino ou use a chave PIX.\n");
            break;
        case 4:
            printf("\n[Direcionamento] Voce escolheu 'Falar com Atendente'. Transferindo a sua ligacao para a nossa equipe de suporte. Aguarde na linha...\n");
            break;
        default:
            printf("\n[Erro] Opcao invalida! Por favor, digite um numero valido correspondente ao menu (1 a 4).\n");
            break;
    }

    system("PAUSE");
    return 0;
}

