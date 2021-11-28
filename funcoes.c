void limpar (void);
int cadastro(void);

void limpar(void) {
  if (system("clear") || system("cls")) {
    // limpa a tela, Linux, Mac e Windows
    // adaptado de flavius
  }
}

int cadastro (void) {
    int dia, mes;
    char nome[200];
    printf("Digite seu nome: \n");
    scanf("%s",nome);
    printf(" Digite o dia de seu nascimento:   \n");
    scanf("%d", &dia); 
    printf(" Digite o mês de seu nascimento:   \n");
    scanf("%d", &mes);
    printf("Olá, %s ", nome);
    printf("seu signo é: ");
    telalogin();

    return (0);
};