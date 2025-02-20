#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {    

    //caracteristicas das cartas:
    int comparacao1, comparacao2, comparacao3, comparacao4, comparacao5, comparacao6, comparacao7, opcao;

    char estado[100], nomecidade[50], cod_carta[50];
    int turisticos;
    float area_km, pib, PIBpercapita, densidade, Superpoder;
    unsigned long int populacao;

    char estado2[50], nomecidade2[50], cod_carta2[50];
    int turisticos2;
    float area_km2, pib2, PIBpercapita2, densidade2, Superpoder2;
    unsigned long int populacao2;

    printf("---Bem Vindo ao Jogo Super Trunfo Países--- \n\n ");
    printf("Menu Principal\n\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    
    switch (opcao) {
        
        case 1:
    printf("---Cadastre sua carta--- \n\n ");


    printf("Digite o Estado: \n");
    scanf("%s", &estado);
    printf("Digite o Código da carta: \n");
    scanf("%s", &cod_carta);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade);
    printf("Digite a População: \n");
    scanf("%lu", &populacao);   
    printf("digite a Área: \n");
    scanf("%f", &area_km);
    printf("digite a PIB: \n");
    scanf("%f", &pib);
    printf("digite o numero de Pontos turisticos: \n");
    scanf("%d", &turisticos);
    

    densidade = (float) (populacao / area_km);
    PIBpercapita = (float) (pib / populacao);
    Superpoder = (float) (populacao + pib + area_km + PIBpercapita + densidade + turisticos);

    printf("---Cadastre a segunda carta--- \n ");
    
    printf("Digite o Estado: \n");
    scanf("%s", &estado2);
    printf("Digite o Código da carta: \n");
    scanf("%s", &cod_carta2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade2);
    printf("Digite a População: \n");
    scanf("%lu", &populacao2);   
    printf("digite a Área: \n");
    scanf("%f", &area_km2);
    printf("digite a PIB: \n");
    scanf("%f", &pib2);
    printf("digite o numero de Pontos turisticos: \n");
    scanf("%d", &turisticos2);

    densidade = (float) (populacao2 / area_km2);
    PIBpercapita = (float) (pib2 / populacao2);
    Superpoder = (float) (populacao2 + pib2 + area_km2 + PIBpercapita2 + densidade2 + turisticos2);


    printf("--- Carta 1 --- \n ");

    printf("Estado: %s \n", estado);
    printf("Codigo da carta: %s \n", cod_carta);
    printf("Nome da cidade: %s \n", nomecidade);
    printf("População: %lu \n", populacao);
    printf("Área: %.3f km² \n", area_km);
    printf("PIB : %.3f bilhões de Reais\n", pib);
    printf("Números de pontos turísticos: %d \n", turisticos);
    printf("Densidade populacional: %.3f pessoa/km² \n", densidade);
    printf("PIB Per Capita: %.3f \n", PIBpercapita);
    printf("Super Poder: %.3f \n\n", Superpoder);

    printf("--- Carta 2 --- \n ");

    printf("Estado: %s \n", estado2);
    printf("Codigo da carta: %s \n", cod_carta2);
    printf("Nome da cidade: %s \n", nomecidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.3f km² \n", area_km2);
    printf("PIB : %.3f bilhões de Reais\n", pib2);
    printf("Números de pontos turísticos: %d \n", turisticos2);
    printf("Densidade populacional: %.3f pessoa/km² \n", densidade2);
    printf("PIB Per Capita: %.3f \n", PIBpercapita2);
    printf("Super Poder: %.3f \n\n", Superpoder2);
    
        
        printf("--- Escolha um opção --- \n\n ");
        printf("1. Resultado final Completo\n");
        printf("2. Comparar uma opção de cada vez\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:printf(" Resultado final Completo\n\n");  

        if (pib > pib2)
        {
            printf("PIB : Carta 1 venceu\n");
        } else if (pib < pib2)
        {
            printf("PIB : Carta 2 venceu\n");
        } else if (pib = pib2)
        {
            printf("PIB : Empate!\n");
        }

            if (area_km > area_km2)
        {
            printf("Área : Carta 1 venceu\n");
        } else if (area_km > area_km2)
        {
            printf("Área em km : Carta 2 venceu\n");
        } else if (area_km = area_km2)
        {
            printf("Área em km : Empate!\n");
        }

            if (populacao > populacao2)
        {
            printf("População : Carta 1 venceu!\n");
        } else if (populacao < populacao2)
        {
            printf("População : Carta 2 venceu!\n");
        } else if (populacao = populacao2)
        {
            printf("População : Empate!\n");
        }

            if (turisticos > turisticos2)
        {
            printf("Pontos Turísticos : Carta 1 venceu\n");
        } else if (turisticos < turisticos2)
        {
            printf("Pontos Turísticos : Carta 2 venceu\n");
        } else if (turisticos = turisticos2)
        {
            printf("Pontos Turísticos : Empate\n");
        }

            if (densidade < densidade2)
        {
            printf("Densidade : Carta 1 venceu\n");
        } else if (densidade > densidade2)
        {
            printf("Densidade : Carta 2 venceu\n");
        } else if (densidade = densidade2)
        {
            printf("Densidade : Empate\n");
        }

            if (PIBpercapita > PIBpercapita2)
        {
            printf("PIB Per Capito : Carta 1 venceu\n");
        } else if (PIBpercapita < PIBpercapita2)
        {
            printf("PIB Per Capito : Carta 2 venceu\n");
        } else if (PIBpercapita = PIBpercapita2)
        {
            printf("PIB Per Capito : Empate\n");
        }
            
            if (Superpoder > Superpoder2)
        {
            printf("Super Poder : Carta 1 venceu\n");
        } else if (Superpoder < Superpoder2)
        {
            printf("Super Poder : Carta 2 venceu\n");
        } else if (Superpoder = Superpoder2)
        {
            printf("Super Poder : Empate\n");
        }break;   

        case 2: printf("Comparar uma opção de cade vez: \n\n");
        printf("--- Compare a densidade e o PIB per capito --- \n\n");
        printf("--- Escolha um item a ser Comparado --- \n\n ");
        printf("Itens: \n\n");
        printf("1. PIB\n");
        printf("2. Área em km\n");
        printf("3. População\n");
        printf("4. Pontos turisticos\n");
        printf("5. Densidade Demográfica\n");
        printf("6. PIB Per Capita\n");
        printf("7. Super Poder\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

    
            switch (opcao) {
                case 1:
                printf("Comparação do PIB :\n\n");
                if (pib > pib2) 
                    {
                        printf("Estado: %s - Carta 1: %s --- Estado: %s - Carta 2: %s \n", estado, cod_carta, estado2, cod_carta2);
                        printf("Atributos comparados: PIB \n");
                        printf("valor da carta 1: %.3f valor da carta2: %f \n", pib, pib2);
                        printf("carta 1 Venceu ! \n");
                    } else if (pib < pib2)
                    {
                        printf("Estado: %s - Carta 1: %s --- Estado: %s - Carta 2: %s \n", estado, cod_carta, estado2, cod_carta2);
                        printf("Atributos comparados: PIB \n");
                        printf("valor da carta 1: %.3f valor da carta2: %.3f \n", pib, pib2);
                        printf("Carta 2 venceu\n");
                    } else if (pib = pib2)
                    {
                        printf("Estado: %s - Carta 1: %s --- Estado: %s - Carta 2: %s \n", estado, cod_carta, estado2, cod_carta2);
                        printf("Atributos comparados: PIB \n");
                        printf("valor da carta 1: %.3f valor da carta2: %.3f \n", pib, pib2);
                        printf("Empate !\n");
                    } break;


                case 2:
                printf("Comparação da Área em km² :\n\n");
                if (area_km > area_km2) 
                    {
                        printf("Estado: %s - Carta 1: %s --- Estado: %s - Carta 2: %s \n", estado, cod_carta, estado2, cod_carta2);
                        printf("Atributos comparados: Área em km² \n");
                        printf("valor da carta 1: %.3f valor da carta2: %f \n", area_km, area_km2);
                        printf("carta 1 Venceu ! \n");
                    } else if (area_km < area_km2)
                    {
                        printf("Estado: %s - Carta 1: %s --- Estado: %s - Carta 2: %s \n", estado, cod_carta, estado2, cod_carta2);
                        printf("Atributos comparados: Área em km² \n");
                        printf("valor da carta 1: %.3f valor da carta2: %.3f \n", area_km, area_km2);
                        printf("Carta 2 venceu\n");
                    } else if (area_km = area_km2)
                    {
                        printf("Estado: %s - Carta 1: %s --- Estado: %s - Carta 2: %s \n", estado, cod_carta, estado2, cod_carta2);
                        printf("Atributos comparados: Área em km² \n");
                        printf("valor da carta 1: %.3f valor da carta2: %.3f \n", area_km, area_km2);
                        printf("Empate !\n");
                    } break;

                case 3:
                printf("Comparação do População :\n\n");
                if (populacao > populacao2) 
                    {
                        printf("Estado: %s - Carta 1: %s --- Estado: %s - Carta 2: %s \n", estado, cod_carta, estado2, cod_carta2);
                        printf("Atributos comparados: População \n");
                        printf("valor da carta 1: %lu valor da carta2: %lu \n", populacao, populacao2);
                        printf("carta 1 Venceu ! \n");
                    } else if (populacao > populacao2)
                    {
                        printf("Estado: %s - Carta 1: %s --- Estado: %s - Carta 2: %s \n", estado, cod_carta, estado2, cod_carta2);
                        printf("Atributos comparados: População \n");
                        printf("valor da carta 1: %lu valor da carta2: %lu \n", populacao, populacao2);
                        printf("Carta 2 venceu\n");
                    } else if (populacao = populacao2)
                    {
                        printf("Estado: %s - Carta 1: %s --- Estado: %s - Carta 2: %s \n", estado, cod_carta, estado2, cod_carta2);
                        printf("Atributos comparados: População \n");
                        printf("valor da carta 1: %lu valor da carta2: %lu \n", populacao, populacao2);
                        printf("Empate !\n");
                    } break;

                case 4:
                printf("Comparação do Pontos turisticos :\n\n");
                if (turisticos > turisticos2) 
                    {
                        printf("Estado: %s - Carta 1: %s --- Estado: %s - Carta 2: %s \n", estado, cod_carta, estado2, cod_carta2);
                        printf("Atributos comparados: Pontos turisticos \n");
                        printf("valor da carta 1: %d - valor da carta2: %d \n", turisticos, turisticos2);
                        printf("carta 1 Venceu ! \n");
                    } else if (turisticos > turisticos2)
                    {
                        printf("Estado:  %s - Estado: %s \n", estado, estado2);
                        printf("Atributos comparados: Pontos turisticos \n");
                        printf("valor da carta 1: %d - valor da carta2: %d \n", turisticos, turisticos2);
                        printf("Carta 2 venceu\n");
                    } else if (turisticos = turisticos2)
                    {
                        printf("Estado:  %s - Estado: %s \n", estado, estado2);
                        printf("Atributos comparados: Pontos turisticos \n");
                        printf("valor da carta 1: %d - valor da carta2: %d \n", turisticos, turisticos2);
                        printf("Empate !\n");
                    } break;

                case 5:
                printf("Comparação do Densidade Demográfica :\n\n");
                if (densidade < densidade2) 
                    {
                        printf("Estado: %s - Carta 1: %s --- Estado: %s - Carta 2: %s \n", estado, cod_carta, estado2, cod_carta2);
                        printf("Atributos comparados: Densidade Demográfica \n");
                        printf("valor da carta 1: %.3f valor da carta2: %f \n", densidade, densidade2);
                        printf("carta 1 Venceu ! \n");
                    } else if (densidade > densidade2)
                    {
                        printf("Estado: %s - Carta 1: %s --- Estado: %s - Carta 2: %s \n", estado, cod_carta, estado2, cod_carta2);
                        printf("Atributos comparados: Densidade Demográfica \n");
                        printf("valor da carta 1: %.3f valor da carta2: %.3f \n", densidade, densidade2);
                        printf("Carta 2 venceu\n");
                    } else if (densidade = densidade2)
                    {
                        printf("Estado: %s - Carta 1: %s --- Estado: %s - Carta 2: %s \n", estado, cod_carta, estado2, cod_carta2);
                        printf("Atributos comparados: Densidade Demográfica \n");
                        printf("valor da carta 1: %.3f valor da carta2: %.3f \n", densidade, densidade2);
                        printf("Empate !\n");
                    } break;


                case 6:
                printf("Comparação do PIB Per Capito:\n\n");
                if (PIBpercapita > PIBpercapita2) 
                    {
                        printf("Estado: %s - Carta 1: %s --- Estado: %s - Carta 2: %s \n", estado, cod_carta, estado2, cod_carta2);
                        printf("Atributos comparados: PIB Per Capito \n");
                        printf("valor da carta 1: %.3f valor da carta2: %.3f \n", PIBpercapita, PIBpercapita2);
                        printf("carta 1 Venceu ! \n");
                    } else if (PIBpercapita > PIBpercapita2)
                    {
                        printf("Estado: %s - Carta 1: %s --- Estado: %s - Carta 2: %s \n", estado, cod_carta, estado2, cod_carta2);
                        printf("Atributos comparados: PIB Per Capito \n");
                        printf("valor da carta 1: %.3f valor da carta2: %.3f \n", PIBpercapita, PIBpercapita2);
                        printf("Carta 2 venceu\n");
                    } else if (PIBpercapita = PIBpercapita2)
                    {
                        printf("Estado: %s - Carta 1: %s --- Estado: %s - Carta 2: %s \n", estado, cod_carta, estado2, cod_carta2);
                        printf("Atributos comparados: PIB Per Capito \n");
                        printf("valor da carta 1: %.3f valor da carta2: %.3f \n", PIBpercapita, PIBpercapita2);
                        printf("Empate !\n");
                    } break;

                case 7:
                printf("Comparação Super Poder :\n\n");
                if (Superpoder > Superpoder2) 
                    {
                        printf("Estado: %s - Carta 1: %s --- Estado: %s - Carta 2: %s \n", estado, cod_carta, estado2, cod_carta2);
                        printf("Atributos comparados: Super Poder \n");
                        printf("valor da carta 1: %.3f valor da carta2: %.3f \n", Superpoder, Superpoder2);
                        printf("carta 1 Venceu ! \n");
                    } else if (Superpoder > Superpoder2)
                    {
                        printf("Estado: %s - Carta 1: %s --- Estado: %s - Carta 2: %s \n", estado, cod_carta, estado2, cod_carta2);
                        printf("Atributos comparados: Super Poder \n");
                        printf("valor da carta 1: %.3f valor da carta2: %.3f \n", Superpoder, Superpoder2);
                        printf("Carta 2 venceu\n");
                    } else if (Superpoder = Superpoder2)
                    {
                        printf("Estado: %s - Carta 1: %s --- Estado: %s - Carta 2: %s \n", estado, cod_carta, estado2, cod_carta2);
                        printf("Atributos comparados: Super Poder \n");
                        printf("valor da carta 1: %.3f valor da carta2: %.3f \n", Superpoder, Superpoder2);
                        printf("Empate !\n");
                    } break;
                    
                    default: printf("Opção inválida, tente Novamente!!");
                    break;
                }
            }break;
        case 2:
        printf("Regras do Jogo \n\n");
        printf("O jogo começa com o jogador que está à esquerda do que distribuiu as cartas \n");
        printf(" jogador que começa escolhe uma característica da sua carta de cima e lê em voz alta");
        printf(" outros jogadores leem, na sua vez, o valor correspondente a essa característica na sua carta de cima");
        printf("a rodada quem tiver o maior valor. \n"); 
        printf("vencedor da rodada fica com as cartas dos outros jogadores Vence o jogo quem ficar com todas as cartas \n\n"); 
        printf("Características:\n\n");
        printf(" características podem ser velocidade, inteligência, defesa, habilidade e força \n"); 
        printf(" cartas são divididas em 8 grupos de 4 cartas (1A, 1B, 1C, 1D, 2A, 2B… até 8A, 8B, 8C e 8D \n"); 
        printf(" A carta super Trunfo é embaralhada com as demais e pode ser invocada para tomar as outras cartas na mão dos oponentes \n");
        break;

        case 3:
        printf("Saindo do jogo...\n\n");
        break;

        default: printf("Opção inválida, tente Novamente!!\n\n");
        break;
       }
       return 0;     
    }