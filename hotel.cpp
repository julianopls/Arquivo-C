#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

  int main (){

    char nome [20], email [50], apart [20];
	int menu, CPF, telefone, np, fp, valor, procon, opcao_menu_pedido, opcao_bebida, opcao_pizza, opcao_lanche, opcao_sobremesa;
	float dh, qtd, ap;
    do {
    printf("Bem vindo! ao Hotel Fazenda:\n");
    printf("[1] - Confirma os dados pessoais:\n");
    printf("[2] - Sobre acessibilidade:\n");
    printf("[3] - Servicos:\n");
    printf("[4] - Experiencias unicas:\n");
    printf("[5] - Confirma o tipo de apartamento, numero de pessoas, duracao da hospedagem, forma de pagamento, valor:\n");
    printf("[6] - Procon:\n");
    printf("[7] - Pedidos:\n");
    printf("[8] - Sair:\n");
    scanf("%d", &menu);
  
  switch ( menu )
  {
    case 1 :
    printf("--------------------------------\n");
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
    printf("--------------------------------\n");
    printf("Acessibilidade Oferecidas:\n[1].Servicos para pessoas com deficiencia (PCD) ou mobilidade reduzida\n[2].Apartamentos adaptados para essas pessoas\n[3].Padrao de servico e estrutura adequados");
    break;
    
    case 3 :
    printf("--------------------------------\n");
    printf ("Servicos que oferecemos:\n[1].Kit boas-vindas com agua, snacks, cafe, produtos de higiene pessoal e toalhas de banho\n[2].Early check-in e late check-out\n[3].Brindes e produtos de higiene personalizados\n[4].piscina\n[5].spa\n[6].Restaurantes gourmet:\n");
    break;
    
    case 4 :
    printf("--------------------------------\n");
    printf("Voce que quer ter uma experiencia unica? temos:\n[1]. Sessoes de massagem\n[2]. tratamentos de beleza\n[3]. Jantares ao ar livre\n[4]. degustacoes de vinhos:\n");
    break;
    
    case 5 :
    printf("--------------------------------\n");
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
    printf("--------------------------------\n");
    printf ("Ligue para procon:\n1.Numero de telefone 0800-282-1512\n2.WhatsApp e: (81) 3181-7000.");
    break;
    
    case 7:
    printf("CARDAPIO\n");
    printf("--------------------------------\n");
    printf("[ 1 ] Bebidas.\n");
    printf("[ 2 ] Pizzas.\n");
    printf("[ 3 ] Lanches.\n");
    printf("[ 4 ] Sobremesas.\n");
    printf("Digite sua opcao:\n");
    scanf("%d", &opcao_menu_pedido);
    system("cls");
    switch(opcao_menu_pedido){
    
	case 1:
    printf("--------------------------------\n");
    printf("Escolha uma bebida:\n");
    printf("[ 1 ] Guarana 2L - R$ 9,00.\n");
    printf("[ 2 ] Suco 300ml - R$ 6,00.\n");
    printf("[ 3 ] Agua 550ml- R$ 3,00.\n");
    printf("Digite sua opcao:\n");
    scanf("%d", &opcao_bebida);
    switch(opcao_bebida){
    
	case 1:
    printf("--------------------------------\n");
    printf("Quantos guaranas deseja?\n");
    scanf("%f", &qtd);
    printf("Digite o numero do seu apartamento:\n");
    scanf("%f", &ap);
    printf("O valor do seu pedido sera de R$%.2f.",qtd * 9,00);
    printf("\nSeu pedido sera entregue em breve!\n\n");
    break;
    
	case 2:
    printf("--------------------------------\n");
    printf("Quantos sucos deseja?\n");
    scanf("%f", &qtd);
    printf("Digite o numero do seu apartamento:\n");
    scanf("%f", &ap);
    
    printf("O valor do seu pedido sera de R$%.2f.",qtd * 6,00);
    printf("\nSeu pedido sera entregue em breve!\n\n");
    break;
    
	case 3:
    printf("--------------------------------\n");
    printf("Quantas aguas deseja?\n");
    scanf("%f", &qtd);
    printf("Digite o numero do seu apartamento:\n");
    scanf("%f", &ap);
    printf("O valor do seu pedido sera de R$%.2f.",qtd * 3,00);
    printf("\nSeu pedido sera entregue em breve!\n\n");
    break;
    
    default:
    printf("Opcao invalida. Voltando ao menu.\n");
    return 1;
    }
    case 2:
    printf("--------------------------------\n");
    printf("Escolha uma pizza:\n");
    printf("[ 1 ] Frango com catupiry - R$ 50,00.\n");
    printf("[ 2 ] Calabresa - R$ 50,00.\n");
    printf("[ 3 ] Portuguesa - R$ 40,00.\n");
    printf("[ 4 ] Juju - R$ 40,00");
    printf("Digite sua opcao:\n");
    scanf("%d", &opcao_pizza);
    system("cls");
    switch(opcao_pizza){
    
	case 1:
    printf("--------------------------------\n");
    printf("Quantas pizzas de frango com catupiry deseja?\n");
    scanf("%f", &qtd);
    printf("Digite o numero do seu apartamento:\n");
    scanf("%f", &ap);
    printf("O valor do seu pedido sera de R$%.2f.",qtd * 50,00);
    printf("\nSeu pedido sera entregue em breve!\n\n");
    break;
    
    case 2:
    printf("--------------------------------\n");
    printf("Quantas pizzas de calabresa deseja?\n");
    scanf("%f", &qtd);
    printf("Digite o numero do seu apartamento:\n");
    scanf("%f", &ap);
    printf("O valor do seu pedido sera de R$%.2f.",qtd * 50,00);
    printf("\nSeu pedido sera entregue em breve!\n\n");
    break;
    
    case 3:
    printf("--------------------------------\n");
    printf("Quantas pizzas portuguesa deseja?\n");
    scanf("%f", &qtd);
    printf("Digite o numero do seu apartamento:\n");
    scanf("%f", &ap);
    printf("O valor do seu pedido sera de R$%.2f.",qtd * 40,00);
    printf("\nSeu pedido sera entregue em breve!\n\n");
    break;
    
	case 4:
    printf("--------------------------------\n");
    printf("Quantas pizzas juju deseja?\n");
    scanf("%f", &qtd);
    printf("Digite o numero do seu apartamento:\n");
    scanf("%f", &ap);
    printf("O valor do seu pedido sera de R$%.2f.",qtd * 40,00);
    printf("\nSeu pedido sera entregue em breve!\n\n");
    default:
    printf("Opcao invalida. Voltando ao menu.\n");
    return 1;
    }
    case 3:
    printf("--------------------------------\n");
    printf("Escolha um lanche:\n");
    printf("[ 1 ] X-Burguer - R$ 20,00.\n");
    printf("[ 2 ] X-Salada - R$ 24,00.\n");
    printf("[ 3 ] X-Egg-Bacon - R$ 30,00.\n");
    printf("[ 4 ] X-Tudo - R$ 36,00");
    printf("Digite sua opcao:\n");
    scanf("%d", &opcao_lanche);
    system("cls");
	
	switch(opcao_lanche){
    case 1:
    printf("--------------------------------\n");
    printf("Quantos X-Burguer deseja?\n");
    scanf("%f", &qtd);
    printf("Digite o numero do seu apartamento:\n");
    scanf("%f", &ap);
    printf("O valor do seu pedido sera de R$%.2f.",qtd * 20,00);
    printf("\nSeu pedido sera entregue em breve!\n\n");
    break;
    
	case 2:
    printf("--------------------------------\n");
    printf("Quantos X-Salada deseja?\n");
    scanf("%f", &qtd);
    printf("Digite o numero do seu apartamento:\n");
    scanf("%f", &ap);
    printf("O valor do seu pedido sera de R$%.2f.",qtd * 24,00);
    printf("\nSeu pedido sera entregue em breve!\n\n");
    break;
    
    case 3:
    printf("--------------------------------\n");
    printf("Quantas X-Egg-Bacon deseja?\n");
    scanf("%f", &qtd);
    printf("Digite o numero do seu apartamento:\n");
    scanf("%f", &ap);
    printf("O valor do seu pedido sera de R$%.2f.",qtd * 30,00);
    printf("\nSeu pedido sera entregue em breve!\n\n");
    break; 
    
    case 4:
    printf("--------------------------------\n");
    printf("Quantas X-Tudo deseja?\n");
    scanf("%f", &qtd);
    printf("Digite o numero do seu apartamento:\n");
    scanf("%f", &ap);
    printf("O valor do seu pedido sera de R$%.2f.",qtd * 36,00);
    printf("\nSeu pedido sera entregue em breve!\n\n");
    break; 
    
    default:
    printf("Opcao invalida. Voltando ao menu.\n");
    return 1;
    }
    case 4:
    printf("--------------------------------\n");
    printf("Escolha uma sobremesa:\n");
    printf("[ 1 ] Pudim - R$ 20,00.\n");
    printf("[ 2 ] Sorvete - R$ 7,00.\n");
    printf("[ 3 ] Banana split - R$ 10,00.\n");
    printf("[ 4 ] Mousse de maracuja - R$ 8,00.\n");
    printf("Digite sua opcao:\n");
    scanf("%d", &opcao_sobremesa);
    system("cls");
    
	switch(opcao_sobremesa){
    case 1:
    printf("--------------------------------\n");
    printf("Quantos pudins deseja?\n");
    scanf("%f", &qtd);
    printf("Digite o numero do seu apartamento:\n ");
    scanf("%f", &ap);
    printf("O valor do seu pedido sera de R$%.2f.", qtd * 20.00);
    printf("\nSeu pedido sera entregue em breve!\n\n");
    break;
    
    case 2:
    printf("--------------------------------\n");
    printf("Quantos sorvetes deseja?\n");
    scanf("%f", &qtd);
    printf("Digite o numero do seu apartamento:\n");
    scanf("%f", &ap);
    printf("O valor do seu pedido sera de R$%.2f.", qtd * 7.00);
    printf("\nSeu pedido sera entregue em breve!\n\n");
    break;
    
    case 3:
    printf("--------------------------------\n");
    printf("Quantos Banana split deseja?\n");
    scanf("%f", &qtd);
    printf("Digite o numero do seu apartamento:\n");
    scanf("%f", &ap);
	printf("O valor do seu pedido sera de R$%.2f.", qtd * 10.00);
    printf("\nSeu pedido sera entregue em breve!\n\n");
    break;
    
    case 4:
    printf("--------------------------------\n");
    printf("Quantos mousses de maracuja deseja?\n");
    scanf("%f", &qtd);
    printf("Digite o numero do seu apartamento:\n");
    scanf("%f", &ap);
    printf("O valor do seu pedido sera de R$%.2f.", qtd * 8.00);
    printf("\nSeu pedido sera entregue em breve!\n\n");
    break;
    
    default:
    printf("Opcao invalida. Voltando ao menu.\n");
    return 1;
    }
    default:
    printf("Opcao invalida. Voltando ao menu.\n");
    return 1;
    }
    
    case 8:
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





