// arquivo para definir as estruturas de dados do aplicativo

struct Usuario {
    char nome;
    char sobrenome;
    long int cpf;
    int dNasc;
    int mNasc;
    char ulCarta;
};

struct Cigana{
    char nome;
    char sobrenome;
    char especialidade;
}

struct Relatorios{
    int cartas;
    int usuarios;
    int ciganas;
    int tiradas;
    int previ;
}