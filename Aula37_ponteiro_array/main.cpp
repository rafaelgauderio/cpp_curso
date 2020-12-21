#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");
    int *p;
    int vetor_de_dados[10];

    cout << "Pega o endereço de memória do primeiro elemento do array\n";
    cout << "p=&vetor[0] == p=vetor\n";
    cout << "Os endereços de mem. dos arrays são sequênciais. int = 4 bytes.\n\n";

    p=&vetor_de_dados[0];
    cout << p << endl;
    p=&vetor_de_dados[1];
    cout << p << endl;
    *(p++); // incrementand e imprimindo a terceira posicao
    cout << p << endl;
    *(p+=1);
    cout << p << endl;
    *(p=p+1);
    cout << p << endl;

    cout << "\n" << "Sem atribuiar valores, vai imprimir lixo de memória\n";

    cout <<  vetor_de_dados[0] << endl;
    cout <<  vetor_de_dados[1] << endl;
    cout <<  vetor_de_dados[2] << endl;
    cout << vetor_de_dados[3] << endl;

    cout << "\nAtribuindo valores as posições\n";
    *p=15;  // vetor_de_dados[0]=15
    cout << "\n" << vetor_de_dados[4] << endl;
    *(p++);
    *p=20; // vetor_de_dados[1]=20
    cout << "\n" << vetor_de_dados[5] << endl;
    *(p+=1);
    *p=45; // vetor_de_dados[2]=45
    cout << "\n" << vetor_de_dados[6] << endl;
    *(p=p+1);
    *p=89; // vetor_de_dados[3]=89
    cout << "\n" << vetor_de_dados[7] << endl;
    return 0;
}
