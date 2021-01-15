#include <iostream>
#include <fstream>
#include <locale.h>

using namespace std;

int main()


{
    setlocale(LC_ALL,"PORTUGUESE");
    cout << "ofstream -> define o arquivo como sa�da do sistema e entra no arquivo. " << endl;
    cout << "ifstream -> define o arquivo como entra para o programa." << endl;
    cout << "fstream -> pode ser definido como entrada ou como sa�da." << endl;


    ofstream arquivo;
    /* Associar a vari�vel arquivo com algum arquivo externo */

    arquivo.open("cursoc++_aula_ofstream.txt",ios::app);
    /*ios:app = vai fazer um apende no final do arquivo e n�o sobrescrever*/

    arquivo << "Texto de arquivo teste1\n";
    arquivo << "Texto de arquivo segunda linha\n";
    arquivo << "Texto de arquivo teste3\n";

    arquivo << "texto novo fazendo um apende";

    /*fechar o arquivo ap�s usar */
    arquivo.close();


    ofstream arquivo_sobrescrever;
    arquivo_sobrescrever.open("curso_c++_ofstream_sobrescrever.txt");
    arquivo_sobrescrever << "texto inicial\n";
    arquivo_sobrescrever << "�ltima linha";
    arquivo_sobrescrever.close();

    return 0;
}

