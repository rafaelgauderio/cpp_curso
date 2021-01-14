#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo
{
public:
    int vel;
    int tipo;
    Veiculo(int tipo); //construtor

    int getVelMax();
    bool getLigado();
    void setLigado(int ligado);
    std::string getDescricao();

private:
    std::string descricao;
    int velMax;
    bool ligado;
    void setVelMax(int velMax);
};

int Veiculo::getVelMax() {
return velMax;
}

void Veiculo::setVelMax(int velMax) {
    velMax=this->velMax;
}

bool Veiculo::getLigado() {
return ligado;
}

void Veiculo::setLigado(int l) {
    if (l==1) {
        ligado=true;
    }
    else if (l==0) {
        ligado=false;
    }
}

std::string Veiculo::getDescricao( ) {
    return descricao;
}

Veiculo::Veiculo(int tp)
{
    tipo=tp;
    if(tipo==1)
    {
        descricao="Carro";
        velMax=200;
        ligado=false; //Veiculo tem que estar desligado no inicio
    }
    else if (tipo==2)
    {
        descricao="Navio";
        velMax=60;
        ligado=false;

    }
    else if (tipo==3)
    {
        descricao="Avião";
        velMax=700;
        setLigado(0);
    }

}



#endif // CLASSES_H_INCLUDED
