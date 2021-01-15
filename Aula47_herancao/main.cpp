#include <iostream>
#include "classes.h"
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");
    cout << "\nHerança = uma classe herda características de outra classe. "<< endl;
    cout << "\Classe filho herda as propriedades da classe pai. "<< endl;
    cout <<"\Cliente pode ser a classe pai de PF e PJ. " << endl;

    Moto *veiculo = new Moto();
    Tanque *veiculo2 = new Tanque();
    Carro *veiculo3 = new Carro();

    cout << "\nNúmero de rodas de uma moto: " << veiculo->rodas <<endl;
    cout << "Veículo possui armamento: " << veiculo->getArma() << endl;
    cout << "Tipo do veículo: " << veiculo->getTipo() << endl <<endl;

    //Criando um método para imprimir todas as propriedades
    veiculo->imprimir();
    veiculo2->imprimir();
    veiculo3->imprimir();


    return 0;

}
