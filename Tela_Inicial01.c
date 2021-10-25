///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///                  Projeto Sistema de Tarot da cigana Alzira              ///
///                Desenvolvido por  @Gabriel5z e @ gcileno - Out, 2021     ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/////
// Assinatura das funções
void telaSobre(void);
void telaPrincipal(void);
void telaEquipe(void);

/////
// Programa principal
int main(void) {
    telaSobre();
    telaPrincipal();
    telaCadastro();
    telaEscolhacarta();
    telareusltado();
    telaEquipe();
    return 0;
}

/////
// Funções

void telaSobre(void) {
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
    printf("///                  Projeto Sistema de Tarot da cigana                     ///\n");
    printf("///                Desenvolvido por  @Gabriel5z e @gcileno- Out, 2021       ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = Sistema de Tarot da cigana Alzira = = = = =        ///\n");
    printf("///                                                                         ///\n");
    printf("///  Programa utilizado na disciplina DCT1106 - Programação. Para           ///\n");
    printf("///  fins didáticos. O programa contém incialmente as telas                 ///\n");
    printf("///  que serão  desenvolvidas ao longo do projeto.                          ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}



void telaPrincipal(void) {
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
    printf("///            2. Jogar Cartas                                              ///\n");
    printf("///            3. Jogar Cartas sem Cadastro                                 ///\n");
    printf("///                                                                         ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

void telaCadastro(void) {
    printf("///            = = = = = Tarot da cigana Alzira = = = = =                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            Digite seu nome                                              ///\n");
    printf("///            Digite o dia de nascimento                                   ///\n");
    printf("///            Digite o mes de nascimento                                   ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
}
void telaEscolhacarta(void){
    printf("///            = = = = = Tarot da cigana Alzira = = = = =                   ///\n");
    printf("///            *nome do usuario                                             ///\n");
    printf("///            Seu signo é *signo                                           ///\n");
    printf("///            Agora digite o numero para escolhoer uma carta               ///\n");
    printf("///                                                                         ///\n");
    printf("///            1                2               3                           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
}
void telareusltado(void){
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
