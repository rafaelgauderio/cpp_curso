#include <iostream>
#include <locale.h>

using namespace std;

class Aviao
{
    public:
    int vel=0;
    int velMax=0;
    string tipoAviao;
    void inicializar(int tipo); //apenas prototipagem do método

private:
};

void Aviao::inicializar(int tipo)  //1=Comercial, 2=Jumbo, 3=Planador
{
    if (tipo==1)
    {
        this->vel=15;
        this->velMax=700;
        this->tipoAviao="Avião Comercial";
    }
    else if (tipo==2)

    {
        this->vel=40;
        this->velMax=500;
        this->tipoAviao="Jumbo";
    }
    else if (tipo==3)
    {
        this->vel=32;
        this->velMax=150;
        this->tipoAviao="Planador";
    }
}


int main()
{

    setlocale(LC_ALL,"PORTUGUESE");
    cout << "Objetos são instâncias das classes" << endl;
    cout << "Nas linguagens mais atuais não é necessário declarar o objeto como ponteiro" << "\n\n";

    Aviao *av1 = new Aviao();

    //Aviao av1->inicilizar(1);

    for(int i=1; i<4 ; i++)
    {
        av1->inicializar(i);
        cout << "Velocidade inicial do avião do tipo "<<av1->tipoAviao << ": " << av1->vel << " Km/h" << endl;
        cout << "Velocidade Máxima do avião do tipo " <<av1->tipoAviao << " é "<< av1->velMax << " Km/h" << endl << endl;
    }



    return 0;
}
