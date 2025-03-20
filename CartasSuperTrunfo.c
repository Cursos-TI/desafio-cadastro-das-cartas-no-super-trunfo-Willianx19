#include <stdio.h>

int main() {
//    Carta 01    //
    
char Estado;
char Codigo_da_Carta[10];
char Nome_da_Cidade[30];
int População;
float Área;
float Pib;
int Numero_de_Pontos_Turisticos;

//   Comandos da Carta 01   //

printf("Digite o Estado: \n");
scanf("%c",Estado);

printf("Digite o Código da carta: \n");
scanf("%s",&Codigo_da_Carta);

printf("Digite o Nome da Cidade: \n");
scanf("%s",Nome_da_Cidade);

printf("Digite a População: \n");
scanf("%d",População);

printf("Digite a Área: \n");
scanf("%f",Área);

printf("Digite o Pib: \n");
scanf("%f",Pib);

printf("Digite o Números de Pontos Turisticos: \n");
scanf("%d",Numero_de_Pontos_Turisticos);




    return 0;
}
