#include <stdio.h>

int menu (void )
{
  
  int escolhaMenu,  mes, escolhaCarta, dia;
  char nome[400];

  printf ("---- 1. Cadastro do Jogador\n");
  printf ("---- 2. Jogar Cartas       \n");
  printf ("---- 3. Jogar Cartas sem Cadastro\n");
  printf ("---- 0. Sair                      \n");
  scanf("%d", &escolhaMenu);
  
  
  switch ( escolhaMenu )
  {
    case 1 :
    printf ("Digite seu nome: \n");
    scanf  ("%s", nome);
    printf ("Digite o dia de seu nascimento: \n");
    scanf  ("%d", &dia);
    printf ("Digite o mês de seu nascimento: \n");
    scanf  ("%d",&mes);
    printf ("Olá,\n" "%s",nome);
    printf ("seu signo é: ");
    break;
    
    case 2 :
    printf ("Escolha uma carta, acredite no seu destino: \n");
    scanf  ("%d", &escolhaCarta);
    break;
    
    case 3 :
    printf ("Óla jogador, escolha uma carta e descobriremos o que o destino tem para você: \n");
    break;
    
    case 0 :
    printf ("Adeus, que os astros guiem seu destino!\n");
    break;
    
    case 5 :
    printf ("Escolha invalida. \n");
    break;
    
    case 6 :
    printf ("Escolha invalida. \n");
    break;
    
    case 7 :
    printf ("Escolha invalida. \n");
    break;
    
    default :
    printf ("Escolha invalida.\n");
  }
  
  
  return 0;
}
