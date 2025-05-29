#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char descricao[100];
    char horario[6];
    int finalizada;
}Tarefa;

Tarefa tarefas[10];
int totalTarefas = 0;

void adicionarTarefa();
void listarTarefas();
void finalizarTarefa();

int main() {
    int opcao;
    do {
    printf("\033[1;33m");
    printf("\n-------Lista de Tarefas-------\n");
    printf("\033[0m");
    printf("[1]. Adicionar Tarefa\n");
    printf("[2]. Listar Tarefas Pendentes\n");
    printf("[3]. Marcar Tarefa como Finalizada\n");
    printf("[0]. Sair\n");
    printf("\033[1;35m");
	printf("---------------------------------------------\n");
	printf("\033[0m");
    printf("Escolha uma opcao:\n");
    scanf("%d", &opcao);
    switch (opcao) {
    	
    case 1: adicionarTarefa(); 
	break;
	
    case 2: listarTarefas(); 
	break;
	
    case 3: finalizarTarefa(); r
	break;
	
    case 0: printf("Tchau, Tchau baby...\n"); 
	break;
	
    default: printf("Opcao invalida.\n");
    }
    printf("Pressione enter para continuar\n");
    getchar();
    getchar();
    system("cls");
    } while (opcao != 0);

    return 0;
}


void adicionarTarefa() {
    if (totalTarefas >= 10) {
    printf("Limite de tarefas atingido.\n");
    return;
    }
    printf("\033[1;35m");
    printf("---------Tarefa---------\n");
    printf("\033[0m");
    printf("Descricao da tarefa:\n");
    scanf("%s", tarefas[totalTarefas].descricao);

    printf("\033[1;35m");
    printf("---------Horario---------\n");
    printf("\033[0m");
    printf("Horario (horas:minutos):\n");
    scanf("%s", tarefas[totalTarefas].horario);

    tarefas[totalTarefas].finalizada = 0;
    totalTarefas++;
    printf("\033[1;35m");
    printf("Tarefa adicionada com sucesso!\n");
    printf("\033[0m");
}

void listarTarefas() {
	printf("\033[1;35m");
	printf("---------Lista de tarefas---------\n");
	printf("\033[0m");
    printf("\nTarefas Pendentes:\n");
    for (int i = 0; i < totalTarefas; i++) {
    if (!tarefas[i].finalizada) {
    printf("%d - %s (%s)\n", i + 1, tarefas[i].descricao, tarefas[i].horario);
    }
    }
}

void finalizarTarefa() {
    int num;
    listarTarefas();
    
    printf("\033[1;35m");
    printf("---------Finalizar Tarefa---------\n");
    printf("\033[0m");
    printf("Digite o numero da tarefa a ser finalizada:\n");
    scanf("%d", &num);
    if (num < 1 || num > totalTarefas || tarefas[num - 1].finalizada) {
    printf("Tarefa invalida.\n");
    return;
    }
    tarefas[num - 1].finalizada = 1;
    printf("\033[1;35m");
    printf("Tarefa finalizada com sucesso!\n");
    printf("\033[0m");
}
