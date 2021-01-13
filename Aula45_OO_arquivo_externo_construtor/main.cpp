#include <iostream>
#include "Aviao.h"
#include <locale.h>
using namespace std;


int main()
{
    setlocale(LC_ALL,"PORTUGUESE");

    cout << "Instanciando manualmente\n\n";
    Aviao *avi = new Aviao(1);
    avi->imprimir();
    cout << endl;

    int i=1;
    do
    {
        cout << "---------------------------------------------------------" <<endl;
        Aviao *avi = new Aviao(i);
        avi->imprimir();
        cout << "---------------------------------------------------------" <<endl;
        i++;
    }
    while (i<=3);

    return 0;
}
