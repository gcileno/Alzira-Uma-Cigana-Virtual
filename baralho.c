int telaEscolhacarta(void)
void telaresultado(void);
void baralho(void);


void baralho (void){
    limpar();
    printf(
        "///////////////////////////////////////////////////////////////////////////////\n");
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
};

int telaEscolhacarta(void){
    int esc[2];
    limpar();
    baralho();
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            = = = = = Tarot da cigana Alzira = = = = =                   ///\n");
    printf("///            *nome do usuario                                             ///\n");
    printf("///            Seu signo ?? *signo                                           ///\n");
    printf("///            Agora medite um pouco sobre o que voc?? deseja                ///\n");
    printf("///            saber sobre seu futuro e o universo ir?? responder            ///\n");
    printf("///            atrav??s da carta selecionada                                 ///\n");
    printf("///                                                                         ///\n");
    printf("///            Digite o numero da carta que voc?? deseja tirar:              ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    scanf();
    printf("///////////////////////////////////////////////////////////////////////////////\n");
};

void telaresultado(void){
    limpar();
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            = = = = = Tarot da cigana Alzira = = = = =                   ///\n");
    printf("///            *nome do usuario                                             ///\n");
    printf("///            Seu signo ?? *signo                                           ///\n");
    printf("///            Interessante, a carta que vc escolheu foi: *nome da carta    ///\n");
    printf("///                                                                         ///\n");
    printf("///            Descri????o do significado da carta                            ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
};
