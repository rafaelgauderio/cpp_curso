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
    // Imprimindo no console as vari�veis declaradas

    cout << "Valor da vari�vel vida do tipo int = " << vida << "\n";
    cout << "Valor da vari�vel letra do tipo char = " << letra <<"\n";
    cout << "Valor do Vetor de Char que forma uma String = ";
    for(int i=0; i<sizeof(palavra); i++)
    {
        cout << palavra[i];
    }
    cout << "\n";
    cout << "valor da vari�vel decimal do tipo double = " << decimal << endl;
    cout << "Valor da vari�vel real do tipo float = " << real << endl;
    cout << "O valor da vari�vel vivo do tipo booleana = " << vivo << endl;
    cout << "O valor da vari�vel morto do tipo booleana = " << morto << endl;
    cout <<"O valor da vari�vel nome completo do tipo string = " << nome_completo << "\n\n";

    cout << "Informe a sua idade:";
    cin >> idade;
    cout << "Informe seu sal�rio:";
    cin >> salario;
    cout << "\nSeu nome � " << nome_completo << " e sua idade � " << idade << ", e seu sal�rio � R$ " << salario << endl;


    return 0;
}
