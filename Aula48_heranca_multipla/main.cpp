#include <iostream>
#include <locale.h>
#include "classes.h"

using namespace std;

int main()

{
    setlocale(LC_ALL,"PORTUGUESE");
    cout << "\nHerança múltipla" << endl;
    cout << "\nUma classe herdando propriedades e/ou métodos de duas ou mais classes" << endl;

    Base1 *objeto1 = new Base1();
    Base2 *objeto2 = new Base2();
    Base3 *objeto3 = new Base3();

    objeto1->importarBase1();
    objeto2->importarBase2();

    cout << "\n\n";

    objeto3->importarBase1();
    objeto3->importarBase2();
    objeto3->impressaBase3();


    return 0;
}
