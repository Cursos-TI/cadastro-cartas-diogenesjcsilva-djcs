#include stdio.h

// definindo e inicializando variaveis que armazenará os dados de cada carta

// carta 1

char estado01, codigo_carta01, nome_cidade01;
int populacao01, num_pontostur01;
float area_cidade01, pib_cidade01;

// entradas de dados carta 01
printf("informe a letra do estado (a-h):/n");
scanf(%c,&estado01);

printf("informe o codigo da carta (01-04):/n");
scanf(%d,&codigo_carta01);

printf("informe o nome da cidade:/n");
scanf(%s,&nome_cidade01);  

printf("informe o numero de habitantes:/n");
scanf(%d,&populacao01);

printf("informe a area da cidade em km quadrados:/n");
scanf(%f,&area_cidade01);

printf("informe o pib da cidade:/n");
scanf(%f,&pib_cidade01);

printf("informe a qtde de pontos turisticos da cidade:/n");
scanf(%d,&num_pontostur01);

// exibe os dados da carta 01 inserida

printf("estado: %c/n", estado01);
printf("codigo da carta:%s/n", estado01 & codigo_carta01)
printf("cidade: %s/n", nome_cidade01);
printf("habitantes: %.2f/n", populacao01);
printf("area total: %.2f/n", area_cidade01);
printf("pib: %.2f/n", pib_cidade01);
printf("pontos turisticos: %d/n", num_pontostur01);

retorno 0
