#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

using namespace std;

class Veiculo
{
public:
    int vel;
    int blindagem;
    int rodas;
    std::string nome;
    std::string descArma;
    int getTipo();
    int getVelMax();
    bool getArma();
    void setTipo(int tp);
    void setVelMax(int vm);
    void setArma(bool ar);
    void imprimir();



private:
    int tipo;
    int velMax;
    bool arma;

};

void Veiculo::setTipo(int tp)
{
    tipo=tp;
    if(tipo==1)
    {
        nome="Moto";
    }
    else if(tipo==2)
    {
        nome="Tanque de Guerra";
    }
    else if (tipo==3)
    {
        nome="Carro de Passeio";
    }
    else
    {
        nome="Tipo não cadastrado";
    }

}
void Veiculo::setVelMax(int vm)
{
    velMax=vm;
}
void Veiculo::setArma(bool arm)
{
    arma=arm;
    if (arm==0)
{
    descArma="Não tem armamento";
}
else if (arm==1)
{
    descArma="Míssel de tanque";
}

}

int Veiculo::getTipo()
{
    return tipo;

}

bool Veiculo::getArma()
{
    return arma ;
}

int Veiculo::getVelMax()
{
    return velMax;

}



void Veiculo::imprimir()
{
    std::cout << "--------------------------------------" <<endl;
    std::cout << "Tipo de Veículo: " << nome << endl;
    std::cout << "Tipo de blindagem: " << blindagem <<endl;
    std::cout << "Quantidade de rodas: " << rodas <<endl;
    std::cout << "Velocidade inicial: " << vel <<endl;
    std::cout << "Velocidade Máxima: " << velMax << endl;
    std::cout << "Possui arma: " << arma << ", tipo de arma: " << descArma << endl;
    std::cout << "--------------------------------------" << "\n";

}

//sub classe moto herda todas as propriedades da classe veiculo
class Moto:public Veiculo
{
public:
    Moto (); // construtor vazio
};

Moto::Moto()
{
    vel=0;
    blindagem=0;
    rodas=2;
    setTipo(1);
    setVelMax(230);
    setArma(false);
}

//sub classe tanque
class Tanque:public Veiculo
{
public:
    Tanque();

};

Tanque::Tanque()
{
    vel=0;
    blindagem=1;
    rodas=4;
    setTipo(2);
    setVelMax(80);
    setArma(true);
}

class Carro:public Veiculo
{
public:
    Carro(); //construtor vazio
};


Carro::Carro()
{
    vel=0;
    blindagem=0;
    rodas=4;
    setTipo(3);
    setVelMax(150);
    setArma(false);

}



#endif // CLASSES_H_INCLUDED
