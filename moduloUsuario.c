// modulo usuario
// possui as telas de navegação, exclusão e dados do usuario
// sub menu com a oçpçã de puxar uma carta

#include<funcoes.c>
#include<stdio.h>
#include<stdlib.h>
#include<estruturas.h>

//assinaturas

void moduloUsur(void);
void cadUser(void);
Usuario* user (void);


//funções do módulo

void moduloUsur(void){
    limpar();
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             1 - Cadastrar Usuario                                       ///\n");
    printf("///             2 - Consultar usuario                                       ///\n");
    printf("///             3 - Tirar carta                                             ///\n");
    printf("///             4 - Meu perfil                                              ///\n");
    printf("///             5 - Excluir perfil                                          ///\n");
    printf("///             6 - Sair do perfil                                          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    do{
        int op;
        switch (op){
            case 1: cadUser();
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
    FILE *arq; 
    Usuario* user;
    arq = fopen("dados.dat","ab");
    if (fp == NULL) {
    printf("Erro na criacao do arquivo\n!");
        exit(1);
        }
    arq = user();
    fwrite(arq, sizeof(Usuario), 1, fp);
    fclose(fp);
    free(user);
return 0;
}

Usuario* user (void){
    Usuario* user;
    user = (Usuario*) malloc(sizeof(Usuario));
    limpar();
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///             Antes de começar, preciso saber mais de você                ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Vou fazer algumas perguntas antes de tirar                  ///\n");
    printf("///             sua carta e ver sua sorte.                                  ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");

    printf("///             Informe seu nome:                                           ///\n");
    scanf("%ld", user->nome);
    getchar();
    printf("///             Informe seu cpf:                                            ///\n");
    scanf(" %80[^\n]", user->cpf);
    getchar();
    printf("///             Informe o dia que nasceu:                                   ///\n");
    scanf("%d[^\n]", &user->dNasc);
    printf("///             Informe o mes que nasceu:                                   ///\n");
    scanf("%d[^\n]", &user->mNasc);
    user->signo = signo(dNasc,mNasc);

    user->status = 'm';
return user;
}