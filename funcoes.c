void limpar (void);

void limpar(void) {
  if (system("clear") || system("cls")) {
    // limpa a tela, Linux, Mac e Windows
    // adaptado de flavius
  }
}