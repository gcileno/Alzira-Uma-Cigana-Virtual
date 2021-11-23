///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///                  Projeto Sistema de Tarot da cigana Alzira              ///
///                Desenvolvido por  @Gabriel5z e @ gcileno - Out, 2021     ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <cadastroplayer.c>

/////
// Assinatura das funções
void telaSobre(void);
void telaPrincipal(void);
void telaEquipe(void);
void telaCadastro(void);
void telaEscolhacarta(void);
void telareusltado(void);
void baralho(void);


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

/////
// Funções





void telaPrincipal(void) {
    system
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
    printf("///                  Sistema de Tarot da cigana Alzira                      ///\n");
    printf("///                Desenvolvido por @Gabriel5z e @gcileno - Out, 2021       ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = Sistema de Tarot da cigana Alzira = = = = =        ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Cadastro Jogador                                          ///\n");
    printf("///            2. Tirar cartas com a sigana                                 ///\n");
    printf("///            3. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}
void telalogin(void){
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            = = = = = Tarot da cigana Alzira = = = = =                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            Digite seu acesso:                                           ///\n");
    printf("///            Digite a senha:                                              ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    /* telaEscolhacarta(); */

}    

void telaCadastro(void) {
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            = = = = = Tarot da cigana Alzira = = = = =                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            Digite seu nome:                                             ///\n");
    printf("///            Digite o dia de nascimento:                                  ///\n");
    printf("///            Digite o mes de nascimento:                                  ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    /* if (telaCadastro()){telalogin()}; */
}
void telaEscolhacarta(void){
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            = = = = = Tarot da cigana Alzira = = = = =                   ///\n");
    printf("///            *nome do usuario                                             ///\n");
    printf("///            Seu signo é *signo                                           ///\n");
    printf("///            Agora medite um pouco sobre o que você deseja                ///\n");
    printf("///            saber sobre seu futuro e o universo irá responder            ///\n");
    printf("///            através da carta selecionada                                 ///\n");
    printf("///                                                                         ///\n");
    printf("///            Digite o numero da carta que você deseja tirar:              ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
}

void baralho (void){
    printf(
        "///////////////////////////////////////////////////////////////////////////////\n"
    );
    printf(
        "///       _         _         _         _         _         _               ///\n"     
        "///      | |       | |       | |       | |       | |       | |              ///\n"
        "///      |_|       |_|       |_|       |_|       |_|       |_|              ///\n"
        "///       1         2         3         4         5         6               ///\n"

        "///       _         _         _         _         _         _               ///\n"     
        "///      | |       | |       | |       | |       | |       | |              ///\n"
        "///      |_|       |_|       |_|       |_|       |_|       |_|              ///\n"
        "///       7         8         9         10        11        12              ///\n"

        "///       _         _         _         _         _         _               ///\n"     
        "///      | |       | |       | |       | |       | |       | |              ///\n"
        "///      |_|       |_|       |_|       |_|       |_|       |_|              ///\n"
        "///       13        14        15        16        17        18              ///\n"

        "///                 _         _         _         _                         ///\n"     
        "///                | |       | |       | |       | |                        ///\n"
        "///                |_|       |_|       |_|       |_|                        ///\n"
        "///                 19        20        21        22                        ///\n"
        "///////////////////////////////////////////////////////////////////////////////\n"
  );
}
void telareusltado(void){
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            = = = = = Tarot da cigana Alzira = = = = =                   ///\n");
    printf("///            *nome do usuario                                             ///\n");
    printf("///            Seu signo é *signo                                           ///\n");
    printf("///            Interessante, a carta que vc escolheu foi: *nome da carta    ///\n");
    printf("///                                                                         ///\n");
    printf("///            Descrição do significado da carta                            ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
}

void telaEquipe(void) {
    printf("\n");
    printf("////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                          ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                  ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                      ///\n");
    printf("///               Departamento de Computação e Tecnologia                    ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                       ///\n");
    printf("///                  Projeto Sistema de Tarot da cigana Alzira               ///\n");
    printf("///                Desenvolvido por @Gabriel5z e @gcileno - Out, 2021        ///\n");
    printf("///                                                                          ///\n");
    printf("////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                          ///\n");
    printf("///            = = = = = Sistema de Tarot da ciga Alzira = = = = =           ///\n");
    printf("///                                                                          ///\n");
    printf("///              Este projeto foi desenvolvido por:                          ///\n");
    printf("///                                                                          ///\n");
    printf("///        Discentes:    Gabriel Wonixon P. de Vasconcelos                   ///\n");
    printf("///                      Gabriel Cileno de Medeiros Costa                    ///\n");
    printf("///        E-mail's:     gabriel.cileno.093@ufrn.edu.br                      ///\n");
    printf("///                      gabriel.vasconcelos.713@ufrn.edu.br                 ///\n");
    printf("///        Repositório: https://github.com/gcileno/Aninha-Uma-Cigana-Virtual ///\n");
    printf("///                                                                          ///\n");
    printf("///                                                                          ///\n");
    printf("////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}
