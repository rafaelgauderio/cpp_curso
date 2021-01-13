#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");

    char opcao = 0;
    scanf("%c",&opcao);

    int codigo=0;

    switch (opcao)
    {

    case 'A':
    case 'a':
        codigo = 65;
        break;
    case 'B':
        codigo = 66;
        break;
    case 'C':
        codigo = 67;
        break;
    case 'D':
        codigo = 68;
    case 'E':
        codigo = 69;
        break;
    case 'F':
        codigo = 70;
        break;
    case 'G':
        codigo = 71;
        break;
    default:
        codigo= -1;
    }
    cout << ("O código ASCII da letra digitada é: ") << codigo << endl <<endl;


    cout << "Informe um caracter entre A até G, novamente" << endl;

    char opcao2=0;
    scanf("%c",&opcao2);
    int codigo2=0;

    codigo2 = (opcao2=='A') ? 65 :
              (opcao2=='B' || opcao2=='b') ? 66 :
              (opcao2=='C') ? 67 :
              (opcao2=='D') ? 68 :
              (opcao2=='E') ? 69 :
              (opcao2=='F') ? 70 :
              (opcao2=='G') ? 71 : -1;

    cout << ("O código ASCII da letra digitada é: ") << codigo2 << endl <<endl;


    //Mesma situacao com operador ternário
    // ? representa o if e : representa o else

    return 0;
}


