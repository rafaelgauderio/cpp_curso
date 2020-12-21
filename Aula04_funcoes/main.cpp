#include <iostream>

using namespace std;

int funcao_produto(int a, int b);

int funcao_soma(int a, int b) {
    int soma = a +b;
    return soma;
}

int main()
{
   int resultado = funcao_soma(4,7);
   cout << resultado << endl;
   cout << funcao_soma(15,19) << endl;
   int a=90, b=36;
   cout << funcao_soma(a,b) << endl;
   cout << "Informe 2 valores para soma\n";
   int c,d;
   cin >> c;
   cin >> d;
   cout << "resultado da soma = " << funcao_soma(c,d) <<endl;

   cout <<"resultado do produto = " << funcao_produto(c,d) << endl;
   return 0;
}

int funcao_produto(int a, int b) {
    return a * b ;
}
