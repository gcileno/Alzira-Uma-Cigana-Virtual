#include <stdio.h>
#include <Tela_Inicial01.c>
#include <cadastroplayer.c>

int escolhaMenu;

int menu (void ){
  telaPrincipal();
  switch ( escolhaMenu ){ 
    case 1 :
      telaCadastro();
      cadastro();
    break;
    
    case 2 :
      telalogin();
    break;
    
    case 0 :
      printf ("Adeus, que os astros guiem seu destino!\n");
    break;

    default :
      printf ("Escolha invalida.\n");
  }  
  return 0;
}
