#include <iostream>
#include <iomanip>
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
    tipoAluno[0].matricula = 90783737;
    strcpy(tipoAluno[0].nome, "Rafael De Luca");
    strcpy(tipoAluno[0].endereco,"Rua Brasil, 35, Centro");
    tipoAluno[0].dataNascimento.dia = 20;
    tipoAluno[0].dataNascimento.mes = 12;
    tipoAluno[0].dataNascimento.ano = 1995;
    strcpy(tipoAluno[0].disciplinas.nome,"Cálculo numério");
    strcpy(tipoAluno[0].disciplinas.professor,"Claus Xavier");
    tipoAluno[0].disciplinas.nome[0]= 9.5;
    tipoAluno[0].disciplinas.nome[1]= 7.5;
    tipoAluno[0].disciplinas.nome[2]= 9.1;

    tipoAluno[1].matricula = 80343737;
    strcpy(tipoAluno[1].nome, "Julina Pereira Creta");
    strcpy(tipoAluno[1].endereco,"Rua Luciana, 56, Moinhos de vento");
    tipoAluno[1].dataNascimento.dia = 17;
    tipoAluno[1].dataNascimento.mes = 07;
    tipoAluno[1].dataNascimento.ano = 1983;
    strcpy(tipoAluno[1].disciplinas.nome,"Cálculo numério");
    strcpy(tipoAluno[1].disciplinas.professor,"Claus Xavier");
    tipoAluno[1].disciplinas.nome[0]= 8.5;
    tipoAluno[1].disciplinas.nome[1]= 6.5;
    tipoAluno[1].disciplinas.nome[2]= 6.1;

    tipoAluno[2].matricula = 45679865;
    strcpy(tipoAluno[2].nome, "Cristino de Almeida");
    strcpy(tipoAluno[2].endereco,"Av. Renner, 89, Centro");
    tipoAluno[2].dataNascimento.dia = 15;
    tipoAluno[2].dataNascimento.mes = 01;
    tipoAluno[2].dataNascimento.ano = 1987;
    strcpy(tipoAluno[2].disciplinas.nome,"Circuitos elétricos");
    strcpy(tipoAluno[2].disciplinas.professor,"Jorge Silveira");
    tipoAluno[2].disciplinas.nome[0]= 3.5;
    tipoAluno[2].disciplinas.nome[1]= 4.5;
    tipoAluno[2].disciplinas.nome[2]= 1.5;

    tipoAluno[3].matricula = 34568907;
    strcpy(tipoAluno[3].nome, "Afonso Souza");
    strcpy(tipoAluno[3].endereco,"Rua Luzitana, 87, Apto: 305, Nova Lima");
    tipoAluno[3].dataNascimento.dia = 04;
    tipoAluno[3].dataNascimento.mes = 11;
    tipoAluno[3].dataNascimento.ano = 1991;
    strcpy(tipoAluno[3].disciplinas.nome,"Cálculo numério");
    strcpy(tipoAluno[3].disciplinas.professor,"Claus Xavier");
    tipoAluno[3].disciplinas.nome[0]= 4.5;
    tipoAluno[3].disciplinas.nome[1]= 7.5;
    tipoAluno[3].disciplinas.nome[2]= 8.9;

      tipoAluno[4].matricula = 34780973;
    strcpy(tipoAluno[4].nome, "Claudia Amanda Leite");
    strcpy(tipoAluno[4].endereco,"Rua Brasil, 67, Centro");
    tipoAluno[4].dataNascimento.dia = 04;
    tipoAluno[4].dataNascimento.mes = 10;
    tipoAluno[4].dataNascimento.ano = 1985;
    strcpy(tipoAluno[4].disciplinas.nome,"Filosofia");
    strcpy(tipoAluno[4].disciplinas.professor,"Luciana Novato");
    tipoAluno[4].disciplinas.nome[0]= 8.5;
    tipoAluno[4].disciplinas.nome[1]= 6.3;
    tipoAluno[4].disciplinas.nome[2]= 10.0;


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

void excluirAluno(int posicao)
{
    int i;
    if (cont<=1)
    {
        cont--;
    }
    else
    {
        for(i=posicao ; i<cont; i++)
        {
            tipoAluno[i]=tipoAluno[i+1];
        }
    }

}

void alterarAluno(int posicaoA)
{
    cout << fixed << setprecision(2);
    int i;
    for (i=posicaoA; i<=posicaoA ; i++)
    {
        cout << "DADOS ATUAIS\n";
        cout << "Matrícula: " << tipoAluno[i].matricula << endl;
        cout << "Nome: " << tipoAluno[i].nome << endl;
        cout << "Endereço: " << tipoAluno[i].endereco << endl;
        cout << "Data de Nascimento: " << tipoAluno[i].dataNascimento.dia <<"/" <<tipoAluno[i].dataNascimento.mes <<"/"<<tipoAluno[i].dataNascimento.ano << endl;
        cout << "Disciplina: " << tipoAluno[i].disciplinas.nome << "\nProfessor da Disciplina: " << tipoAluno[i].disciplinas.professor
             << "\nNotas da Disciplina: " << tipoAluno[i].disciplinas.notas[0] <<" " << tipoAluno[i].disciplinas.notas[1]  << tipoAluno[i].disciplinas.notas[2] << "\n\n";

        printf("Informe a matrícula do Aluno:\n");
        scanf("%d",&tipoAluno[posicaoA].matricula);
        setbuf(stdin,NULL);
        printf("Informe o nome do Aluno:\n");
        scanf("%[^\n]s",&tipoAluno[posicaoA].nome);
        setbuf(stdin,NULL);
        printf("Informe o endereço do Aluno:\n");
        scanf("%[^\n]s",&tipoAluno[posicaoA].endereco);
        setbuf(stdin,NULL);
        scanf("Informe a data de nascimento do Aluno: (dd/mm/aaaa)\n");
        scanf("%d %d %d",&tipoAluno[posicaoA].dataNascimento.dia, &tipoAluno[posicaoA].dataNascimento.mes,&tipoAluno[posicaoA].dataNascimento.ano);
        setbuf(stdin,NULL);
        printf("Informe o nome da disciplina: \n");
        gets(tipoAluno[posicaoA].disciplinas.nome);
        setbuf(stdin,NULL);
        printf("Informe o nome do professor da disciplina:\n");
        gets(tipoAluno[posicaoA].disciplinas.professor);
        setbuf(stdin,NULL);
        printf("Informe as notas dos Alunos nas 3 provas da disciplina:\n");
        scanf("%f %f %f",&tipoAluno[posicaoA].disciplinas.notas[0],&tipoAluno[posicaoA].disciplinas.notas[1],&tipoAluno[posicaoA].disciplinas.notas[2]);

    }


}

void buscarAluno()
{

    char var[10];
    int retorno, tamanho, i, valor;
    //limpar o buffer para não ter lixo no buffer comparando as strings
    fflush(stdin);
    cout << "Informe um nome a ser procurado: ";
    gets(var);
    for (i=0; i<=cont; i++)
    {
        tamanho = strlen(var);
        //strncmp(string_destino,string_origem, tamanho) = comparação, caractere a caractere, dos 2 parâmetros informados
        retorno = strncmp(tipoAluno[i].nome,var,tamanho);
        if (retorno==0)
        {
            valor=1;
            break;
        }
        else
        {
            valor=0;
        }

    }
    if (valor==1)
    {
        cout << "Matrícula: " << tipoAluno[i].matricula << endl;
        cout << "Nome: " << tipoAluno[i].nome << endl;
        cout << "Endereço: " << tipoAluno[i].endereco << endl;
        cout << "Data de Nascimento: " << tipoAluno[i].dataNascimento.dia <<"/" <<tipoAluno[i].dataNascimento.mes <<"/"<<tipoAluno[i].dataNascimento.ano << endl;
        cout << "Disciplina: " << tipoAluno[i].disciplinas.nome << "\nProfessor da Disciplina: " << tipoAluno[i].disciplinas.professor
             << "\nNotas da Disciplina: " << tipoAluno[i].disciplinas.notas[0] <<" " << tipoAluno[i].disciplinas.notas[1]  << tipoAluno[i].disciplinas.notas[2] << "\n\n";


    }
    else if (valor==0)
    {

        cout << "Aluno não encontrado";
    }


}

void listarAluno()
{
    int (i);
    for (i=0; i<cont ; i++)
    {
        printf("Matrícula: %d\n",tipoAluno[i].matricula);
        printf("Nome: %s\n",tipoAluno[i].nome);
        printf("Endereço: %s\n",tipoAluno[i].endereco);
        printf("Data de nascimento: %d/%d/%d\n",tipoAluno[i].dataNascimento.dia,tipoAluno[i].dataNascimento.mes,tipoAluno[i].dataNascimento.ano);
        printf("Disciplina: %s\nProfessor da disciplina: %s\nNotas da disciplina: %.2f | %.2f | %.2f\n",tipoAluno[i].disciplinas.notas[0],tipoAluno[i].disciplinas.notas[1],tipoAluno[i].disciplinas.notas[2]);
        printf("\n\n");
    }


}

void listarAprovados()
{
    int i, valor;
    float media;

    valor=0;
    media=0;

    for (i=0 ;  i <cont ; i++)
    {
        media = (tipoAluno[i].disciplinas.notas[0]+tipoAluno[i].disciplinas.notas[1]+tipoAluno[i].disciplinas.notas[2])/3;
        if (media>=7.0)
        {
            printf("Matrícula: %d\n",tipoAluno[i].matricula);
            printf("Nome: %s\n",tipoAluno[i].nome);
            printf("Endereço: %s\n",tipoAluno[i].endereco);
            printf("Data de nascimento: %d/%d/%d\n",tipoAluno[i].dataNascimento.dia,tipoAluno[i].dataNascimento.mes,tipoAluno[i].dataNascimento.ano);
            printf("Disciplina: %s\nProfessor da disciplina: %s\nNotas da disciplina: %.2f | %.2f | %.2f\n",tipoAluno[i].disciplinas.notas[0],tipoAluno[i].disciplinas.notas[1],tipoAluno[i].disciplinas.notas[2]);
            printf("\n\n");
            valor=1;
        }
        else
        {
            valor=0;
        }
    }
    if (valor==0)
    {
        printf("Nenhum aluno APROVADO encontrado: ");
    }

}

void listarReprovados()
{
    int i, valor;
    float media;

    valor=0;
    media=0;

    for (i=0 ;  i <cont ; i++)
    {
        media = (tipoAluno[i].disciplinas.notas[0]+tipoAluno[i].disciplinas.notas[1]+tipoAluno[i].disciplinas.notas[2])/3;
        if (media<4.0)
        {
            printf("Matrícula: %d\n",tipoAluno[i].matricula);
            printf("Nome: %s\n",tipoAluno[i].nome);
            printf("Endereço: %s\n",tipoAluno[i].endereco);
            printf("Data de nascimento: %d/%d/%d\n",tipoAluno[i].dataNascimento.dia,tipoAluno[i].dataNascimento.mes,tipoAluno[i].dataNascimento.ano);
            printf("Disciplina: %s\nProfessor da disciplina: %s\nNotas da disciplina: %.2f | %.2f | %.2f\n",tipoAluno[i].disciplinas.notas[0],tipoAluno[i].disciplinas.notas[1],tipoAluno[i].disciplinas.notas[2]);
            printf("\n\n");
            valor=1;
        }
        else
        {
            valor=0;
        }
    }
    if (valor==0)
    {
        printf("Nenhum aluno REPROVADO encontrado: ");
    }


}

void listarDisciplina()
{
    char var[10];
    int retorno, tamanho, i, valor=0;
    float media;
    fflush(stdin);

    cout << "Informe um disciplina a ser procurada: ";
    gets(var);

    for (i=0; i<cont ; i++)
    {

        retorno = strncmp(tipoAluno[i].disciplinas.nome,var,tamanho);
        if (retorno==0)
        {
            media = (tipoAluno[i].disciplinas.notas[0]+tipoAluno[i].disciplinas.notas[1]+tipoAluno[i].disciplinas.notas[2])/3;
            printf("Matrícula: %d\n",tipoAluno[i].matricula);
            printf("Nome: %s\n",tipoAluno[i].nome);
            printf("Endereço: %s\n",tipoAluno[i].endereco);
            printf("Data de nascimento: %d/%d/%d\n",tipoAluno[i].dataNascimento.dia,tipoAluno[i].dataNascimento.mes,tipoAluno[i].dataNascimento.ano);
            printf("Disciplina: %s\nProfessor da disciplina: %s\nNotas da disciplina: %.2f | %.2f | %.2f\n",tipoAluno[i].disciplinas.notas[0],tipoAluno[i].disciplinas.notas[1],tipoAluno[i].disciplinas.notas[2]);
            printf("Media do Aluno: %.2f\n",media);
            printf("\n\n");
            if (media>=6.0)
            {
                printf("ALUNO APROVADO\n");
            }
            else if ((media<6.0) && (media>=4.0))
            {
                printf("ALUNO RECUPERAÇÃO\n");
            }
            else if (media <4.0)
        {
            printf("ALUNO REPROVADO\n");
            }

            printf("\n");
            valor=1;
        }

    }

    if (valor==0)
    {
        printf("Nenhum aluno encontrado para a disciplina informada!");
    }
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
            cout << "Informa a posicao a ser exlucida: ";
            cin >> posicaoA;
            if (posicaoA)
            {
                if(posicao<=cont)
                {
                    alterarAluno(posicaoA);
                }
                else
                {
                    cout << "Impossível alterar posição não informada ou inexistente!";
                }

            }


        }
        else if (opcao==3)
        {
            cout << "Informe a possicao a ser excluida: ";
            cin >> posicao;
            if (posicao <=cont)
            {
                excluirAluno(posicao);
            }
            else
            {
                cout << "Não é possível excluir. Posição inválida.";
            }

        }
        else if (opcao==4)
        {

            buscarAluno();

        }
        else if (opcao==5)
        {
            if ((cont!=0) && (cont<10))
            {
                listarAluno();
                break;

            }
            else
            {
                cout << "Nenhum aluno cadastrado!\n";
            }

        }
        else if (opcao==6)
        {
            if ((cont!=0) && (cont <=10))
            {
                listarDisciplina();
            }
            else
            {

                cout << "Nenhum aluno encontrado para a disciplina procurada!";
            }

        }
        else if (opcao==7)
        {
            if ((cont!=0) && (cont<10))
            {
                listarAprovados();
            }
            else
            {
                printf("Nenhum Aluno Cadastrado. ");
            }

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








