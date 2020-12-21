#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");
    int *p;
    int vetor_de_dados[10];

    cout << "Pega o endere�o de mem�ria do primeiro elemento do array\n";
    cout << "p=&vetor[0] == p=vetor\n";
    cout << "Os endere�os de mem. dos arrays s�o sequ�nciais. int = 4 bytes.\n\n";

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

    cout << "\n" << "Sem atribuiar valores, vai imprimir lixo de mem�ria\n";

    cout <<  vetor_de_dados[0] << endl;
    cout <<  vetor_de_dados[1] << endl;
    cout <<  vetor_de_dados[2] << endl;
    cout << vetor_de_dados[3] << endl;

    cout << "\nAtribuindo valores as posi��es\n";
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
