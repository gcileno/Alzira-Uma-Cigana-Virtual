
void telaPrincipal(void) {
    int nav[1];
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
    printf("///            2. Tirar cartas com a Cigana                                 ///\n");
    printf("///            3. Mesa da Cigana                                            ///\n");
    printf("///            4. Sair                                                      ///\n");
    printf("///           Digite o numero de sua opção ou 0 para sair                   ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    do{
        scanf("%d", &nav);
        switch (nav){
        case 1: telaCadastro();
            break;
        case 2: telalogin();
            break;
        case 3: 
            break;
        case 4: 
            break;
        }
        while (nav != 4)
        {
            telaPrincipal();
        }
    }
}