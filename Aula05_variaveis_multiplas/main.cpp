#include <iostream>
#include <locale.h>
#include <locale.h>

#define pi 3.1415
#define mensagem cout << "Bom dia Rafael de Luca!!!!\n\n";
#define mensagem_final cout <<"Programa Finalizado!!\n\n";

using namespace std;

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");
    int idade=32;
    double peso=85.3, altura=1.85;

    cout << "\nA idade informada foi " << idade << " anos, o peso = " << peso << " Kg e " << altura << " metros de altura!\n\n";

    cout << "O valor de pi é " << pi << endl;

    mensagem;
    mensagem_final;

    return 0;
}
