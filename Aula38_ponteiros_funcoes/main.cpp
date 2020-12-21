#include <iostream>
#include <locale.h>

using namespace std;

void somar(float *var, float valor);
void iniciarVetor(string *vetor,string sobrenome);
void adicionarSegundoSobrenome(string *vetor, string sobrenome);


int main()
{
    setlocale(LC_ALL,"PORTUGUESE");

    cout << "Funcao para alterar o valor de uma vari�vel, n�o apenas no escopo da fun��o." << endl;
    cout << "Alterar o valor da vari�vel no escopo do projeto, pelo funcao ponteiro." << endl;

    float num=0;
    string vetor[5];
    string sobrenome="Souza";


    somar(&num,15);
    somar(&num,80);
    iniciarVetor(vetor,sobrenome); //Sendo vetor n�o precisa indiciar que � ponteiro




    cout << "\nnum=" << num << "\n\n";

    for (int i=0; i <5 ; i++)
    {
        cout << vetor[i] << "\n";
    }


    cout << "\n\n";

    adicionarSegundoSobrenome(vetor," da Silva");

    for (int i=0; i <5 ; i++)
    {
        cout << vetor[i] << "\n";
    }

    return 0;
}

/*funcao para adicionar valores a vari�vel num
*Escopo da fun��o somar � diferente do escopo da funcao main. A fun��o somar vai criar
*em outro endere�o de mem�ria e fazer a soma l�. Para usar o valor que est� na vari�vel num, eu tenho
*que usar um ponteiro com o endere�o dessa vari�vel, o escopo da fun��o somar encherga o
*valor alocado para num na fun��o main
*/

void somar(float *var, float valor)
{
    *var += valor; // var = var + valor;
}


void iniciarVetor (string *vetor, string sobrenome)
{
    vetor[0]="Rafael "+sobrenome;
    vetor[1]="Luciana "+sobrenome;
    vetor[2]="Maxwell "+sobrenome;
    vetor[3]="Messi "+sobrenome;
    vetor[4]="Zagueiro "+sobrenome;

}

void adicionarSegundoSobrenome(string *vetor,string sobrenome)
{
    vetor[0]= vetor[0] + sobrenome;
    vetor[1]= vetor[1]+ sobrenome;
    vetor[2]= vetor[2]+ sobrenome;
    vetor[3]= vetor[3]+ sobrenome;
    vetor[4]= vetor[4]+ sobrenome;
}







