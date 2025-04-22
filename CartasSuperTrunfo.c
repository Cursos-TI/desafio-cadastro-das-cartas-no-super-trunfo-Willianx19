#include <stdio.h>

int main() {
    
//    Carta 01    //
 
// Variáveis da carta 01
char Estado;
char Codigo_da_Carta[5];
char Nome_da_Cidade[30];
unsigned long int Populacao;
float Area;
float Pib;
int Numero_de_Pontos_Turisticos;
float densidade_popu;
float Pib_percap;
float Super_poder;

// printf e scanf da Carta 01, entrada dados
printf("Carta 01: \n");

printf("Digite o Estado: \n");
scanf("%c",&Estado);

printf("Digite o Código da cidade: \n");
scanf("%s",&Codigo_da_Carta);

printf("Digite o Nome da Cidade: \n");
scanf("%s",&Nome_da_Cidade);

printf("Digite a População: \n");
scanf("%u",&Populacao);

printf("Digite a Área: \n");
scanf("%f",&Area);

printf("Digite o Pib: \n");
scanf("%f",&Pib);

printf("Digite o Números de Pontos Turisticos: \n");
scanf("%d",&Numero_de_Pontos_Turisticos);

// Divisão da população e Pib
densidade_popu = (float) Populacao / Area;
Pib_percap = (float) Pib / Populacao;

// Soma do Super Poder
Super_poder = Populacao + Area + Pib + Numero_de_Pontos_Turisticos + densidade_popu;

// printf de saída de dados da carta 01
printf("O Estado é: %c \n",Estado);
printf("O Código da Cidade é: %s \n",Codigo_da_Carta);
printf("O Nome da Cidade é: %s \n",Nome_da_Cidade );
printf("A População é: %u \n",Populacao);
printf("A Área é: %f km² \n",Area);
printf("O Pib é: %f bilhões de reais \n",Pib);
printf("o Números de Pontos Turisticos são: %d \n",Numero_de_Pontos_Turisticos);
printf("A Densidade Populacinal é: %f \n",densidade_popu);
printf("O Pib per capita é:%f \n",Pib_percap);
printf("o Super poder é: %f \n",Super_poder);

//   Cartão 02   //

//Variáveis da carta 02
char Estado02;
char Codigo_do_Estado02[5];
char Nome_da_cidade02[30];
unsigned long int Populacao02;
float Area02;
float Pib02;
int Numero_turistico02;
float densidade_popu2;
float Pib_perca2;
float super_poder2;

//printf e scanf da Carta 02, entrada dados
printf("Carta 01: \n");

printf("Digite o Estado 02: \n");
scanf("%s",&Estado02);

printf("Digite o Código 02: \n");
scanf("%s",&Codigo_do_Estado02);

printf("Digite o Nome da Cidade 02: \n");
scanf("%s",&Nome_da_cidade02);

printf("Digite a População 02: \n");
scanf("%u",&Populacao02);

printf("Digite a Área 02: \n");
scanf("%f",&Area02);

printf("Digite o Pib 02: \n");
scanf("%f",&Pib02);

printf("Digite os Números dos Pontos Turisticos 02: \n");
scanf("%d",&Numero_turistico02);

// Divisão da população e Pib
densidade_popu2 = (float) Populacao02 / Area02;
Pib_perca2 = (float) Pib02 / Populacao02;

// Soma do Super Poder
super_poder2 = Populacao02 + Area02 + Pib02 + Numero_turistico02 + densidade_popu2;

// printf de saída de dados da carta 02
printf("O Estado da Carta 2 é: %c \n",Estado02);
printf("o Codigo 02 é: %s \n",Codigo_do_Estado02);
printf("O Nome da Cidade 02 é: %s \n",Nome_da_cidade02);
printf("A Popolação 02 é: %u \n",Populacao02);
printf("A Área 02 é: %f km²\n",Area02);
printf("O Pib 02 é: %f bilhões de reais \n",Pib02);
printf("Os Números de Pontos Turisticos 02 são: %d \n",Numero_turistico02);
printf("A Densidade populacional é:%f \n",densidade_popu2);
printf("O Pib per capita é:%f \n",Pib_perca2);
printf("o Super poder é : %f \n",super_poder2);

// Comparação das cartas
int resultado,resultado2,resultado3,resultado4,resultado5,resultado6,resultado7;

resultado = Populacao > Populacao02;
resultado2 = Area > Area02;
resultado3 = Pib > Pib02;
resultado4 = Numero_de_Pontos_Turisticos > Numero_turistico02;
resultado5 = densidade_popu < densidade_popu2;
resultado6 = Pib_percap > Pib_perca2;
resultado7 = Super_poder > super_poder2;

// Printf das Comparações
printf("Comparação das Cartas: \n");
printf("População: carta 01 venceu (%d) \n",resultado);
printf("Área: carta 01 venceu (%d) \n",resultado2);
printf("Pib: carta 01 venceu (%d) \n",resultado3);
printf("Pontos Turisticos: carta 01 venceu (%d) \n",resultado4);
printf("Densidade populacional: carta 02 venceu (%d) \n",resultado5);
printf("Pib per capita: carta 01 venceu (%d) \n",resultado6);
printf("Super poder: Carta 01 venceu (%d) \n",resultado7);


    return 0;
}
