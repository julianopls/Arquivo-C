#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

  int main (){

    char nome [20], email [50], apart [20];
	int menu, CPF, telefone, np, fp, valor, procon;
	float dh;
    do {
    printf("Bem vindo! ao Hotel Fazenda:\n");
    printf("[1] - Confirma os dados pessoais:\n");
    printf("[2] - Sobre acessibilidade:\n");
    printf("[3] - Servicos:\n");
    printf("[4] - Experiencias unicas:\n");
    printf("[5] - Confirma o tipo de apartamento, numero de pessoas, duracao da hospedagem, forma de pagamento, valor:\n");
    printf("[6] - Procon:\n");
    printf("[7] - Sair:\n");
    scanf("%d", &menu);
  
  switch ( menu )
  {
    case 1 :
    printf ("Coloca seu nome:\n");
    scanf("%s", &nome);
    printf("Seu email para receber promocoes do hotel:\n");
    scanf("%s", &email);
    printf("Agora sr, precisamos do seu CPF:\n");
    scanf("%s", &CPF);
    printf("Seu telefone, por favor:\n");
    scanf("%s", &telefone);
    printf("Pronto, agora seu chekin esta feito. Vamos para a proxima etapa");
    break;
    
    case 2 :
    printf("Acessibilidade Oferecidas:\n[1].Servicos para pessoas com deficiencia (PCD) ou mobilidade reduzida\n[2].Apartamentos adaptados para essas pessoas\n[3].Padrao de servico e estrutura adequados");
    break;
    
    case 3 :
    printf ("Servicos que oferecemos:\n[1].Kit boas-vindas com agua, snacks, cafe, produtos de higiene pessoal e toalhas de banho\n[2].Early check-in e late check-out\n[3].Brindes e produtos de higiene personalizados\n[4].piscina\n[5].spa\n[6].Restaurantes gourmet:\n");
    break;
    
    case 4 :
    printf("Voce que quer ter uma experiencia unica? temos:\n[1]. Sessoes de massagem\n[2]. tratamentos de beleza\n[3]. Jantares ao ar livre\n[4]. degustacoes de vinhos:\n");
    break;
    
    case 5 :
    printf ("Qual apartamento o sr quer?:\n");
    scanf("%s", apart);
    printf("Numero de pessoas que vao hospedar?:\n");
    scanf("%d", &np);
    printf("Quanto tempo voce pretende ficar hospedado?:\n");
    scanf("%f", &dh);
    printf("Qual vai ser a forma de pagamento?:\n1.Pix\n2.Cartao\n3.Dinheiro vivo:\n");
    scanf("%d", &fp);
    
    if (fp == 1) {
    printf("Escaneia o codigo na tela:\n");
    scanf("%d", &fp);
    printf("Pagamneto completo");
    }
	
    else if (fp == 2) {
    printf("Insira o cartao na maquininha:\n");
    scanf("%d", &fp);
    printf("Pagamneto completo");
    }
	
    else {
    printf("Efetua o pagamento:\n");
    scanf("%d", &fp);
    printf("Pagamneto completo");
    }
    break;
	
    case 6 :
    printf ("Ligue para procon:\n1.Numero de telefone 0800-282-1512\n2.WhatsApp e: (81) 3181-7000.");
    break;
    
    case 7:
    printf("Tchau, Tchau baby\n");
    break;
    default:
    printf("Opcao Invalida! Tente Novamente\n");	 
}
   		
    printf("\nPressione Enter para continuar");
    getchar();
    getchar();
		
    system("cls");
   }while(menu !=0);
    return 0;
  
}


