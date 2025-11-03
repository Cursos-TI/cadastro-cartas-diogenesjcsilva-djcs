
#include <stdio.h>
#include <string.h> // Necessário para a função strcspn()

int main() {

    // definindo e inicializando variaveis que armazenará os dados de cada carta
    // carta 1

    char estado01;
    int codigo_carta01;     // CORRIGIDO: Era 'char'
    
    // CORRIGIDO: Era 'char'. Agora é um array para guardar um nome (string)
    char nome_cidade01[100]; 
    
    int populacao01, num_pontostur01;
    float area_cidade01, pib_cidade01;

    // entradas de dados carta 01
    
    // CORRIGIDO: \n para nova linha
    printf("informe a letra do estado (a-h):\n"); 
    
    // CORRIGIDO: Aspas e espaço antes de %c para consumir 'Enter' anterior
    scanf(" %c", &estado01); 

    printf("informe o codigo da carta (01-04):\n");
    // CORRIGIDO: Aspas em "%d"
    scanf("%d", &codigo_carta01);


    // --- IMPLEMENTAÇÃO PARA LER NOMES COM ESPAÇOS ---

    // 1. Limpa o buffer de entrada
    // O scanf("%d") anterior deixou um '\n' (Enter) no buffer.
    // Este loop consome esse '\n' para que o fgets() não o leia.
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("informe o nome da cidade:\n");
    
    // 2. Usa fgets() para ler a linha inteira (incluindo espaços)
    // Parâmetros: (destino, tamanho_max, fonte_de_entrada)
    fgets(nome_cidade01, 100, stdin);  

    // 3. Remove o '\n' do final da string
    // O fgets() armazena o "Enter" que você digita (ex: "Rio de Janeiro\n").
    // A linha abaixo encontra o '\n' e o substitui por '\0' (fim da string).
    nome_cidade01[strcspn(nome_cidade01, "\n")] = '\0';
    
    // --- FIM DA IMPLEMENTAÇÃO ---


    printf("informe o numero de habitantes:\n");
    // CORRIGIDO: Aspas em "%d"
    scanf("%d", &populacao01);

    printf("informe a area da cidade em km quadrados:\n");
    // CORRIGIDO: Aspas em "%f"
    scanf("%f", &area_cidade01);

    printf("informe o pib da cidade:\n");
    // CORRIGIDO: Aspas em "%f"
    scanf("%f", &pib_cidade01);

    printf("informe a qtde de pontos turisticos da cidade:\n");
    // CORRIGIDO: Aspas em "%d"
    scanf("%d", &num_pontostur01);

    // --- exibe os dados da carta 01 inserida ---
    printf("\n--- DADOS DA CARTA INSERIDA ---\n");

    // CORRIGIDO: \n para nova linha
    printf("estado: %c\n", estado01);
    
    // CORRIGIDO: %d para int, \n, e ponto e vírgula
    printf("codigo da carta: %d\n", codigo_carta01); 
    
    // CORRIGIDO: %s para string e \n
    printf("cidade: %s\n", nome_cidade01);
    
    // CORRIGIDO: %d para int (população) e \n
    printf("habitantes: %d\n", populacao01);
    
    // CORRIGIDO: \n para nova linha
    printf("area total: %.2f km2\n", area_cidade01);
    
    // CORRIGIDO: \n para nova linha
    printf("pib: R$ %.2f\n", pib_cidade01);
    
    // CORRIGIDO: \n para nova linha
    printf("pontos turisticos: %d\n", num_pontostur01);


// repetiremos as instruções para armazenar e exibir





    // CORRIGIDO: Palavra-chave 'return' e ponto e vírgula
    return 0; 
} // Fim da função main