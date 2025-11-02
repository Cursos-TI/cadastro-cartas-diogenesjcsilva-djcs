#include stdio.h

// definindo e inicializando variáveis que armazenará os dados de cada carta

// carta 1

char estado01, codigo_carta01, nome_cidade01;
int populacao01, num_pontostur01;
flor area_cidade01, pib_cidade01;

// entradas de dados carta 01
printf("informe a letra do estado (a-h):/n");
scanf(%c,&estado01);

printf("informe o código da carta (01-04):/n");
scanf(%d,&codigo_carta01);

printf("informe o nome da cidade:/n");
scanf(%s,&nome_cidade01);  

printf("informe o número de habitantes:/n");
scanf(%d,&populacao01);

printf("informe a área da cidade em km quadrados:/n");
scanf(%f,&area_cidade01);

printf("informe o pib da cidade:/n");
scanf(%f,&pib_cidade01);

printf("informe a qtde de pontos turísticos da cidade:/n");
scanf(%d,&num_pontostur01);

// exibe os dados da carta 01 inserida

printf("estado: %c/n", estado01);
printf("código da carta:%d/n", estado01 & codigo_carta01)
printf("cidade: %s/n", nome_cidade01);
printf("habitantes: %d/n", populacao01);



