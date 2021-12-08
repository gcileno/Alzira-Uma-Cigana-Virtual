// DECLARÇÃO DAS FUNÇÕES.
void voltar(void);
void limpar (void);
int cadastro(void);
char signo(int,int);
void login(void);
void cNome(void);
void cDia(void);
void cMes(void);
  

//criar função confirma login
void login(void){

}

//criar função confirma nome

void cNome(void){

}

//criar função confirma dia

void cDia(int){
  int dia[2];
  if ((dia >= 1) && (dia <= 31)){
    return 1;
  }
  else{
    return cDia();
  }
}

//criar funçao confirma mes
void cMes(void){

}

//criar função de navegação (voltar telas)
void voltar(void){
  char escolha[1];
  if ((escolha == "v") || (escolha == "V")){
    // nome da tela
  }
}



void limpar(void) {
  if (system("clear") || system("cls")) {
    // limpa a tela, Linux, Mac e Windows
    // adaptado de flavius
  }
}



int cadastro (void) {
    //função para caputrar os dados do usuário
    int dia, mes;
    char nome[200];
    printf("Digite seu nome: \n");
    scanf("%s",nome);
    printf(" Digite o dia de seu nascimento:   \n");
    scanf("%d", &dia); 
    printf(" Digite o mês de seu nascimento:   \n");
    scanf("%d", &mes);
    return (0);
};



char signo (int dia , int mes){
  char r_signo[10];
  /// função para identificar o sgino do usuário a partir da data de nascimento
  if ((dia >= 21 && mes == 3) || (dia <= 20 && mes == 4)){
    strcpy(r_signo, "Aries");
  }
  else if ((dia >= 21 && mes == 4)||(dia <= 20 && mes == 5)){
    strcpy(r_signo,"Touro");
  }
  else if ((dia >= 21 && mes == 5)||(dia <= 20 && mes == 6)){
    strcpy(r_signo,"Gemeos");
  }
  else if ((dia >= 21 && mes == 6)||(dia <= 22 && mes == 7)){
    strcpy(r_signo,"Cancer");
  }
  else if ((dia >= 23 && mes == 7)||(dia <= 22 && mes == 8)){
    strcpy(r_signo,"Leao");
  }
  else if ((dia >= 23 && mes == 8)||(dia <= 22 && mes == 9)){
    strcpy(r_signo,"Virgem");
  }
  else if ((dia >= 23 && mes == 9)||(dia <= 22 && mes == 10)){
    strcpy(r_signo,"Libra");
  }
  else if ((dia >= 23 && mes == 10)||(dia <= 21 && mes == 11)){
    strcpy(r_signo,"Escorpiao");
  }
  else if ((dia >= 22 && mes == 11)||(dia <= 21 && mes == 12)){
    strcpy(r_signo,"Sagitario");
  }
  else if ((dia >= 22 && mes == 12)||(dia <= 20 && mes == 1)){
    strcpy(r_signo,"Capricornio");
  }
  else if ((dia >= 21 && mes == 1)||(dia <= 18 && mes == 2)){
    strcpy(r_signo,"Aquario");
  }
  else if ((dia >= 19 && mes == 2)||(dia <= 20 && mes == 3)){
    strcpy(r_signo,"Peixes");
  }
  return r_signo;  
};
