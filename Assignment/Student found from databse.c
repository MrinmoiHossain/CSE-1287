#include <stdio.h>
#include <string.h>

void inputData();
void myFunction();

struct Student{
    char name[20];
    int age;
    double cgpa;
}callStudent[5];

int i;

int main(void)
{
    inputData();
    printf("\n");
    myFunction();

    return 0;
}

void inputData(void)
{
    printf("Enter the data according to age, name, cgpa:\n");
    for(i = 0; i < 5; i++)
        scanf("%d %s %lf", &callStudent[i].age, &callStudent[i].name, &callStudent[i].cgpa);
}

void myFunction(void)
{
    char newName[20];

    printf("Search Name: ");
    getchar();
    gets(newName);
    for(i = 0; i < 5; i++){
        if(strcmp(newName, callStudent[i].name)){
            printf("The name is founded\n");
            break;
        }
        else
            printf("Given name is not matched\n");
    }

}
