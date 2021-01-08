#include <iostream>
#include <locale.h>
#include <stdio.h> // Poder usar a função gets
#include <stdlib.h> // Função de alocação de memória

using namespace std;

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");
    cout << "Como reservas apenas a quantidade necessária de memória RAM "<< endl;
    cout << "Muito importante para programar em sistemas embarcados que tem capacidade limitada de memória." << endl;

    typedef struct {
        char nome[200];
        int idade;
        float salario;
     } Funcionario;
    Funcionario func[1];
    Funcionario func2[10];
    //o cout identifica o espaço como caracter finalizador e não imprime nome sobrenome
    char *vetorNome; //ponteiro sem o tamanho do vetor
    // maloca retorna um void, então tem que fazer um tapecast convertondo void para ponteiro do tipo char
    //Mais um para reservar um espaço na memória para o caracter finalizador
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
