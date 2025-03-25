#include <stdio.h>

int main() {
//    Carta 01    //
    
char Estado;
char Codigo_da_Carta[5];
char Nome_da_Cidade[30];
int Populacao;
float Area;
float Pib;
int Numero_de_Pontos_Turisticos;

//   Comandos da Carta 01   //

printf("Carta 01: \n");

printf("Digite o Estado: \n");
scanf("%c",&Estado);

printf("Digite o Código da cidade: \n");
scanf("%s",&Codigo_da_Carta);

printf("Digite o Nome da Cidade: \n");
scanf("%s",&Nome_da_Cidade);

printf("Digite a População: \n");
scanf("%d",&Populacao);

printf("Digite a Área: \n");
scanf("%f",&Area);

printf("Digite o Pib: \n");
scanf("%f",&Pib);

printf("Digite o Números de Pontos Turisticos: \n");
scanf("%d",&Numero_de_Pontos_Turisticos);

printf("O Estado é: %c \n",Estado);
printf("O Código da Cidade é: %s \n",Codigo_da_Carta);
printf("O Nome da Cidade é: %s \n",Nome_da_Cidade );
printf("A População é: %d \n",Populacao);
printf("A Área é: %f km² \n",Area);
printf("O Pib é: %f bilhões de reais \n",Pib);
printf("o Números de Pontos Turisticos são: %d \n",Numero_de_Pontos_Turisticos);

//   Cartão 02  //

char Estado02;
char Codigo_do_Estado02[5];
char Nome_da_cidade02[30];
int Populacao02;
float Area02;
float Pib02;
int Numero_turistico02;

//   Comandos da Carta 02   //

printf("Carta 02: \n");

printf("Digite o Estado 02: \n");
scanf("%s",&Estado02);

printf("Digite o Código 02: \n");
scanf("%s",&Codigo_do_Estado02);

printf("Digite o Nome da Cidade 02: \n");
scanf("%s",&Nome_da_cidade02);

printf("Digite a População 02: \n");
scanf("%d",&Populacao02);

printf("Digite a Área 02: \n");
scanf("%f",&Area02);

printf("Digite o Pib 02: \n");
scanf("%f",&Pib02);

printf("Digite os Números dos Pontos Turisticos 02: \n");
scanf("%d",&Numero_turistico02);

//   Comandos Carta 02   //

printf("O Estado da Carta 2 é: %c \n",Estado02);
printf("o Codigo 02 é: %s \n",Codigo_do_Estado02);
printf("O Nome da Cidade 02 é: %s \n",Nome_da_cidade02);
printf("A Popolação 02 é: %d \n",Populacao02);
printf("A Área 02 é: %f km²\n",Area02);
printf("O Pib 02 é: %f bilhões de reais \n",Pib02);
printf("Os Números de Pontos Turisticos 02 são: %d \n",Numero_turistico02);




    return 0;
}
