#include <iostream>
#include <locale.h>

using namespace std;

int main ()
{
    setlocale(LC_ALL, "PORTUGUESE");

    cout << "O valor que um ponteiro vai armazenar é o endereço de outra variável." << endl;
    cout << "Não armazena um valor comum, armazena um endereço de memória de outra variável." << endl;
    cout << "Não vai apontar para o seu próprio endereço." << endl;
    cout << "Ponteiro tem que ser do mesmo tipo da variável que ele aponta." << endl;
    cout <<"Operador * para criar um ponteiro." << endl;
    cout << "variável possui | endereço | tipo | nome | valor |" << "\n\n";

    int num=45;
    int *pn;
    pn=&num; //Ponteiro recebe o endereço do número

    cout <<"\nnum=" << num <<endl;
    cout <<"&num=" << &num <<endl;
    cout <<"pn=" << pn <<endl;
    cout <<"&pn=" << &pn <<endl;
    cout <<"*pn=" << *pn <<endl;
    cout <<"Como pn é uma variável do tipo ponteiro que aponta para o endereço de num.\n";
    cout <<"*pn=valor da variável num e pn=endereço de memória da variável num.\n\n";

    string veiculo="Carro";
    string *pv=&veiculo; //Ponteiro pv recebe o endereço recebe o endereço va variável veiculo

    cout << veiculo <<endl;
    cout << &veiculo << endl;
    cout << pv <<endl;
    cout << *pv << endl;

    *pv="Moto"; //No enredeço apontado por *pv adicione o valor moto


    cout << veiculo << "\n" << *pv;
    count << "Posso manipular o valor da variável veiculo através do ponteiro pv que aponta para seu endereço de memória\n\n";


    return 0;
}
