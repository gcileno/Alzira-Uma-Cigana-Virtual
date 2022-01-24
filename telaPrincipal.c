#include<stdio.h>
#include<estruturas.c>


void telaCadastro(void);
void telaPrincipal(void);
void telalogin(void);




void telaPrincipal(void) {
    limpar();
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
};

void telalogin(void){
    limpar();
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            = = = = = Tarot da cigana Alzira = = = = =                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            Digite seu acesso:                                           ///\n");
    scanf();
    printf("///            Digite a senha:                                              ///\n");
    scanf();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    //fazer função para confirmar acesso ao sistema e aplicar return permitindo ou não.
};

void telaCadastro(void){
    Usuario* user;
    limpar();
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = Sistema de Tarot da cigana Alzira = = = = =        ///\n");
    printf("///            Digite seu nome:                                             ///\n");
    scanf("%d[^\n]", user.nome);
    printf("///            Digite seu sobrenome:                                        ///\n");
    scanf("%d[^\n]", user.sobrenome);
    printf("///            Digite seu cpf:                                              ///\n");
    scanf("%c[^\n]", user.sobrenome);
    printf("///            Digite o dia de nascimento:                                  ///\n");
    scanf("%c[^\n]", user.sobrenome);
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");