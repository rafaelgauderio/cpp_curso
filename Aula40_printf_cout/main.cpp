#include <iostream>
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");
    float pi=M_PI;
    float euler=M_E;
    int number=15;
    int number2=22;

    printf("Valor de PI pela biblioteca é %.5f\n\n",pi);
    printf("Valor da constante de Euler é %.5f\n\n",euler);
    printf("Valor do dobro da constante de Euler é %.4f\n",euler*2);
    printf("Valor de Number: %07d\n\n",number);
    printf("Valor de PI com 9 digitos e 5 casas decimais é %09.5f\n\n",pi);

    cout << "Valor de number2: " << setw(10) << number2 << endl; // setar width = largura
    cout << "Valor de number2: " << setw(10) << setfill('X') << number2 << endl;
    cout << "Valor de number2: " << setbase(8) << setw(15) << number2 << endl; // setar width = largura
    cout << "Valor de number em decimal " << dec << number << endl;
    cout << "Valor de number em hexadecimal " << hex << number << endl;
    cout << "Valor de number em octadecimal " << oct << number << endl;
    cout << "Valor de number em octadecimal " << setbase(8) << number << endl;
    cout.precision(20);
    cout << "O valor de Pi com 20 digitos significativos é " << pi << endl;
    cout.precision(-1); // para voltar a precisão padrão.
    cout << "Valor de PI em notação científica: " << std::scientific << pi << "\n\n";



    return 0;
}
