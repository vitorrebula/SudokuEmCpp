/* PROJETO DE JOGO PARA AEDS E FUNDAMENTOS DA ENGENHARIA DE SOFTWARE POR VITOR REBULA E THIAGO CURY

MOTIVO DE ESCOLHA DO SUDOKU:
Vitor jogou um jogo na casa da namorada que era sobre combinação de letras para formar palavras,
chamado homecube ( acho ), e então tentamos fazer, mas como para conferir se as letras formariam
uma palavra real seria uma atividade muito dificil, pensamos em outro jogo de combinação, que o 
avô do Thiago disse que jogava no jornal, o Sudoku. 
Não sabíamos jogar então ele nos ensinou, e ainda somos muito ruins, pegamos alguns jogos que ele
nos mostrou pra colocarmos, e outros pegamos na internet, pois não tinhamos intelecto suficiente
para fazer uma função que criasse um jogo, ou criar um jogo nós mesmos.
Acredito que o jogo seja muito interessante, estimula a memória, pensamento lógico, e é muito
divertido.
Válido ressaltar que os jogos são de dificuldades variadas, tendo de jogos MUITO DIFÍCEIS ( expe-
riência própria ) até jogos MUITO FÁCEIS ( também experiência própria ).

AEDS:
- Infelizmente, não utilizamos a biblioteca allegro, para ser sincero, não sabíamos como usar,
pensamos em usá-la para facilitar a seleção de onde o usuário quer atribuir valor no sudoku, mas
não conseguimos, até vimos o vídeo do Pedro, mas não conseguimos.
O jogo, como pede no enunciado, não atende ao comando de que mouse e teclado deveriam ser utili-
zados para jogá-lo, àpenas ao teclado.

explicando a assinatura:
---------------------------------------------------------
-----------------ASSINATURA------------------------------
Nome do trecho: Nome da função ou componente
Objetivo: Objetivo da função ou componente
Autor: Quem foi o principal responsável pelo desenvolvi-
mento da mesma, ambos tivemos participações em todas.
Descrição: Descrição do QUE FAZ, e COMO FAZ a função/com-
ponente
Sucesso na função: O que seria sucesso na função.
---------------------------------------------------------
---------------------------------------------------------*/

#include <iostream>

#include <cstdlib>

#include <time.h>

using namespace std;

int sudoku[9][9];

int sudoku_tabuleiro[9][9];

/*-------------------------------------------------------
-----------------ASSINATURA------------------------------
Nome do trecho: Todos os Jogos
Objetivo: Armazenar todos os Jogos possíveis
Autor: Thiago Cury Freire
Descrição: Nesses valores declarados para Int, como matri-
zes, estão armazenados todos os jogos possíveis de Sudoku, 
para que o programa possa escolher um deles, para o joga-
dor jogar, válido ressaltar que eu nem o Vitor sabíamos 
jogar sudoku, então tivemos de aprender, e para ficar mais
fácil, pegamos jogos prontos que o avô do thiago tinha, e
uns na internet, e colocamos em uma matriz.
Não conseguimos fazer um gerador de jogos automático.
Sucesso na função: Não se trata de uma função, mas aqui es-
tá documentado os jogos possíveis, alocados como matrizes.
---------------------------------------------------------
---------------------------------------------------------*/
int M0[9][9]={{5,0,0,3,0,4,0,0,0},{9,0,2,0,0,0,0,0,4},{0,0,7,0,0,0,5,6,0},{7,0,0,0,4,6,0,0,8},{0,0,0,0,8,0,0,0,0},{8,0,0,5,9,0,0,0,2},{0,4,8,0,0,0,6,1,0},{3,0,0,0,0,0,0,0,0},{0,0,0,8,0,1,0,4,9}};

int M1[9][9]={{2,0,0,0,0,1,4,0,0},{7,0,0,0,9,0,0,0,0},{0,3,0,0,5,6,0,0,2},{0,7,0,2,1,8,5,0,6},{1,0,2,0,0,5,9,3,0},{0,6,0,0,0,9,0,0,0},{6,0,0,0,8,0,0,0,0},{9,0,0,5,0,3,8,0,0},{4,1,8,0,2,0,0,6,5}};

int M2[9][9]={{0,2,7,4,0,5,9,6,0},{4,9,0,2,0,6,0,5,1},{0,0,1,0,0,0,0,7,0},{7,0,0,0,8,0,0,0,9},{0,0,9,0,0,0,7,0,0},{1,0,0,0,6,0,0,0,5},{0,7,0,0,0,0,5,0,0},{5,1,0,6,0,7,0,3,4},{0,4,2,8,0,3,6,1,0}};

int M3[9][9]={{7,0,8,0,3,0,0,0,6},{0,3,0,8,0,0,1,4,0},{0,5,0,0,4,2,0,0,9},{0,0,7,0,2,0,0,6,0},{5,0,2,3,0,9,8,0,4},{0,9,0,0,7,0,5,0,0},{8,0,0,1,9,0,0,2,0},{0,1,6,0,0,7,0,3,0},{3,0,0,0,8,0,7,0,1}};

int M4[9][9]={{5,0,6,0,7,8,4,0,0},{9,0,0,0,0,0,0,2,0},{0,2,8,0,0,4,3,6,0},{0,0,0,1,2,0,8,5,4},{0,0,0,9,0,3,0,0,0},{2,5,7,0,8,6,0,0,0},{0,1,3,6,0,0,9,8,0},{0,4,0,0,0,0,0,0,5},{0,0,5,8,3,0,7,0,1}};

int M5[9][9]={{5,0,0,0,8,0,0,0,0},{0,0,0,1,0,7,3,8,0},{6,0,0,0,0,2,1,7,9},{3,7,4,0,9,0,0,0,0},{0,0,1,2,0,8,6,0,0},{0,0,0,0,1,0,5,9,3},{7,9,6,3,0,0,0,0,4},{0,4,8,6,0,5,0,0,0},{0,0,0,0,4,0,0,0,2}};

int M6[9][9]={{0,0,0,0,9,4,7,0,0},{0,9,1,6,0,8,0,2,0},{4,0,0,7,3,0,5,0,6},{0,0,0,8,0,0,1,0,5},{1,0,6,0,0,0,2,0,9},{3,0,4,0,0,2,0,0,0},{5,0,2,0,8,9,0,0,3},{0,6,0,5,0,7,4,8,0},{0,0,7,1,6,0,0,0,0}};

int M7[9][9]={{0,0,3,1,0,4,0,5,0},{6,8,0,3,0,0,2,7,0},{0,5,0,7,0,2,0,0,1},{2,0,6,0,0,0,8,1,7},{0,0,0,0,0,0,0,0,0},{5,4,8,0,0,0,6,0,9},{8,0,0,9,0,1,0,2,0},{0,7,4,0,0,3,0,6,8},{0,3,0,6,0,8,4,0,0}};

int M8[9][9]={{0,0,6,8,0,0,0,9,4},{0,2,0,0,6,0,7,0,0},{7,0,0,4,0,2,0,0,0},{0,0,0,0,0,0,0,1,0},{6,4,0,0,2,8,3,5,0},{0,9,0,5,0,1,0,0,2},{4,0,2,6,0,3,0,0,5},{0,0,0,0,1,0,0,0,3},{8,0,9,0,0,0,1,2,0}};

int M9[9][9]={{5,0,6,0,0,9,0,0,8},{9,4,0,0,7,0,5,0,0},{0,8,0,5,0,2,0,1,0},{0,5,0,4,6,0,0,0,7},{8,0,3,0,0,0,6,0,4},{7,0,0,0,8,1,0,3,0},{0,9,0,7,0,6,0,5,0},{0,0,2,0,3,0,0,4,9},{1,0,0,8,0,0,7,0,2}};


/*-------------------------------------------------------
-----------------ASSINATURA------------------------------
Nome do trecho: Menu Inicial
Objetivo: Iniciar um jogo, ou Sair.
Autor: Thiago Cury Freire.
Descrição: Nesse menu, o usuário poderá escolher se deseja
jogar um jogo, ou sair do programa.
Sucesso na função: O usuário consegue ver as opções apre-
sentadas na tela.
---------------------------------------------------------
---------------------------------------------------------*/
void menuinicial(){

    cout<<"---------------------------------------SUDOKU----------------------------------"<<endl;
    cout<<"----------------------------------Vitor e Thiago Cury--------------------------"<<endl;
   
    cout<<"O sudoku eh um jogo que estimula o pensamento, raciocinio logico e a memoria, sendo um jogo muito antigo e interessante, como o xadrez por exemplo"<<endl;
    
    cout<<"O objetivo do jogo e preencher os espacos vazios com numeros de 1 a 9, sendo que nenhum numero pode se repetir na mesma linha, coluna ou quadrado."<<endl;
     
    cout<<"Caso tenha se interessado em jogar, escolha a opcao 1, caso contrario, escolha a opcao 2."<<endl;
    
    cout<<"1 - Jogar"<<endl;

    cout<<"2 - Sair"<<endl;

    cout<<"Escolha sua opcao!"<<endl;

}


/*-------------------------------------------------------
-----------------ASSINATURA------------------------------
Nome do trecho: Inicializando o Sudoku
Objetivo: Iniciar um dos jogos anteriores aleatoriamente.
Autor: Thiago Cury Freire.
Descrição: Aqui, utilizamos a função SRAND em função do 
tempo, para que o tabuleiro seja sempre diferente, a cada
vez que o programa for iniciado. Isso é feito da seguinte
forma, a variável s irá receber um valor aleatório de 0 a
9, e dependendo do valor de s, será iniciado o tabuleiro 
de numero s, que foi declarado anteriormente no trecho 
datado como "todos os jogos", exemplo, caso o aleatório 
sorteado seja 2, será iniciado o jogo M2, recebendo os 
dados desse jogo específico.
No final, sudoku_tabuleiro também recebe os valores da 
matriz que foi criada, para comparação depois, para que 
o usuário não consiga alterar os valores iniciais do
tabuleiro.
Sucesso na função: A função consegue inicializar um jogo
aleatório, e atribuir esse jogo à variável "sudoku_tabu-
leiro".
---------------------------------------------------------
---------------------------------------------------------*/
void inicializarsudoku(){


    
    srand(time(0));

    int s = rand()%10;



    switch (s) {

        case 0:

            for(int i=0;i<9;i++){

                for(int j=0;j<9;j++){

                    sudoku[i][j]= M0[i][j];

                }

            }

            break;

        case 1:

            for(int i=0;i<9;i++){

                for(int j=0;j<9;j++){

                    sudoku[i][j]= M1[i][j];

                }

            }

            break;

        case 2:

            for(int i=0;i<9;i++){

                for(int j=0;j<9;j++){

                    sudoku[i][j]= M2[i][j];

                }

            }

            break;

        case 3:

            for(int i=0;i<9;i++){

                for(int j=0;j<9;j++){

                    sudoku[i][j]= M3[i][j];

                }

            }

            break;

        case 4:
        
            for(int i=0;i<9;i++){

                for(int j=0;j<9;j++){

                    sudoku[i][j]= M4[i][j];

                }

            }

            break;

        case 5:

            for(int i=0;i<9;i++){

                for(int j=0;j<9;j++){

                    sudoku[i][j]= M5[i][j];

                }

            }

            break;

        case 6:

            for(int i=0;i<9;i++){

                for(int j=0;j<9;j++){

                    sudoku[i][j]= M6[i][j];

                }

            }

            break;

        case 7:

            for(int i=0;i<9;i++){

                for(int j=0;j<9;j++){

                    sudoku[i][j]= M7[i][j];

                }

            }

            break;

        case 8:

            for(int i=0;i<9;i++){

                for(int j=0;j<9;j++){

                    sudoku[i][j]= M8[i][j];

                }

            }

            break;

        case 9:

            for(int i=0;i<9;i++){

                for(int j=0;j<9;j++){

                    sudoku[i][j]= M9[i][j];

                }

            }

            break;

    }

    for(int i=0;i<9;i++){

        for(int j=0;j<9;j++){

            sudoku_tabuleiro[i][j]= sudoku[i][j];

        }

    }

}


/*-------------------------------------------------------
-----------------ASSINATURA------------------------------
Nome do trecho: Imprimindo o Jogo na Tela
Objetivo: Imprimir o jogo Inicial para o Usuário
Autor: Vitor Rebula Nogueira
Descrição: a função "void imprimirsudoku", tem por obje-
tivo imprimir inicialmente o sudoku, para que o usuário
preencha, para tentar resolvê-lo.
Sucesso na função: A função consegue imprimir o jogo na
tela do usuário.
---------------------------------------------------------
---------------------------------------------------------*/
void imprimirsudoku(){

    cout<<"~~~~~~~~~~ SUDOTHIVOR ~~~~~~~~~~~"<<endl;

    cout<<endl;

    int w=1;

//Apenas para fins gráfico, para que o usuário possa se localizar no tabuleiro.
    cout<<"     1  2  3  4  5  6  7  8  9"<<endl;

       cout<<"  -------------------------------"<<endl;

       cout<<"  -------------------------------"<<endl;

    for(int i=0;i<9;i++){

    cout<<w<<" "<<"||";

    w++;

        for(int j=0;j<9;j++){

            if (sudoku_tabuleiro[i][j]==0){

                cout<<" "<<" "<<" ";

            }

            else {

                cout<<" "<<sudoku_tabuleiro[i][j]<<" ";

            }

        }

//Apenas para fins gráficos, para que o usuário possa se localizar no tabuleiro
    cout<<"||";

    cout<<endl;

    }

    cout<<"  -------------------------------"<<endl;
    cout<<"  -------------------------------"<<endl;

}


/*-------------------------------------------------------
-----------------ASSINATURA------------------------------
Nome do trecho: checkinicial
Objetivo: Conferindo se o tabuleiro todo já foi preenchido.
Autor: Vitor Rebula Nogueira
Descrição: a função "bool checkinicial", tem por objetivo
conferir se o usuário preencheu o tabuleiro por completo. 
Para isso, criamos uma variável cont = 0, que caso a linha
seja diferente de 0, ou seja, foi preenchida, essa variável
receberá +1, passando por todos os membros da matriz, e no
final, caso a variável cont seja igual a 81, significa que	
o tabuleiro foi preenchido por completo, e a função retorna
true, caso contrário, retorna false.
Sucesso na Função: A função deve ser capaz de verificar se
o usuário já preencheu o tabuleiro por completo.
---------------------------------------------------------
---------------------------------------------------------*/
bool checkinicial (){

    int cont=0;

    for(int i=0;i<9;i++){

        for(int j=0;j<9;j++){

            if (sudoku_tabuleiro[i][j]!=0){

                cont++;

            }

        }

    }

    if(cont==81){

        return true;

    }

    else

        return false;

}

/*-------------------------------------------------------
-----------------ASSINATURA------------------------------
Nome do trecho: checkfinal
Objetivo: Conferindo se o usuário venceu o jogo.
Autor: Vitor Rebula Nogueira e Thiago Cury.
Descrição: a função "bool checkfinal", tem por objetivo 
conferir se o usuário preencheu corretamente o jogo. Pri-
meiramente, criamos um contador para as linhas, colunas e
quadrantes, e depois tivemos de criar um laço for compa-
rando com uma variável fixa para olhar somente as linhas,
e depois somente as colunas. Para os quadrantes, tivemos
de criar um laço for para olhar os quadrantes, e depois
criar outro laço for para olhar os elementos dentro dos
quadrantes. Caso o elemento seja diferente, o contador
recebe +1, e no final, caso o contador das linhas e co-
lunas somem 324, e o dos quadrantes, somem 18, o usuário
conseguiu completar o jogo corretamente.
Sucesso na função: A função consegue corrigir o resul-
tado do usuário, e dizer se ele venceu ou não.	
---------------------------------------------------------
---------------------------------------------------------*/

bool checkfinal () {

    int contL=0, contC=0 , contQ1=0, contQ2=0, contQ3=0, contQ4=0, contQ5=0, contQ6=0, contQ7=0, contQ8=0, contQ9=0;

    for(int i=0; i<9; i++){

        for(int k=0; k<8; k++){

            for(int j=k; j<8; j++){

                 //contando as linhas

                if (sudoku_tabuleiro[i][k]!=sudoku_tabuleiro[i][j+1]){

                    contL++;

                }

                //contando as colunas

                if (sudoku_tabuleiro[k][i]!=sudoku_tabuleiro[j+1][i]){

                    contC++;

                }

            }

        }

    }

    //conferindo primeiro quadrante

    for(int i=0; i<3; i++){

        for(int k=0; k<2; k++){

            for(int j=k; j<2; j++){

                if (sudoku_tabuleiro[i][k]!=sudoku_tabuleiro[i][j+1]){

                    contQ1++;

                }

                if (sudoku_tabuleiro[k][i]!=sudoku_tabuleiro[j+1][i]){

                    contQ1++;

                }

            }

        }

    }

    //contando segundo quadrante

    for(int i=0; i<3; i++){

        for(int k=3; k<5; k++){

            for(int j=k; j<5; j++){

                if (sudoku_tabuleiro[i][k]!=sudoku_tabuleiro[i][j+1]){

                    contQ2++;

                }

            }

        }

    }

    for(int j=3; j<6; j++){

        for(int k=0; k<2; k++){

            for(int i=k; i<2; i++){

                if (sudoku_tabuleiro[k][j]!=sudoku_tabuleiro[i+1][j]){

                    contQ2++;

                }

            }

        }

    }

    //contando terceiro quadrante

    for(int i=0; i<3; i++){

        for(int k=6; k<8; k++){

            for(int j=k; j<8; j++){

                if (sudoku_tabuleiro[i][k]!=sudoku_tabuleiro[i][j+1]){

                    contQ3++;

                }

            }

        }

    }

    for(int j=6; j<9; j++){

        for(int k=0; k<2; k++){

           for(int i=k; i<2; i++){

                if (sudoku_tabuleiro[k][j]!=sudoku_tabuleiro[i+1][j]){

                    contQ3++;

                }

            }

        }

    }

    //contando quadrante 4

    for(int i=3; i<6; i++){

        for(int k=0; k<2; k++){

           for(int j=k; j<2; j++){

                if (sudoku_tabuleiro[i][k]!=sudoku_tabuleiro[i][j+1]){

                    contQ4++;

                }

            }

        }

    }

    for(int j=0; j<3; j++){

        for(int k=3; k<5; k++){

            for(int i=k; i<5; i++){

                if (sudoku_tabuleiro[k][j]!=sudoku_tabuleiro[i+1][j]){

                    contQ4++;

                }

            }

        }

    }

    //contando quadrante 5

    for(int i=3; i<6; i++){

        for(int k=3; k<5; k++){

            for(int j=k; j<5; j++){

                if (sudoku_tabuleiro[i][k]!=sudoku_tabuleiro[i][j+1]){

                    contQ5++;

                }

                if (sudoku_tabuleiro[k][i]!=sudoku_tabuleiro[j+1][i]){

                    contQ5++;

                }

            }

        }

    }

    //contando quadrante 6

    for(int i=3; i<6; i++){

        for(int k=6; k<8; k++){

            for(int j=k; j<8; j++){

                if (sudoku_tabuleiro[i][k]!=sudoku_tabuleiro[i][j+1]){

                    contQ6++;

                }

            }

        }

    }

    for(int j=6; j<9; j++){

        for(int k=3; k<5; k++){

            for(int i=k; i<5; i++){

               if (sudoku_tabuleiro[k][j]!=sudoku_tabuleiro[i+1][j]){

                    contQ6++;

                }

            }

        }

    }

    //contando quadrante 7

    for(int i=6; i<9; i++){

        for(int k=0; k<2; k++){

            for(int j=k; j<2; j++){

                if (sudoku_tabuleiro[i][k]!=sudoku_tabuleiro[i][j+1]){

                    contQ7++;

                }

            }

        }

    }

    for(int j=0; j<3; j++){

        for(int k=6; k<8; k++){

            for(int i=k; i<8; i++){

                if (sudoku_tabuleiro[k][j]!=sudoku_tabuleiro[i+1][j]){

                    contQ7++;

                }

            }

        }

    }

    //contando quadrante 8

    for(int i=6; i<9; i++){

        for(int k=3; k<5; k++){

            for(int j=k; j<5; j++){

                if (sudoku_tabuleiro[i][k]!=sudoku_tabuleiro[i][j+1]){

                    contQ8++;

                }

            }

        }

    }

    for(int j=3; j<6; j++){

        for(int k=6; k<8; k++){

            for(int i=k; i<8; i++){

                if (sudoku_tabuleiro[k][j]!=sudoku_tabuleiro[i+1][j]){

                    contQ8++;

                }

            }

        }

    }

    //contando quadrante 9

    for(int i=6; i<9; i++){

        for(int k=6; k<8; k++){

            for(int j=k; j<8; j++){

                if (sudoku_tabuleiro[i][k]!=sudoku_tabuleiro[i][j+1]){

                    contQ9++;

                }

                if (sudoku_tabuleiro[k][i]!=sudoku_tabuleiro[j+1][i]){

                    contQ9++;

                }

            }

        }

    }

    if(contL==324 && contC==324 && contQ1==18 && contQ2==18 && contQ3==18 && contQ4==18 && contQ5==18 && contQ6==18 && contQ7==18 && contQ8==18 && contQ9==18){

        return true;

    }

    else

        return false;

}

/*-------------------------------------------------------
-----------------ASSINATURA------------------------------
Nome do trecho: main
Objetivo: main
Autor: Vitor Rebula Nogueira e Thiago Cury
Descrição: a função "main", se trata da função principal
do programa, na qual é chamada as outras anteriores.
Inicialmente, é chamada a função menu inicial, na qual o 
usuário poderá escolher entre jogar sair, resposta que se-
rá atribuia à variável X.
Após isso, caso o usuário opte por iniciar o jogo, a fun-
ção "Inicializarsudoku" é chamada, para que gere um tabu-
leiro aleatório escolhido dentro da função.
Logo em seguida, é dado um comando cls, apenas para limpar
a tela, então, inicia-se um laço de repetição, que só será
interrompido, quando o usuário passar na função "checkini-
cial", dentro dele, pede o usuário para inserir linha, co-
luna e valor, sendo que valor não pode ser menor que 0 ou
maior que 9, para que respeite as regras do jogo, depois 
temos um laço if, que compara o tabuleiro com o jogo que 
está impresso, para que o usuário não consiga modificar
os valores do tabuleiro, no final a main chama a funcao 
checkfinal, que caso retorne true, imprime a mensagem pa-
rabenizando, e caso retorne false, imprime a mensagem fa-
lando que errou, e retorna ao menu inicial.
Sucesso na função: A função consegue fluir, cha-
mando as outras, recebendo os valores e respeitando os
laços e if's e else's.
---------------------------------------------------------
---------------------------------------------------------*/
int main () {

    int x,linha,coluna,valor, templinha, tempcoluna, tempvalor;

    menuinicial();

    cin>>x;

    system("cls");

    while(x!=1&&x!=2){

        menuinicial();

        cin>>x;

        system("cls");

    }

    cout<<endl;

    while (x!=2){

        inicializarsudoku();

        system("cls");

        while (checkinicial()==false){

            imprimirsudoku();

            cout<<endl;

            cout << "Informe a linha, coluna e valor a inserir, um por vez:"<<endl;

            cin >> templinha >> tempcoluna >> tempvalor;
            if(templinha>=0 && templinha<=9 && tempcoluna>=0 && tempcoluna<=9 && tempvalor>=0 && tempvalor<=9){
                linha = templinha;
                coluna = tempcoluna;
                valor = tempvalor;
            }
            else{
                linha = 0;
                coluna = 0;
                valor = 0;
            }

            while (valor < 0 || valor >9){

                cin>>valor;

            }

            if (sudoku_tabuleiro[linha-1][coluna-1]==0 || sudoku[linha-1][coluna-1]!=sudoku_tabuleiro[linha-1][coluna-1]){

                sudoku_tabuleiro[linha-1][coluna-1] = valor;

            }

            system("cls");

            checkfinal ();

        }

        imprimirsudoku();

        cout<<endl;

        if (checkfinal()==true)

            cout<<"Parabens, conseguiu!"<<endl;

        else

            cout<<"Jogo incorreto! Estuda burro!"<<endl;

        cout<<endl;

        cout<<"Deseja jogar novamente?"<<endl;

        cout<<endl;

        menuinicial();

        cin>>x;

        system("cls");

        while(x!=1&&x!=2){

            menuinicial();

            cin>>x;

            system("cls");

        }

        system("cls");

    }

    cout<<"Jogo finalizado!"<<endl;

    return 0;

}
