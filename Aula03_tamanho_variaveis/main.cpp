#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    cout << "Tamanho das variaveis em bytes = 8 bits!\n";
    int inteiro;
    cout << "int="<< sizeof(inteiro) << endl;
    char caracter;
    cout << "char=" << sizeof(caracter) << endl;
    cout << "string=" << sizeof(string) << endl;
    cout << "double=" << sizeof(double) << endl;
    cout << "float=" << sizeof(float) << endl;
    cout << "boolean=" << sizeof(bool) << endl;

    string String;
    double Double;
    float Float;
    bool Boolean;

    printf("\n\nchar %d bytes \t em %d\n",sizeof(caracter),&caracter);
    printf("int %d bytes \t em %d\n",sizeof(inteiro),&inteiro);
    printf("string %d bytes \t em %d\n",sizeof(String),&String);
    printf("double %d bytes \t em %d\n",sizeof(Double),&Double);
    printf("float %d bytes \t em %d\n",sizeof(Float),&Float);
    printf("bool %d bytes \t em %d\n\n",sizeof(Boolean),&Boolean);

    return 0;
}
