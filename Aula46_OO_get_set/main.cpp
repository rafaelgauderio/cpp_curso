#include <iostream>
#include "classes.h"
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");
    cout << "M�todos privados s� podem ser manipulas pela pr�pria classe." << endl;
    cout << "Para manipular objetos privados em outras classes, apenas atrav�s de m�todos get and set." << endl;
    cout << "M�dodo construtor � chamado automaticamente, quando instanciado um objeto da classe.\n\n";

    Veiculo *v1 = new Veiculo(1);
    Veiculo *v2 = new Veiculo(2);
    Veiculo *v3 = new Veiculo(3);

    v1->setLigado(0);
    v2->setLigado(0);
    v3->setLigado(1);

    cout << "Velocidade m�xima do veiculo v1: " << v1->getVelMax() <<endl;
    cout << "Velocidade m�xima do veiculo v2: " << v2->getVelMax() <<endl;
    cout << "Velocidade m�xima do veiculo v3: " << v3->getVelMax() <<endl;

    if(v1->getLigado())
    {
        cout << " Veiculo 1 est� ligado" << endl;
    }
    else
    {
        cout << " Veiculo 1 est� desligado" << endl;
    }

    if(v2->getLigado())
    {
        cout << " Veiculo 2 est� ligado" << endl;
    }
    else
    {
        cout << " Veiculo 2 est� desligado" << endl;
    }

    if(v3->getLigado())
    {
        cout << " Veiculo 3 est� ligado" << endl;
    }
    else
    {
        cout << " Veiculo 3 est� desligado" << "\n\n";
    }

    // Ligando todos os veiculos todos os carros
    for(int i=1; i<4; i++) {

        Veiculo *vei = new Veiculo(i);
        vei->setLigado(1);
        if (vei->getLigado()){
            cout << "O veiculo #v"  << i << " que � um " << vei->getDescricao() <<" est� LIGADO\n";
        }
        else {
            cout << "O veiculo #v"  << i << " que � um " <<  vei->getDescricao() <<" est� DESLIGADO\n";
        }
    }


    return 0;
}
