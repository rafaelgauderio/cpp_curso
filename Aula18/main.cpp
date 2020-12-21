#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese"); //habilitar a acentuacao
    cout << "Vetor é um conjunto de variáveis do mesmo tipo!" << endl;
    cout << "Declaração básica: tipo, nome e tamanho do vetor \n";

    // cria uma variavel com 10 posições

    int vetor[5];

    vetor[0] = 69;
    vetor[1] = 15;
    vetor[2] = 7;
    vetor[3] = 12;
    vetor[4] = 65;

    cout << vetor[0] << "\n";
    cout << vetor[1] << "\n";
    cout << vetor[2] << "\n";
    cout << vetor[3] << "\n";
    cout << vetor[4] << "\n";
    //Vai imprimir um valor do ponteiro da memória, lixo, vetor tem tamanho 5
    cout << vetor[5] << "\n\n";

    cout << "adicionando 10 unidades a cada item do vetor\n";
    for (int i=0 ; i<5 ; i++)
    {
        cout << "O vator na posicão " << i << " é igual: "<< vetor[i] + 10  << "\n";
    }

    cout << "\nUtilizando a função sizeof\n";

    // divide por 4 porque int tem 4 bytes = 5*4 = 20 bytes
    for (int j=0; j<sizeof(vetor)/4; j++)
    {
        cout << vetor[j] << "\n";
    }

    cout << "\nUtilizando uma função tamanho=3\n";
    int tam=3;
    int vetor2[tam];
    vetor2[0]=5, vetor2[1]=12, vetor2[2]=9;
    for (int w=0; w< tam; w++)
    {
        cout << vetor2[w] << "\n";
    }

    cout << "\nDeclarando o vetor tudo de uma vez\n";
    int tam2=4;
    int vetor3[tam2]= {3,5,9,15};
    for (int k=0; k<tam2; k++)
    {
        cout << vetor3[k] << "\n";
    }


    cout << "\n\nPrograma finalizado!" << endl;

    return 0;
}

