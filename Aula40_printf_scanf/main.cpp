#include <iostream>
#include <stdio.h> // Para usar printf e scanf
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");
    int numero=1712,num1,num2,idade;
    float num3=12.45;
    double num4=23.4285;
    char nome[10];
    char* vetorApelido=(char*)malloc(sizeof(char));
    vetorApelido="Rafael da Silva\n\nNarigudo\n\nPiloto\n\n";




    num1=3; num2=45;
    nome[0]='R';
    nome[1]='A';
    nome[2]='F';
    nome[3]='A';
    nome[4]='E';
    nome[5]='L';
    nome[6]='\0'; //Sen�o tiver esse finalizador vai imprimir lixo de mem�ria
    idade=35;


    // \o � um delimitador no comando printf
    printf("Impress�o de comando\0 teste!\n\n");
    printf("\nValor da vari�vel numero � %d",numero);
    printf("\nO Valores das vari�veis num1 e num2, s�o, respectivamente: %d e %i", num1,num2);
    printf("\nO Valores das vari�veis num3 e num4, s�o, respectivamente: %.2f e %.4lf",num3,num4);
    printf("\nO nome � %s e sua idade � %d\n\n",nome,idade);

    printf("Informe um novo nome e idade\n");
    scanf("%s %i",&nome,&idade);
    printf("O novo nome informado foi %s\nE a nova idade %d\n",nome,idade);
    printf("O apelido informado foi %s",vetorApelido);

    //scanf [e analogo ao cin para pedir os valores pelo console para o usu�rio
    /*
    d,i = inteiro
    x,X = Hexadecimal
    u = inteiro absoluto
    s = string, char*
    f = float
    lf = double
    p = ponteiros
    */

    return 0;
}
