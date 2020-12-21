#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");
    int tamanho=5;
    string vetor[tamanho];
    vetor[0]="Rafael";
    vetor[1]="Clarice";
    vetor[2]="Juliana";
    vetor[3]="João da Silva";
    vetor[4]="Cláudia";

    for (int i=0 ; i<sizeof(vetor)/4; i++)
    {
        cout << vetor[i] << "\n";
    }

    string *ponteiro;
    string vetorString [5];

    ponteiro=&vetorString[0];
    *ponteiro="Rafael";
    ponteiro=&vetorString[1];
    *ponteiro="Carlos";
    ponteiro=&vetorString[2];
    *ponteiro="Luciano";
    ponteiro=&vetorString[3];
    *ponteiro="Claudimiro";
    ponteiro=&vetorString[4];
    *ponteiro="Tereza";

    cout << "\n\n";
    cout <<"Sendo um ponteiro. Na função sizeof não precisa dividir pelo tamanho da String.\n";
    for (int j=0 ; j<=sizeof(vetorString[j]); j++)
    {
        cout << vetorString[j] << "\n";
    }

    return 0;
}
