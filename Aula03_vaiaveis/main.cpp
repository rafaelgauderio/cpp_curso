#include <iostream>
#include <locale.h>

using namespace std;

// TIPO NOME;
// TIPO NOME = VALOR;
int main ()
{

    setlocale(LC_ALL, "PORTUGUESE");
    int vida=5;
    char letra='R'; //tamanho de 1 byte
    char palavra[4]= {'C','A','S','A'};
    double decimal=2.35; // mais preciso que float
    float real = 2.499999;
    bool vivo=true; //true or false;
    bool morto=false;
    int idade;
    double salario;
    string nome_completo="Rafael De Luca";
    // Imprimindo no console as variáveis declaradas

    cout << "Valor da variável vida do tipo int = " << vida << "\n";
    cout << "Valor da variável letra do tipo char = " << letra <<"\n";
    cout << "Valor do Vetor de Char que forma uma String = ";
    for(int i=0; i<sizeof(palavra); i++)
    {
        cout << palavra[i];
    }
    cout << "\n";
    cout << "valor da variável decimal do tipo double = " << decimal << endl;
    cout << "Valor da variável real do tipo float = " << real << endl;
    cout << "O valor da variável vivo do tipo booleana = " << vivo << endl;
    cout << "O valor da variável morto do tipo booleana = " << morto << endl;
    cout <<"O valor da variável nome completo do tipo string = " << nome_completo << "\n\n";

    cout << "Informe a sua idade:";
    cin >> idade;
    cout << "Informe seu salário:";
    cin >> salario;
    cout << "\nSeu nome é " << nome_completo << " e sua idade é " << idade << ", e seu salário é R$ " << salario << endl;


    return 0;
}
