#include <stdio.h>

int main() {
    int opcao;
    float totalConta = 0.0;
    float desconto = 0.0;
    float totalFinal = 0.0;

    printf("==================================================\n");
    printf("          BEM-VINDO AO CARDAPIO DIGITAL           \n");
    printf("             LANCHONETE & RESTAURANTE             \n");
    printf("==================================================\n");
    printf(" [PROMOCOES] Pedidos a partir de R$ 100,00 ganham \n");
    printf("             10%% de desconto no total da conta!\n");
    printf("==================================================\n");

    // Laco de repeticao para permitir multiplas selecoes
    do {
        // Espacamento visual claro e organizado para acessibilidade
        printf("\n\n==================================================\n");
        printf("                 MENU PRINCIPAL                   \n");
        printf("==================================================\n");

        printf("\n--- [ 1 ] PRATOS PRINCIPAIS ---\n");
        printf("  1. Risoto de Funghi       - R$ 45.90\n");
        printf("  2. Camarao na Moranga     - R$ 68.00\n");
        printf("  3. File Parmegiana        - R$ 38.50\n");

        printf("\n--- [ 2 ] BEBIDAS ---\n");
        printf("  4. Vinho Tinto (Taca)     - R$ 12.00\n");
        printf("  5. Suco Natural           - R$  8.00\n");
        printf("  6. Agua Mineral           - R$  4.50\n");

        printf("\n--- [ 3 ] SOBREMESAS ---\n");
        printf("  7. Petit Gateau           - R$ 15.00\n");
        printf("  8. Pudim Gourmet          - R$ 14.00\n");
        printf("  9. Sorvete Artesanal      - R$ 12.00\n");

        printf("\n--------------------------------------------------\n");
        printf("  0 - Encerrar pedido e calcular conta\n");
        printf("--------------------------------------------------\n");
        printf("Escolha uma opcao: ");

        // Leitura e validacao da entrada
        if (scanf("%d", &opcao) != 1) {
            printf("\nEntrada invalida! Digite apenas numeros.\n");

            while (getchar() != '\n');

            opcao = -1;
        } else {
            // Processamento das opcoes escolhidas
            switch (opcao) {
                // Pratos Principais (1 a 3)
                case 1:
                    totalConta += 45.90;
                    printf("\n[+] Risoto de Funghi adicionado!");
                    printf("\nSubtotal parcial: R$ %.2f\n", totalConta);
                    break;

                case 2:
                    totalConta += 68.00;
                    printf("\n[+] Camarao na Moranga adicionado!");
                    printf("\nSubtotal parcial: R$ %.2f\n", totalConta);
                    break;

                case 3:
                    totalConta += 38.50;
                    printf("\n[+] File Parmegiana adicionado!");
                    printf("\nSubtotal parcial: R$ %.2f\n", totalConta);
                    break;

                // Bebidas (4 a 6)
                case 4:
                    totalConta += 12.00;
                    printf("\n[+] Vinho Tinto (Taca) adicionado!");
                    printf("\nSubtotal parcial: R$ %.2f\n", totalConta);
                    break;

                case 5:
                    totalConta += 8.00;
                    printf("\n[+] Suco Natural adicionado!");
                    printf("\nSubtotal parcial: R$ %.2f\n", totalConta);
                    break;

                case 6:
                    totalConta += 4.50;
                    printf("\n[+] Agua Mineral adicionada!");
                    printf("\nSubtotal parcial: R$ %.2f\n", totalConta);
                    break;

                // Sobremesas (7 a 9)
                case 7:
                    totalConta += 15.00;
                    printf("\n[+] Petit Gateau adicionado!");
                    printf("\nSubtotal parcial: R$ %.2f\n", totalConta);
                    break;

                case 8:
                    totalConta += 14.00;
                    printf("\n[+] Pudim Gourmet adicionado!");
                    printf("\nSubtotal parcial: R$ %.2f\n", totalConta);
                    break;

                case 9:
                    totalConta += 12.00;
                    printf("\n[+] Sorvete Artesanal adicionado!");
                    printf("\nSubtotal parcial: R$ %.2f\n", totalConta);
                    break;

                // Encerramento e Calculo
                case 0:
                    // Calcula o desconto para pedidos a partir de R$ 100,00
                    if (totalConta >= 100.00) {
                        desconto = totalConta * 0.10;
                    } else {
                        desconto = 0.0;
                    }

                    totalFinal = totalConta - desconto;

                    printf("\n==================================================\n");
                    printf("                RESUMO DO PEDIDO                  \n");
                    printf("==================================================\n");
                    printf("Subtotal dos itens: R$ %.2f\n", totalConta);
                    if (desconto > 0.0) {
                        printf("Desconto aplicado (10%%): -R$ %.2f\n", desconto);
                    } else {
                        printf("Desconto: Nao aplicavel (abaixo de R$ 100,00)\n");
                    }
                    printf("--------------------------------------------------\n");
                    printf("TOTAL A PAGAR: R$ %.2f\n", totalFinal);
                    printf("Obrigado pela preferencia e volte sempre!\n");
                    printf("==================================================\n");
                    break;

                default:
                    printf("\n[Erro] Opcao invalida! Escolha uma opcao do cardapio.\n");
            }
        }

    } while (opcao != 0);

    printf("\nSistema encerrado. Obrigado por utilizar nosso cardapio!\n");

    return 0;
}