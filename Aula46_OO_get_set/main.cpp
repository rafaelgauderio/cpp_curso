#include <iostream>
#include "classes.h"
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");
    cout << "Métodos privados só podem ser manipulas pela própria classe." << endl;
    cout << "Para manipular objetos privados em outras classes, apenas através de métodos get and set." << endl;
    cout << "Médodo construtor é chamado automaticamente, quando instanciado um objeto da classe.\n\n";

    Veiculo *v1 = new Veiculo(1);
    Veiculo *v2 = new Veiculo(2);
    Veiculo *v3 = new Veiculo(3);

    v1->setLigado(0);
    v2->setLigado(0);
    v3->setLigado(1);

    cout << "Velocidade máxima do veiculo v1: " << v1->getVelMax() <<endl;
    cout << "Velocidade máxima do veiculo v2: " << v2->getVelMax() <<endl;
    cout << "Velocidade máxima do veiculo v3: " << v3->getVelMax() <<endl;

    if(v1->getLigado())
    {
        cout << " Veiculo 1 está ligado" << endl;
    }
    else
    {
        cout << " Veiculo 1 está desligado" << endl;
    }

    if(v2->getLigado())
    {
        cout << " Veiculo 2 está ligado" << endl;
    }
    else
    {
        cout << " Veiculo 2 está desligado" << endl;
    }

    if(v3->getLigado())
    {
        cout << " Veiculo 3 está ligado" << endl;
    }
    else
    {
        cout << " Veiculo 3 está desligado" << "\n\n";
    }

    // Ligando todos os veiculos todos os carros
    for(int i=1; i<4; i++) {

        Veiculo *vei = new Veiculo(i);
        vei->setLigado(1);
        if (vei->getLigado()){
            cout << "O veiculo #v"  << i << " que é um " << vei->getDescricao() <<" está LIGADO\n";
        }
        else {
            cout << "O veiculo #v"  << i << " que é um " <<  vei->getDescricao() <<" está DESLIGADO\n";
        }
    }


    return 0;
}
