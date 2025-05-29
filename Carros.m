#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char marca[20];
	char cor[20];
	char modelo[20];
    int ano, tipo, id;
    float valor;
}Carros;

Carros carros[5];

int nm_carros = 0;

void cadastrar();
void listar();
void filtrar_combustivel();
void buscar();

int main(){
    int opc;
    do{
    printf("\033[1;33m");
    printf("----------MENU DE CARROS----------\n");
    printf("\033[0m");
    printf("[ 1 ] - Cadastrar veiculo\n");
    printf("[ 2 ] - Listar veiculos\n");
    printf("[ 3 ] - Filtrar por tipo de combustivel\n");
    printf("[ 4 ] - Buscar veiculo\n");
    printf("[ 0 ] - Sair\n");
    printf("\033[1;35m");
	printf("---------------------------------------------\n");
	printf("\033[0m");
    printf("Selecione uma opcao:\n");
    scanf("%d",&opc);
    system("cls");

    switch(opc){
    case 1:
    cadastrar();
    break;
    
    case 2:
    listar();
    break;
    
    case 3:
    filtrar_combustivel();
    break;
           
    case 4:
    buscar();
    break;
    
    case 0:
    printf("Tchau, Tchau baby...\n");
    break;
    
    default:
    printf("Opcao invalida!\n");
    }
    printf("Pressione enter para continuar\n");
    getchar();
    getchar();
    system("cls");
        
    }while(opc!=0);
    return 0;
}

void cadastrar(){
	printf("\033[1;35m");
    printf("-------Cadastro dos carros-------\n");
    printf("\033[0m");
    printf("ID do carro: \n");
    scanf("%d",&carros[nm_carros].id);
    printf("Marca: \n");
    scanf("%s",carros[nm_carros].marca);
    printf("Modelo: \n");
    scanf("%s",carros[nm_carros].modelo);
    printf("Cor: \n");
    scanf("%s",carros[nm_carros].cor);
    printf("Ano: \n");
    scanf("%d",&carros[nm_carros].ano);
    printf("Valor: \n");
    scanf("%f",&carros[nm_carros].valor);
    printf("Tipo do combustivel:\n[ 1 ] - Etanol\n[ 2 ] - Gasolina\n[ 3 ] - Flex\n[ 4 ] - Eletrico\n");
    scanf("%d",&carros[nm_carros].tipo);
	printf("\033[1;35m");
	printf("----------------------------------------\n");
	printf("\033[0m");  
    nm_carros++;
    carros[nm_carros].id = nm_carros;
}

void listar(){
	printf("\033[1;35m");
    printf("----Carros Cadastrados----\n");
    printf("\033[0m");
    for(int i = 0; i < nm_carros; i++){
    printf("ID: %d\n",carros[i].id);
    printf("Marca: %s\n",carros[i].marca);
    printf("Modelo: %s\n",carros[i].modelo);
    printf("Cor: %s\n",carros[i].cor);
    printf("Ano: %d\n",carros[i].ano);
    printf("Valor: %.2f\n",carros[i].valor);
    printf("Tipo do combustivel: %d\n",carros[i].tipo);
   	printf("\033[1;35m");
	printf("---------------------------------------\n");
	printf("\033[0m");
    }
}
void filtrar_combustivel(){
    int tipo;
    printf("\033[1;35m");
    printf("Deseja filtrar baseado em qual combustivel?:\n[ 1 ] - Etanol\n[ 2 ] - Gasolina\n[ 3 ] - Flex\n[ 4 ] - Eletrico\n");
    printf("\033[0m");
    scanf("%d",&tipo);
    for(int i = 0; i < nm_carros; i++){
    if(carros[i].tipo == tipo){
    printf("ID: %d\n",carros[i].id);
    printf("Marca: %s\n",carros[i].marca);
    printf("Modelo: %s\n",carros[i].modelo);
    printf("Cor: %s\n",carros[i].cor);
    printf("Ano: %d\n",carros[i].ano);
    printf("Valor: %.2f\n",carros[i].valor);
    printf("Tipo do combustivel: %d\n",carros[i].tipo);
    printf("\033[1;35m");
	printf("---------------------------------------\n");
	printf("\033[0m");
    }
    }
}
void buscar(){
    int id;
    printf("\033[1;33m");
    printf("Digite o ID do carro:\n");
    printf("\033[0m");
    scanf("%d",&id);
    for(int i = 0; i < nm_carros; i++){
    if(carros[i].id == id){
    printf("ID: %d\n",carros[i].id);
    printf("Marca: %s\n",carros[i].marca);
    printf("Modelo: %s\n",carros[i].modelo);
    printf("Cor: %s\n",carros[i].cor);
    printf("Ano: %d\n",carros[i].ano);
    printf("Valor: %.2f\n",carros[i].valor);
    printf("Tipo do combustivel: %d\n",carros[i].tipo);
    printf("\033[1;35m");
	printf("---------------------------------------\n");
	printf("\033[0m");
    }
    }
    }
