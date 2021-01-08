#include <iostream>
#include <locale.h>
#include <stdio.h> // Poder usar a fun��o gets
#include <stdlib.h> // Fun��o de aloca��o de mem�ria

using namespace std;

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");
    cout << "Como reservas apenas a quantidade necess�ria de mem�ria RAM "<< endl;
    cout << "Muito importante para programar em sistemas embarcados que tem capacidade limitada de mem�ria." << endl;

    typedef struct {
        char nome[200];
        int idade;
        float salario;
     } Funcionario;
    Funcionario func[1];
    Funcionario func2[10];
    //o cout identifica o espa�o como caracter finalizador e n�o imprime nome sobrenome
    char *vetorNome; //ponteiro sem o tamanho do vetor
    // maloca retorna um void, ent�o tem que fazer um tapecast convertondo void para ponteiro do tipo char
    //Mais um para reservar um espa�o na mem�ria para o caracter finalizador
    vetorNome = (char*)malloc(sizeof(char)+1);
    //cin >> vetorNome;
    gets(vetorNome);
    cout << "\nO nome informado foi "<<vetorNome << endl;
    cout << "\nInformando o tamanho pelos tipos de variaveis!" << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(string) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(vetorNome) << endl;
    cout << sizeof(func) << endl;
    cout << sizeof(func2) << endl;

    return 0;
}
