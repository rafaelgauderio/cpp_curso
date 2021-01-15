#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Base1
{
public:
    void importarBase1();

private:
};

void Base1::importarBase1()
{
    std::cout << "Importar classe Base1"  <<std::endl;
}

class Base2
{
public:
    void importarBase2();

private:
};

void Base2::importarBase2()
{
    std::cout << "Importar classe Base2" << std::endl;
}

//criar um terceira clase que vai herdar as duas classes anteriores

class Base3:public Base1, public Base2 {

public:
    void impressaBase3();

private:

};

void Base3::impressaBase3() {
    std::cout << "Método da classe de herança múltipla que herdeu Base1 e Base2." << std::endl;
}

#endif // CLASSES_H_INCLUDED
