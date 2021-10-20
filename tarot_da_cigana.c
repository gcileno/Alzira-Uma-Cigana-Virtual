// Assinatura das funções
void telaPrincipal ( void );
void telaInfo ( void );
void cabecalho(void);
void cadastro (void);

// ///
// Programa principal
int  main ( void ) {
    telaPrincipal ();
    telaInfo ();
    return  0 ;
}

// ///
// Funções


void  telaPrincipal ( void ) {
    printf ( " ///////////////////////////////////////////////// ////////////////////////////////////// \n " );
    printf ( " /// /// \n " );
    printf ( " /// = = = = = Sistema Tarot da Cigana Alzira = = = = = /// \n " );
    printf ( " /// /// \n " );
    printf ( " /// 1. Cadastro do jogado /// \n " );
    printf ( " /// 2. Jogar cartas /// \n " );
    printf ( " /// 3. Jogar cartas sem cadastro /// \n " );
    printf ( " /// 0. Sair /// \n " );
    printf ( " /// /// \n " );
    printf ( " ///////////////////////////////////////////////// ////////////////////////////////////// \n " );
    printf ( " \n " );
}

void  telaInfo ( void ) {
    printf ( " ///////////////////////////////////////////////// ////////////////////////////////////// \ n " );
    printf ( " ///                                                                                  /// \n " );
    printf ( " /// Universidade Federal do Rio Grande do Norte                                      /// \n " );
    printf ( " /// Centro de Ensino Superior do Seridó                                              /// \n " );
    printf ( " /// Departamento de Computação e Tecnologia                                          /// \n " );
    printf ( " /// Disciplina DCT1106 - Programação                                                 /// \n " );
    printf ( " /// Projeto Tarot da Cigana Alzira                                                   /// \n " );
    printf ( " /// Lecionado por @flgorgonio - Out, 2021                                            /// \n " );
    printf ( " /// Desenvolvido por @gcileno & @Gabriel5z - Out, 2021                               /// \n " );
    printf ( " ///                                                                                  /// \n " );
    printf ( " /// = = = = = = = = = = = = = Sistema Tarot da Cigana Alzira = = = = = = = = = = = = /// \n " );
    printf ( " ///                                                                                  /// \n " );
    printf ( " /// Programa exemplo utilizado na disciplina DCT1106 - Programação, para             /// \n " );
    printf ( " /// fins didáticos de ilustração. O programa contém os principais módulos            /// \n " );
    printf ( " /// e funcionalidades que serão exigidos na avaliação dos projetos a serem           /// \n " );
    printf ( " /// desenvolvidos pelos alunos ao longo da disciplina. Servir como um guia           /// \n " );
    printf ( " /// de consulta e referência para os projetos desenvolvidos demais.                  /// \n " );
    printf ( " ///                                                                                  /// \n " );
    printf ( " ///////////////////////////////////////////////// ////////////////////////////////////// \n " );
    printf ( " \n " );
    printf ( " ///////////////////////////////////////////////// ////////////////////////////////////// \n " );
    printf ( " ///                                                                                  /// \n " );
    printf ( " /// = = = = = = = = = = = = = Sistema Tarot da Cigana Alzira = = = = = = = = = = = = /// \n " );
    printf ( " ///                                                                                  /// \n " );
    printf ( " /// Este projeto exemplo foi desenvolvido por: @gcileno &  @Gabriel5z                /// \n " );
    printf ( " ///                                                                                  /// \n " );
    printf ( " /// E-mail: gabriel.cileno.093@ufrn.edu.br                                           /// \n " );
    printf ( " /// Repositório: https://github.com/gcileno/Aninha-Uma-Cigana-Virtual.git            /// \n " );
    printf ( " ///                                                                                  /// \n " );
    printf ( " ///////////////////////////////////////////////// ////////////////////////////////////// \n " );
    printf ( " \n " );
}

void  cabecalho(void) {
    printf("///////////////////////////////////////////////// //////////////////////////////////////\n");
    printf("/////////////////////////  Bem Vindo a tenda da Cigana Alzira  /////////////////////////\n");
    printf("/////Estou pronta para ler sua sorte, vamos ver o que o destino guarda para você!///////\n");
    printf("///////////////////////////////////////////////// //////////////////////////////////////\n");
    printf( " \n " );
}

void cadastro (void) {
    char nome;
    int diansc;
    int mes;
    printf("///////////////////////////////////////////////// //////////////////////////////////////\n");
    printf("///////////////////  Digite seu nome:  /////////////////////////////////////////////////\n");
    printf("///////////////////  Digite o dia do seu nascimento  ///////////////////////////////////\n");
    printf("///////////////////  Digite o mês do seu nascimento  ///////////////////////////////////\n");
    printf("////////////////////////////////////////////////////////////////////////////////////////\n");
    printf ( " \n " );
}