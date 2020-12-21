# include <iostream>
# include <stdio.h>
# include <stdlib.h>

// indicando as bibliotecas onde vamos trabalhar, standard padrão
using namespace std;



int main()
{

    int a=15;
    int b=20;
    int c;
    c = a + b;
    printf("%d %d \n\n",a,b);
    printf("O valor da soma entre a e b: %d \n\n",c);
    printf("O valor do produto entre a e b: %d \n\n", a*b);
    system("PAUSE");
    printf("\n");
    for (int cont=0 ; a >= cont ; cont++ )
    {
        printf("%d | ", cont);
    }
    printf("\n");
    system("PAUSE");
    //cout é um comando exclusivo do c++, mais poderoso que o printf
    // endl = /n = quebra de linha
    cout << "\nPrograma finalizado\n\n\n" << endl ;

    system("pause");



    return 0;
}
