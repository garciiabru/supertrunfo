#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char nome[50];
    int forca;
    int velocidade;
    int inteligencia;
    int densidade_demografica;
    int populacao;
} Carta;

// Função para exibir menu de atributos
void exibirMenuAtributos(int atributoJaEscolhido) {
    printf("\n=== ESCOLHA UM ATRIBUTO ===\n");
    if (atributoJaEscolhido != 1) {
        printf("1 - Força Militar\n");
    }
    if (atributoJaEscolhido != 2) {
        printf("2 - Velocidade de Desenvolvimento\n");
    }
    if (atributoJaEscolhido != 3) {
        printf("3 - Inteligência Coletiva\n");
    }
    if (atributoJaEscolhido != 4) {
        printf("4 - Densidade Demográfica\n");
    }
    if (atributoJaEscolhido != 5) {
        printf("5 - População Total\n");
    }
    printf("Digite sua escolha: ");
}

// Função para obter valor do atributo
int obterValorAtributo(Carta carta, int atributo) {
    switch (atributo) {
        case 1: return carta.forca;
        case 2: return carta.velocidade;
        case 3: return carta.inteligencia;
        case 4: return carta.densidade_demografica;
        case 5: return carta.populacao;
        default: return 0;
    }
}

// Função para obter nome do atributo
char* obterNomeAtributo(int atributo) {
    switch (atributo) {
        case 1: return "Força Militar";
        case 2: return "Velocidade de Desenvolvimento";
        case 3: return "Inteligência Coletiva";
        case 4: return "Densidade Demográfica";
        case 5: return "População Total";
        default: return "Desconhecido";
    }
}

// Função para comparar cartas
void compararCartas(Carta carta1, Carta carta2, int atributo1, int atributo2) {
    int valor1_attr1 = obterValorAtributo(carta1, atributo1);
    int valor2_attr1 = obterValorAtributo(carta2, atributo1);
    int valor1_attr2 = obterValorAtributo(carta1, atributo2);
    int valor2_attr2 = obterValorAtributo(carta2, atributo2);

    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
    printf("Carta 1: %s\n", carta1.nome);
    printf("Carta 2: %s\n\n", carta2.nome);

    // Comparação do primeiro atributo
    printf("1º Atributo - %s:\n", obterNomeAtributo(atributo1));
    printf("%s: %d\n", carta1.nome, valor1_attr1);
    printf("%s: %d\n", carta2.nome, valor2_attr1);
    
    int pontos_carta1 = 0, pontos_carta2 = 0;
    
    // Lógica especial para densidade demográfica (menor é melhor)
    if (atributo1 == 4) {
        if (valor1_attr1 < valor2_attr1) {
            pontos_carta1++;
            printf("→ %s vence no 1º atributo!\n", carta1.nome);
        } else if (valor1_attr1 > valor2_attr1) {
            pontos_carta2++;
            printf("→ %s vence no 1º atributo!\n", carta2.nome);
        } else {
            printf("→ Empate no 1º atributo!\n");
        }
    } else {
        if (valor1_attr1 > valor2_attr1) {
            pontos_carta1++;
            printf("→ %s vence no 1º atributo!\n", carta1.nome);
        } else if (valor1_attr1 < valor2_attr1) {
            pontos_carta2++;
            printf("→ %s vence no 1º atributo!\n", carta2.nome);
        } else {
            printf("→ Empate no 1º atributo!\n");
        }
    }

    printf("\n2º Atributo - %s:\n", obterNomeAtributo(atributo2));
    printf("%s: %d\n", carta1.nome, valor1_attr2);
    printf("%s: %d\n", carta2.nome, valor2_attr2);
    
    // Lógica especial para densidade demográfica (menor é melhor)
    if (atributo2 == 4) {
        if (valor1_attr2 < valor2_attr2) {
            pontos_carta1++;
            printf("→ %s vence no 2º atributo!\n", carta1.nome);
        } else if (valor1_attr2 > valor2_attr2) {
            pontos_carta2++;
            printf("→ %s vence no 2º atributo!\n", carta2.nome);
        } else {
            printf("→ Empate no 2º atributo!\n");
        }
    } else {
        if (valor1_attr2 > valor2_attr2) {
            pontos_carta1++;
            printf("→ %s vence no 2º atributo!\n", carta1.nome);
        } else if (valor1_attr2 < valor2_attr2) {
            pontos_carta2++;
            printf("→ %s vence no 2º atributo!\n", carta2.nome);
        } else {
            printf("→ Empate no 2º atributo!\n");
        }
    }

    // Resultado final
    printf("\n=== RESULTADO FINAL ===\n");
    printf("Pontos %s: %d\n", carta1.nome, pontos_carta1);
    printf("Pontos %s: %d\n", carta2.nome, pontos_carta2);
    
    if (pontos_carta1 > pontos_carta2) {
        printf("\n🏆 %s VENCE A RODADA! 🏆\n", carta1.nome);
    } else if (pontos_carta2 > pontos_carta1) {
        printf("\n🏆 %s VENCE A RODADA! 🏆\n", carta2.nome);
    } else {
        printf("\n🤝 EMPATE! 🤝\n");
    }
}

// Função para exibir informações da carta
void exibirCarta(Carta carta) {
    printf("\n=== CARTA: %s ===\n", carta.nome);
    printf("Força Militar: %d\n", carta.forca);
    printf("Velocidade de Desenvolvimento: %d\n", carta.velocidade);
    printf("Inteligência Coletiva: %d\n", carta.inteligencia);
    printf("Densidade Demográfica: %d\n", carta.densidade_demografica);
    printf("População Total: %d\n", carta.populacao);
}

int main() {
    // Inicialização das cartas
    Carta carta1 = {"Brasil", 8, 7, 6, 3, 215};
    Carta carta2 = {"Japão", 6, 4, 8, 5, 125};
    Carta carta3 = {"Estados Unidos", 9, 8, 7, 2, 330};
    
    int atributo1, atributo2;
    int escolha_carta1, escolha_carta2;
    
    printf("🎮 SUPER TRUNFO - JOGO DE CARTAS 🎮\n");
    printf("=====================================\n");
    
    // Exibir cartas disponíveis
    exibirCarta(carta1);
    exibirCarta(carta2);
    exibirCarta(carta3);
    
    // Escolha das cartas
    printf("\n=== ESCOLHA SUAS CARTAS ===\n");
    printf("Escolha a primeira carta (1, 2 ou 3): ");
    scanf("%d", &escolha_carta1);
    
    printf("Escolha a segunda carta (1, 2 ou 3): ");
    scanf("%d", &escolha_carta2);
    
    if (escolha_carta1 == escolha_carta2) {
        printf("Erro: Você não pode escolher a mesma carta duas vezes!\n");
        return 1;
    }
    
    Carta carta_escolhida1, carta_escolhida2;
    
    switch (escolha_carta1) {
        case 1: carta_escolhida1 = carta1; break;
        case 2: carta_escolhida1 = carta2; break;
        case 3: carta_escolhida1 = carta3; break;
        default: 
            printf("Escolha inválida!\n");
            return 1;
    }
    
    switch (escolha_carta2) {
        case 1: carta_escolhida2 = carta1; break;
        case 2: carta_escolhida2 = carta2; break;
        case 3: carta_escolhida2 = carta3; break;
        default: 
            printf("Escolha inválida!\n");
            return 1;
    }
    
    // Escolha dos atributos
    printf("\n=== ESCOLHA DOS ATRIBUTOS ===\n");
    exibirMenuAtributos(0);
    scanf("%d", &atributo1);
    
    do {
        exibirMenuAtributos(atributo1);
        scanf("%d", &atributo2);
        
        if (atributo1 == atributo2) {
            printf("❌ Erro: Você escolheu o mesmo atributo duas vezes!\n");
            printf("Por favor, escolha um atributo diferente.\n");
        }
    } while (atributo1 == atributo2);
    
    // Comparação final
    compararCartas(carta_escolhida1, carta_escolhida2, atributo1, atributo2);
    
    printf("\nObrigado por jogar Super Trunfo! 🎉\n");
    
    return 0;
}
