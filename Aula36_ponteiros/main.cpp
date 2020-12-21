#include <iostream>
#include <locale.h>

using namespace std;

int main ()
{
    setlocale(LC_ALL, "PORTUGUESE");

    cout << "O valor que um ponteiro vai armazenar � o endere�o de outra vari�vel." << endl;
    cout << "N�o armazena um valor comum, armazena um endere�o de mem�ria de outra vari�vel." << endl;
    cout << "N�o vai apontar para o seu pr�prio endere�o." << endl;
    cout << "Ponteiro tem que ser do mesmo tipo da vari�vel que ele aponta." << endl;
    cout <<"Operador * para criar um ponteiro." << endl;
    cout << "vari�vel possui | endere�o | tipo | nome | valor |" << "\n\n";

    int num=45;
    int *pn;
    pn=&num; //Ponteiro recebe o endere�o do n�mero

    cout <<"\nnum=" << num <<endl;
    cout <<"&num=" << &num <<endl;
    cout <<"pn=" << pn <<endl;
    cout <<"&pn=" << &pn <<endl;
    cout <<"*pn=" << *pn <<endl;
    cout <<"Como pn � uma vari�vel do tipo ponteiro que aponta para o endere�o de num.\n";
    cout <<"*pn=valor da vari�vel num e pn=endere�o de mem�ria da vari�vel num.\n\n";

    string veiculo="Carro";
    string *pv=&veiculo; //Ponteiro pv recebe o endere�o recebe o endere�o va vari�vel veiculo

    cout << veiculo <<endl;
    cout << &veiculo << endl;
    cout << pv <<endl;
    cout << *pv << endl;

    *pv="Moto"; //No enrede�o apontado por *pv adicione o valor moto


    cout << veiculo << "\n" << *pv;
    count << "Posso manipular o valor da vari�vel veiculo atrav�s do ponteiro pv que aponta para seu endere�o de mem�ria\n\n";


    return 0;
}
