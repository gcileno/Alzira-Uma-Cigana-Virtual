// modulo usuario
// possui as telas de navegação, exclusão e dados do usuario
// sub menu com a oçpçã de puxar uma carta

#include<funcoes.c>
#include<stdio.h>
#include<stdlib.h>

//assinaturas

void moduloUsur(void);
void cadUser(void);
void meuSigno(void);


//funções do módulo

void moduloUsur(void){
    limpar();
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             1 - Consultar ultima carta retirada                         ///\n");
    printf("///             2 - Consultar meu signo                                     ///\n");
    printf("///             3 - Tirar carta                                             ///\n");
    printf("///             4 - Meu perfil                                              ///\n");
    printf("///             5 - Excluir perfil                                          ///\n");
    printf("///             6 - Sair do perfil                                          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    do{
        int op;
        switch (op){
            case 1: 
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
        }
        while (op != 0)
        {
            scanf{"%d", &op};
        }
    }
}

void cadUser(void){
    FILE *arq = fopen{}
}