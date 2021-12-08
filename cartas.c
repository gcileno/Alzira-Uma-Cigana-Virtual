void telaSobre(void);
void telaPrincipal(void);
void telaEquipe(void);
void telaCadastro(void);
void telaEscolhacarta(void);
void telareusltado(void);
void baralho(void);
void limpar (void);
void cadastro(void);
void telalogin(void);


char cartas [22][15][2048] = {
  {"O Mago: ", "O arcano maior chamado “O Mago” brotou do Tarot como um conselho para este particular
    momento, gabriel. Ele vem sugerir a necessidade de uma quebra de rotina, experimentação de novas ideias,
    fazer diferente, tentar um outro curso de ação. Este é um momento propício para encontros inesperados e
    conversas libertadoras. A qualidade do momento demanda espanar a poeira e abrir-se ao novo.
    Muito estímulo intelectual lhe aguarda nesta etapa de sua vida, o que pode surgir na forma de livros
    que lhe são indicados, pessoas que surgem do nada pra bater um papo com você e lhe permitir um maior
    entendimento das coisas. É como se, agora, as coisas que você fosse ouvir (provavelmente da boca de
    gente que você nem esperava!) lhe permitissem uma libertação de uma forma antiga e superada de 
    abordar as situações. Aproveite este dinâmico período!Conselho: Momento de renovar, de fazer 
    diferente"},

  {"O Imperador","O conselho emitido pelo Tarot vem através da imagem do arcano IV, chamado “O Imperador”,
    cuja imagem nos revela uma figura masculina solidamente colocada, irradiando poder e autoridade.
    O pedido do arcano IV é o da importância de reconhecer a própria força e não depender demais de 
    ninguém. Sempre que dependemos do outro, o outro pode falhar conosco eventualmente e qualquer 
    felicidade excessivamente buscada fora de nós é absolutamente temporária.Procure neste momento,
    cultivar a referência do seu próprio poder pessoal e não se deixe levar demais pelos conselhos alheios.
    Reconheça, em si, a autoridade para comandar sua própria vida.Conselho: Seja mais independente neste
    momento"},

  {"A Força", "A ideia que esta carta traduz é a da necessidade, neste momento, de ter controle sobre 
  suas próprias raivas e paixões, controlando os instintos mais primitivos.Muitas vezes queremos vencer 
  obstáculos externos, obter vitórias, mas tal coisa só é possível quando controlamos a nós mesmos com a 
  devida firmeza, afinal de contas a verdadeira força é aquela que exercemos sobre nós mesmos.A despeito 
  de todas as tentações que você terá para agir como uma criança mimada, será cobrada de você uma postura 
  adulta.Conselho: Procure lidar melhor com a própria raiva."},

  {"O Eremita", "O arcano IX, chamado “O Eremita”, emerge como arcano conselheiro para este momento de sua 
  vida, sugerindo um momento em que você precisará agir com o máximo de maturidade e paciência possíveis.
  Você precisará aprender a respeitar o “tempo certo” neste momento de sua existência e perceberá que será
  preciso bater mais do que uma vez na mesma porta até que ela se abra.Nem sempre o rio corre mais rápido
  apenas porque queremos! Três virtudes serão fundamentais neste momento de sua vida: a paciência
  (para lidar com as diferenças), a prudência (a fim de jamais confiar inteiramente em ninguém)
  e a persistência (para compreender que, no que diz respeito ao amor, muitas vezes é preciso bater
  várias vezes numa mesma porta).O momento pede circunspeção, meditação e capacidade de espera.
  Você poderá mudar muitas coisas que lhe incomodam, se você souber observar o tempo certo, mas
  precisará também ter humildade para entender que nem tudo é possível. Ao aceitar os limites,
  evoluímos como pessoas.Conselho: Momento de cultivar a paciência, tudo tem seu tempo certo."},
  
  {"A Justiça", "O arcano VIII do Tarot, chamado “A Justiça”, emerge como arcano conselheiro para
  este seu momento em particular, lembrando a importância da reflexão fria e analítica em relação
  aos fatos do mundo.Há momentos em que de nada adianta reagir emocionalmente às circunstâncias,
  em que é melhor se recolher e avaliar as coisas a partir de uma perspectiva mais fria, mais elevada.
  O importante, no momento, é julgar da forma mais imparcial possível. Procure ao máximo agir de maneira
  diplomática neste momento. Você vai precisar, pois o momento assim exige.As circunstâncias poderão
  ficar bem difíceis e a tentação de agir de uma maneira impulsiva será muito grande. Segure a onda!
  Conselho: Mantenha uma postura reflexiva diante dos fatos da vida."},

  {"A Temperança", "A empatia nada mais é do que a capacidade, muitas vezes que nasce da simples boa
  vontade, de se colocar no lugar do outro e compreender as coisas a partir do ponto de vista alheio.
  Vivemos, em geral, voltados demais para nossas próprias perspectivas e carecemos de uma avaliação
  mais fiel, justa e sensível da realidade das pessoas que estão ao nosso redor. Cultive uma postura
  mais compreensiva e a recompensa virá na forma de amor, simpatia e colaboração. Você sofrerá testes
  claros em sua paciência, mas não deverá fracassar. Conselho: A necessidade de agir com harmonia entre
  razão e emoção."},