#include <iostream>
#include <locale.h>

using namespace std;

void somar(float *var, float valor);
void iniciarVetor(string *vetor,string sobrenome);
void adicionarSegundoSobrenome(string *vetor, string sobrenome);


int main()
{
    setlocale(LC_ALL,"PORTUGUESE");

    cout << "Funcao para alterar o valor de uma variável, não apenas no escopo da função." << endl;
    cout << "Alterar o valor da variável no escopo do projeto, pelo funcao ponteiro." << endl;

    float num=0;
    string vetor[5];
    string sobrenome="Souza";


    somar(&num,15);
    somar(&num,80);
    iniciarVetor(vetor,sobrenome); //Sendo vetor não precisa indiciar que é ponteiro




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

/*funcao para adicionar valores a variável num
*Escopo da função somar é diferente do escopo da funcao main. A função somar vai criar
*em outro endereço de memória e fazer a soma lá. Para usar o valor que está na variável num, eu tenho
*que usar um ponteiro com o endereço dessa variável, o escopo da função somar encherga o
*valor alocado para num na função main
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







