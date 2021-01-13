#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

class Aviao
{
public:
    int vel=0;
    int velMax;
    std::string tipoAviao;
    Aviao(int tipo);
    void imprimir();

private:

};

Aviao::Aviao(int tipo)
{
    if(tipo==1)
    {
        vel=15;
        tipoAviao="Jato";
        velMax=800;
    }
    else if (tipo==2)
    {
        vel=18;
        tipoAviao="Aviao Comercial";
        velMax=450;
    }
    else if (tipo==3)
    {
        vel=30;
        tipoAviao = "Planador";
        velMax=192;
    }

}

void Aviao::imprimir()
{
    std::cout << "Tipo de aviao.....: " << tipoAviao << std::endl;
    std::cout << "Velocidade Máxima.: " << velMax << std::endl;
    std::cout << "Velocidade inicial: " << vel <<std::endl;

}

#endif // AVIAO_H_INCLUDED
