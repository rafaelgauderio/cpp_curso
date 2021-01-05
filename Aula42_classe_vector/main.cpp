#include <iostream>
#include <stdio.h>
#include <vector>
#include <locale.h>

using namespace std;

int main ()
{

    setlocale(LC_ALL,"PORTUGUESE");

    cout << "\nClasse vector é usada como alternativa a usar array" << endl;
    cout << "declaração = vector<tipo> nome(tamanho)\n" << endl;

    vector<int> numero1;
    vector<int> numero2;
    vector<string> palavra(3);
    int tamanho1,tamanho2,i;

    //adicionando elementos ao final do vector
    numero1.push_back(5);
    numero1.push_back(7);
    numero1.push_back(18);
    numero1.push_back(35);
    numero1.push_back(89) ;
    numero1.push_back(96);
    numero1[2]=29;
    numero1.insert(numero1.begin(),888);
    numero1.insert(numero1.begin()+2,999);
    numero1.insert(numero1.end(),66);
    numero1.erase(numero1.end()-2);
    tamanho1=numero1.size();


    numero2.push_back(1);
    numero2.push_back(2);
    numero2.push_back(3);
    numero2.push_back(4);
    numero2.push_back(5);
    numero2.insert(numero2.end()-1,90);
    tamanho2=numero2.size();


    palavra.push_back("Rafael");
    palavra.push_back("Claudia");
    palavra.push_back("Juliana");

    cout << "Tamanho do vector numero1: " << tamanho1 << "\n\n";
    cout << "Tamanho do vector numero2: " << tamanho2 << "\n\n";
    cout << "Primeiro valor de numero1: " << numero1.front() <<endl;
    cout << "Último valor de numero1: " << numero1.back() << endl;
    cout << "Valor do meio de numero1: " << numero1.at(numero1.size()/2) << endl;
    cout << "Valor da quarta posição de numero1: " << numero1.at(3);

    cout << "\nvector numero1: ";
    for (i=0; i<numero1.size() ; i++ )
    {
        cout << numero1[i] << " ";
    }
    cout << "\nvector numero2: ";
    for (i=0; i<numero2.size() ; i++ )
    {
        cout << numero2[i] << " ";
    }

    //trocando os valores de numero1 por numero2
    numero1.swap(numero2);
    cout << "\nTrocando os valores dos vector pelo método swap: ";

    cout << "\nvector numero1: ";
    for (i=0; i<numero1.size() ; i++ )
    {
        cout << numero1[i] << " ";
    }
    cout << "\nvector numero2: ";
    for (i=0; i<numero2.size() ; i++ )
    {
        cout << numero2[i] << " ";
    }

    for(i=0; i<palavra.size() ; i++)
    {
        cout << palavra[i] << "\n";
    }

    //ir esvazinado um vetor enquanto o ultomo elemento não for vazio
    while (!palavra.empty())
    {
        palavra.pop_back();
    }

    cout << "\nTamanho do vector palavra depois de esvaziar com pop_back: " << palavra.size() << endl;

    numero1.clear();
    cout << "\nTamanho do vector  numero1 depois de esvaziar com clear: " << numero1.size() << endl;


    return 0;

}
