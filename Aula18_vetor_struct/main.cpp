#include <iostream>
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <locale.h>
#include <iomanip>

using namespace std;

typedef struct
{
    char name[200];
    int age;
    float salary;
} Employee;
Employee empl[2];

char name_compare[200];
int position;

int main()
{
    setlocale(LC_ALL,"ENGLISH");
    int i;


    cout << "Size of struct employee: " <<sizeof(empl) << " = (200 + 4 + 4) * 2 "<< endl;

    //initialize the structure vector with null

    for(i=0; i<2 ; i++)
    {
        strcpy(empl[i].name,"NULL");
        empl[i].age=0;
        empl[i].salary=0.0;
    }

    for (i=0 ; i<2  ; i++)
    {
        printf("Enter the employee큦 name: ");
        scanf("%s%*c",&empl[i].name);
        printf("Enter the employee큦 age: ");
        scanf("%d%*c",&empl[i].age);
        printf("Enter the employee큦 salary: ");
        scanf("%f%*c",&empl[i].salary);

    }

    for (i=0; i<2  ; i++)
    {
        cout << " \n The employee큦 number"<<i+1<< " name is: " <<empl[i].name;
        cout << " \n The employee큦 number"<<i+1<< " age is: "<< empl[i].age;
        cout << " \n The employee큦 number"<<i+1<< " salary is "<< empl[i].salary << "\n";
    }

    //Accessing and modifying individually
    empl[1].age=18;
    cout << "\nThe age of the second employee has been changed to " << empl[1].age << "\n\n";

    //Searching the vector for a string
    cout << "Enter a name for a search: ";
    scanf("%s%*c",name_compare);

    for (i=0 ; i<2 ; i++)
    {
        if(strcmp(name_compare,empl[i].name)==0)
        {
            cout << "\n Record found! ";
            position=i;
        }
        else
        {
            position=-1;
        }

    }

    if (position !=-1)
    {
        cout << "\n Name found was: ";
        cout << "\n Employee큦 name from the search: " << empl[position].name;
        cout << "\n Employee큦 age from the search: " << empl[position].age;
        cout.setf(ios::fixed);
        cout << "\n Employee큦 salary from the search: " << setprecision(2) << empl[position].salary;
        cout << "\n----------------------------------------------------------------------------------------";

    }
    else
    {
        cout << "\n Record not found!";
    }

    if (position=-1)
    {
        cout << "\nThere are no records with the given name ";
    }

    return 0;
}
