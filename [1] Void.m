#include <stdio.h>
#include <stdlib.h>

void exercicio1014();
    void exercicio1020();
    void exercicio1052();

int main() {
    int escolha;
    

    printf("Escolha o exercicio que deseja executar:\n");
    printf("[1] - exercicio 1014\n");
    printf("[2] - exercicio 1020\n");
    printf("[3] - exercicio 1052\n");
    printf("Digite a sua escolha:\n");
    scanf("%d", &escolha);

    switch (escolha) {
    case 1:
    exercicio1014();
    break;

    case 2:
    exercicio1020();
    break;

    case 3:
    exercicio1052();
    break;
    
    default:
    printf("Opcao invalida. Escolha 1, 2 ou 3.\n");
    }

    return 0;
}

    void exercicio1014() {
	
    int dista;
    float combu;
    
    printf("Digite a distancia:\n");
    scanf("%d", &dista);
    printf("Digite o combustivel:\n");
    scanf("%f", &combu);

    float consumo_med = dista / combu;
    printf("%.3f km/l\n", consumo_med);
}


    void exercicio1020() {
    int dias, meses, anos;

    printf("Digite os dias:\n");
    scanf("%d", &dias);
    anos = dias / 365;
    dias = dias % 365;
    meses = dias / 30;
    dias = dias % 30;
    
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
}

    void exercicio1052() {
    int month;

    printf("Escolhe um numero de 1 a 12:\n");
    scanf("%d", &month);
    
    switch (month) {
    	
    case 1:
    printf("January\n");
    break;
    
    case 2:
    printf("February\n");
    break;
    
    case 3:
    printf("March\n");
    break;
    
    case 4:
    printf("April\n");
    break;
    
    case 5:
    printf("May\n");
    break;
    
    case 6:
    printf("June\n");
    break;
    
    case 7:
    printf("July\n");
    break;
    
    case 8:
    printf("August\n");
    break;
    
    case 9:
    printf("September\n");
    break;
    
    case 10:
    printf("October\n");
    break;
    
    case 11:
    printf("November\n");
    break;
    
    case 12:
    printf("December\n");
    break;
    
    default:
    printf("Invalid month\n");
    }
}
