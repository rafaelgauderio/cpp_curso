#include <iostream>
#include "classes.h"
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");
    cout << "\nHeran�a = uma classe herda caracter�sticas de outra classe. "<< endl;
    cout << "\Classe filho herda as propriedades da classe pai. "<< endl;
    cout <<"\Cliente pode ser a classe pai de PF e PJ. " << endl;

    Moto *veiculo = new Moto();
    Tanque *veiculo2 = new Tanque();
    Carro *veiculo3 = new Carro();

    cout << "\nN�mero de rodas de uma moto: " << veiculo->rodas <<endl;
    cout << "Ve�culo possui armamento: " << veiculo->getArma() << endl;
    cout << "Tipo do ve�culo: " << veiculo->getTipo() << endl <<endl;

    //Criando um m�todo para imprimir todas as propriedades
    veiculo->imprimir();
    veiculo2->imprimir();
    veiculo3->imprimir();


    return 0;

}
