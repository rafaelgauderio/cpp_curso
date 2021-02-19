#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


using namespace std;


int cont = 5;

struct date
{
    int dia;
    int mes;
    int ano;
};

struct disciplina
{
    char nome[50];
    char professor[50];
    float notas[3];
};

//Tipo de aluno vai ser um ficar armazenado em um vetor de 10 posicoes
struct aluno
{
    int matricula;
    char nome[50];
    char endereco[100];
    struct date dataNascimento;
    struct disciplina disciplinas;
} tipoAluno[10];

void menu()
{

    cout << "\nMENU\nEscolha a opção desejada [Informe um número de 1 a 9]\n\n";
    cout << "1. CADASTRAR aluno\n2. ALTERAR aluno\n3. EXCLUIR Aluno\n4. BUSCAR Aluno\n5. LISTAR TODOS os alunos\n6. LISTAR aluno de determinada disciplina\n7. LISTAR alunos APROVADOS\n8. LISTAR alunos REPROVADOS\n9. SAIR\n\n";



}


//Para não já criar os 5 anos e não deixar o código muito grande dentro do funcao main()

void cadastroAutomatizado()
{

}
//tem que usar [^\n] para poder informar nome completo ou usar o gets para capturar string
void cadastrarAluno()
{
    printf("Informe a matrícula do Aluno:\n");
    scanf("%d",&tipoAluno[cont].matricula);
    setbuf(stdin,NULL);
    printf("Informe o nome do Aluno:\n");
    scanf("%[^\n]s",&tipoAluno[cont].nome);
    setbuf(stdin,NULL);
    printf("Informe o endereço do Aluno:\n");
    scanf("%[^\n]s",&tipoAluno[cont].endereco);
    setbuf(stdin,NULL);
    scanf("Informe a data de nascimento do Aluno: (dd/mm/aaaa)\n");
    scanf("%d %d %d",&tipoAluno[cont].dataNascimento.dia, &tipoAluno[cont].dataNascimento.mes,&tipoAluno[cont].dataNascimento.ano);
    setbuf(stdin,NULL);
    printf("Informe o nome da disciplina: \n");
    gets(tipoAluno[cont].disciplinas.nome);
    setbuf(stdin,NULL);
    printf("Informe o nome do professor da disciplina:\n");
    gets(tipoAluno[cont].disciplinas.professor);
    setbuf(stdin,NULL);
    printf("Informe as notas dos Alunos nas 3 provas da disciplina:\n");
    scanf("%f %f %f",&tipoAluno[cont].disciplinas.notas[0],&tipoAluno[cont].disciplinas.notas[1],&tipoAluno[cont].disciplinas.notas[2]);
    cont++;
}

void exlucirAluno()
{
}

void alterAluno()
{
}

void buscarAluno()
{
}

void listarAluno()
{
}

void listarAprovados()
{
}

void listarReprovador()
{

}

void listarDisciplina()
{

}

int main()
{

    setlocale(LC_ALL,"Portuguese");
    int opcao, posicao, posicaoA, cont;
    struct aluno nomeP;
    cadastroAutomatizado();


    cin >> opcao;
    while (opcao !=9)
    {
        menu();

        if(opcao==1)
        {
            if(cont<=10)
            {
                cadastrarAluno();
            }
            else
            {
                cout << "Não é possível cadastrar mais que 10 alunos, aumento o tamanho do vetor de Alunos!\n";
            }

        }
        else if(opcao==2)
        {

        }
        else if (opcao==3)
        {

        }
        else if (opcao==4)
        {

        }
        else if (opcao==5)
        {

        }
        else if (opcao==6)
        {

        }
        else if (opcao==7)
        {

        }
        else if (opcao==8)
        {

        }
        else if (opcao==9)
        {
            break;
        }



    }







    system("pause");
    return 0;

}








