///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///                  Projeto Sistema de Tarot da cigana Alzira              ///
///                Desenvolvido por  @Gabriel5z e @ gcileno - Out, 2021     ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <funcoes.c>

/////
// Assinatura das funções
void telaSobre(void);
void telaPrincipal(void);
void telaEquipe(void);
void telaCadastro(void);
void telaEscolhacarta(void);
void telareusltado(void);
void telalogin(void);
void baralho(void);
void limpar();


/////
// Variaiveis

int escolhaMenu;

/////
// Programa principal
int main(void) { 
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







